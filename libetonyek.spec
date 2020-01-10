%global apiversion 0.0

Name: libetonyek
Version: 0.0.4
Release: 2%{?dist}
Summary: A library for import of Apple Keynote presentations

Group: System Environment/Libraries
License: MPLv2.0
URL: http://wiki.documentfoundation.org/DLP/Libraries/libetonyek
Source: http://dev-www.libreoffice.org/src/%{name}/%{name}-%{version}.tar.xz

BuildRequires: boost-devel
BuildRequires: doxygen
BuildRequires: gperf
BuildRequires: help2man
BuildRequires: pkgconfig(cppunit)
BuildRequires: pkgconfig(libwpd-0.9)
BuildRequires: pkgconfig(libxml-2.0)
BuildRequires: pkgconfig(zlib)

Patch0: 0001-add-support-for-ppc64le.patch
Patch1: 0001-make-sure-this-is-never-called-with-0-length.patch
Patch2: 0001-CID-1130378-rearrange-a-bit.patch

%description
libetonyek is library providing ability to interpret and import Apple
Keynote presentations into various applications. Only version 5 is
supported at the moment, although versions 2-4 should work.

%package devel
Summary: Development files for %{name}
Group: Development/Libraries
Requires: %{name}%{?_isa} = %{version}-%{release}

%description devel
The %{name}-devel package contains libraries and header files for
developing applications that use %{name}.

%package doc
Summary: Documentation of %{name} API
Group: Documentation
BuildArch: noarch

%description doc
The %{name}-doc package contains documentation files for %{name}.

%package tools
Summary: Tools to transform Apple Keynote presentations into other formats
Group: Applications/Publishing
Requires: %{name}%{?_isa} = %{version}-%{release}

%description tools
Tools to transform Apple Keynote presentations into other formats.
Currently supported: XHTML, raw, text.

%prep
%autosetup -p1

%build
%configure --disable-silent-rules --disable-static --disable-werror
sed -i \
    -e 's|^hardcode_libdir_flag_spec=.*|hardcode_libdir_flag_spec=""|g' \
    -e 's|^runpath_var=LD_RUN_PATH|runpath_var=DIE_RPATH_DIE|g' \
    libtool
make %{?_smp_mflags}

export LD_LIBRARY_PATH=`pwd`/src/lib/.libs${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
help2man -N -n 'debug the conversion library' -o key2raw.1 ./src/conv/raw/.libs/key2raw
help2man -N -n 'convert Keynote presentation into SVG' -o key2xhtml.1 ./src/conv/svg/.libs/key2xhtml
help2man -N -n 'convert Keynote presentation into plain text' -o key2text.1 ./src/conv/text/.libs/key2text

%install
make install DESTDIR=%{buildroot}
rm -f %{buildroot}/%{_libdir}/*.la
# we install API docs directly from build
rm -rf %{buildroot}/%{_docdir}/%{name}

install -m 0755 -d %{buildroot}/%{_mandir}/man1
install -m 0644 key2*.1 %{buildroot}/%{_mandir}/man1

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%check
export LD_LIBRARY_PATH=%{buildroot}/%{_libdir}${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}
make %{?_smp_mflags} check

%files
%doc AUTHORS COPYING FEATURES NEWS README
%{_libdir}/%{name}-%{apiversion}.so.*

%files devel
%doc ChangeLog
%{_includedir}/%{name}-%{apiversion}
%{_libdir}/%{name}-%{apiversion}.so
%{_libdir}/pkgconfig/%{name}-%{apiversion}.pc

%files doc
%doc COPYING
%doc docs/doxygen/html

%files tools
%{_bindir}/key2raw
%{_bindir}/key2text
%{_bindir}/key2xhtml
%{_mandir}/man1/key2raw.1*
%{_mandir}/man1/key2text.1*
%{_mandir}/man1/key2xhtml.1*

%changelog
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
