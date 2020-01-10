%global apiversion 0.1

Name: libetonyek
Version: 0.1.7
Release: 1%{?dist}
Summary: A library for import of Apple iWork documents

License: MPLv2.0
URL: http://wiki.documentfoundation.org/DLP/Libraries/libetonyek
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: boost-devel
BuildRequires: doxygen
BuildRequires: glm-devel
BuildRequires: gperf
BuildRequires: help2man
BuildRequires: pkgconfig(cppunit)
BuildRequires: pkgconfig(liblangtag)
BuildRequires: pkgconfig(librevenge-0.0)
BuildRequires: pkgconfig(libxml-2.0)
BuildRequires: pkgconfig(mdds-1.2)
BuildRequires: pkgconfig(zlib)

%description
%{name} is library for import of documents from Apple iWork applications
(Keynote, Pages and Numbers). It can import documents created by
Keynote 2-6, Pages 1-4 and Numbers 1-2. The support for Numbers is rather
minimal at the moment.

%package devel
Summary: Development files for %{name}
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform Apple iWork documents into other formats
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform Apple iWork documents into other formats. Currently
supported: CSV, HTML, SVG, text, and raw.

%prep
%autosetup -p1

%build
%configure --disable-silent-rules --disable-static --disable-werror
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

# generate and install man pages
export LD_LIBRARY_PATH=%{buildroot}/%{_libdir}${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
for tool in key2raw key2text key2xhtml numbers2csv numbers2raw numbers2text pages2html pages2raw pages2text; do
    help2man -N -S '%{name} %{version}' -o ${tool}.1 %{buildroot}%{_bindir}/${tool}
done
install -m 0755 -d %{buildroot}/%{_mandir}/man1
install -m 0644 key2*.1 numbers2*.1 pages2*.1 %{buildroot}/%{_mandir}/man1

%post -p /sbin/ldconfig
%postun -p /sbin/ldconfig

%check
export LD_LIBRARY_PATH=%{buildroot}/%{_libdir}${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
if ! make %{?_smp_mflags} check; then
    cat src/test/*.log
    exit 1
fi

%files
%doc AUTHORS FEATURES NEWS README
%license COPYING
%{_libdir}/%{name}-%{apiversion}.so.*

%files devel
%doc ChangeLog
%{_includedir}/%{name}-%{apiversion}
%{_libdir}/%{name}-%{apiversion}.so
%{_libdir}/pkgconfig/%{name}-%{apiversion}.pc

%files doc
%license COPYING
%doc docs/doxygen/html

%files tools
%{_bindir}/key2raw
%{_bindir}/key2text
%{_bindir}/key2xhtml
%{_bindir}/numbers2csv
%{_bindir}/numbers2raw
%{_bindir}/numbers2text
%{_bindir}/pages2html
%{_bindir}/pages2raw
%{_bindir}/pages2text
%{_mandir}/man1/key2raw.1*
%{_mandir}/man1/key2text.1*
%{_mandir}/man1/key2xhtml.1*
%{_mandir}/man1/numbers2csv.1*
%{_mandir}/man1/numbers2raw.1*
%{_mandir}/man1/numbers2text.1*
%{_mandir}/man1/pages2html.1*
%{_mandir}/man1/pages2raw.1*
%{_mandir}/man1/pages2text.1*

%changelog
* Mon Oct 23 2017 David Tardon <dtardon@redhat.com> - 0.1.7-1
- Resolves: rhbz#1477216 rebase to 0.1.7

* Fri Jun 12 2015 David Tardon <dtardon@redhat.com> - 0.1.2-4
- Related: rhbz#1207752 fix output of shapes

* Sun May 31 2015 David Tardon <dtardon@redhat.com> - 0.1.2-3
- Related: rhbz#1207752 avoid use of uninitialized value

* Tue May 26 2015 David Tardon <dtardon@redhat.com> - 0.1.2-2
- Related: rhbz#1207752 fix some problems found by coverity

* Tue May 26 2015 David Tardon <dtardon@redhat.com> - 0.1.2-1
- Resolves: rhbz#1207752 rebase to 0.1.2

* Fri Apr 17 2015 David Tardon <dtardon@redhat.com> - 0.1.1-1
- Resolves: rhbz#1207752 rebase to 0.1.1

* Fri Sep 12 2014 David Tardon <dtardon@redhat.com> - 0.0.4-2
- Related: rhbz#1130553 fix coverity issue

* Tue Apr 15 2014 David Tardon <dtardon@redhat.com> - 0.0.4-1
- new upstream release

* Wed Apr 09 2014 David Tardon <dtardon@redhat.com> - 0.0.3-2
- generate man pages

* Fri Dec 06 2013 David Tardon <dtardon@redhat.com> - 0.0.3-1
- new release

* Wed Dec 04 2013 David Tardon <dtardon@redhat.com> - 0.0.2-1
- new release

* Mon Nov 04 2013 David Tardon <dtardon@redhat.com> - 0.0.1-1
- new release

* Wed Oct 30 2013 David Tardon <dtardon@redhat.com> 0.0.0-1
- initial import
