/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf --compare-strncmp --enum --null-strings --readonly-tables --language C++ IWORKToken.gperf  */
/* Computed positions: -k'1-3,5-6,8,12,22,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gperf@gnu.org>."
#endif

#line 10 "IWORKToken.gperf"

#if defined __GNUC__
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

using namespace IWORKToken;
#line 18 "IWORKToken.gperf"
struct Token
{
  const char *name;
  int id;
};
#include <string.h>
/* maximum key range = 1200, duplicates = 0 */

class Perfect_Hash
{
private:
  static inline unsigned int hash (const char *str, size_t len);
public:
  static const struct Token *in_word_set (const char *str, size_t len);
};

inline unsigned int
Perfect_Hash::hash (const char *str, size_t len)
{
  static const unsigned short asso_values[] =
    {
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201,  185,   45,    0,   25,   35,
         0,    5,    0,   30,   10,    5,    0,    5,    0, 1201,
      1201, 1201, 1201, 1201, 1201,   25,   15,    0,   20, 1201,
       195, 1201, 1201,    0, 1201, 1201,   15,    0,    0,   20,
        20, 1201,    0,    0,   15, 1201, 1201,    0,   15,    0,
      1201, 1201, 1201, 1201, 1201,    5, 1201,   20,  140,   85,
        75,   30,   10,  245,  410,   55,    0,  398,   20,   90,
        30,    0,  235,    0,    0,    5,   15,  140,  305,  210,
       240,  325,   35,    0, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201, 1201,
      1201, 1201, 1201, 1201, 1201, 1201, 1201
    };
  unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[static_cast<unsigned char>(str[21])];
      /*FALLTHROUGH*/
      case 21:
      case 20:
      case 19:
      case 18:
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
        hval += asso_values[static_cast<unsigned char>(str[11]+1)];
      /*FALLTHROUGH*/
      case 11:
      case 10:
      case 9:
      case 8:
        hval += asso_values[static_cast<unsigned char>(str[7])];
      /*FALLTHROUGH*/
      case 7:
      case 6:
        hval += asso_values[static_cast<unsigned char>(str[5])];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[static_cast<unsigned char>(str[4])];
      /*FALLTHROUGH*/
      case 4:
      case 3:
        hval += asso_values[static_cast<unsigned char>(str[2])];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[static_cast<unsigned char>(str[1])];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[static_cast<unsigned char>(str[0])];
        break;
    }
  return hval + asso_values[static_cast<unsigned char>(str[len - 1])];
}

const struct Token *
Perfect_Hash::in_word_set (const char *str, size_t len)
{
  enum
    {
      TOTAL_KEYWORDS = 376,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 41,
      MIN_HASH_VALUE = 1,
      MAX_HASH_VALUE = 1200
    };

  static const struct Token wordlist[] =
    {
      {(char*)0},
#line 301 "IWORKToken.gperf"
      {"r",r},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 330 "IWORKToken.gperf"
      {"so",so},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 313 "IWORKToken.gperf"
      {"s",s},
#line 143 "IWORKToken.gperf"
      {"fo",fo},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 130 "IWORKToken.gperf"
      {"f",f},
#line 172 "IWORKToken.gperf"
      {"fs",fs},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 322 "IWORKToken.gperf"
      {"sf",sf},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 352 "IWORKToken.gperf"
      {"t",t},
#line 312 "IWORKToken.gperf"
      {"rt",rt},
      {(char*)0}, {(char*)0},
#line 341 "IWORKToken.gperf"
      {"stops",stops},
      {(char*)0},
#line 336 "IWORKToken.gperf"
      {"st",st},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 48 "IWORKToken.gperf"
      {"a",a},
#line 31 "IWORKToken.gperf"
      {"ID",ID},
      {(char*)0},
#line 337 "IWORKToken.gperf"
      {"star",star},
      {(char*)0},
#line 149 "IWORKToken.gperf"
      {"footer",footer},
#line 329 "IWORKToken.gperf"
      {"sl",sl},
      {(char*)0},
#line 146 "IWORKToken.gperf"
      {"fontColor",fontColor},
      {(char*)0},
#line 24 "IWORKToken.gperf"
      {"0",_0},
#line 150 "IWORKToken.gperf"
      {"footers",footers},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 323 "IWORKToken.gperf"
      {"sfa",sfa},
      {(char*)0}, {(char*)0},
#line 258 "IWORKToken.gperf"
      {"n",n},
#line 307 "IWORKToken.gperf"
      {"rn",rn},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 155 "IWORKToken.gperf"
      {"format",format},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 25 "IWORKToken.gperf"
      {"1",_1},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 224 "IWORKToken.gperf"
      {"left",left},
#line 153 "IWORKToken.gperf"
      {"footnotebr",footnotebr},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 154 "IWORKToken.gperf"
      {"footnotes",footnotes},
      {(char*)0},
#line 271 "IWORKToken.gperf"
      {"offset",offset},
      {(char*)0},
#line 379 "IWORKToken.gperf"
      {"transform-gradient",transform_gradient},
#line 208 "IWORKToken.gperf"
      {"join",join},
#line 26 "IWORKToken.gperf"
      {"1246774599",_1246774599},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 262 "IWORKToken.gperf"
      {"none",none},
#line 29 "IWORKToken.gperf"
      {"1347307366",_1347307366},
      {(char*)0}, {(char*)0},
#line 140 "IWORKToken.gperf"
      {"fit",fit},
      {(char*)0},
#line 137 "IWORKToken.gperf"
      {"first",first},
#line 164 "IWORKToken.gperf"
      {"format-type",format_type},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 30 "IWORKToken.gperf"
      {"1414088262",_1414088262},
      {(char*)0},
#line 84 "IWORKToken.gperf"
      {"cf",cf},
#line 151 "IWORKToken.gperf"
      {"footnote",footnote},
#line 132 "IWORKToken.gperf"
      {"fill",fill},
#line 95 "IWORKToken.gperf"
      {"color",color},
      {(char*)0},
#line 260 "IWORKToken.gperf"
      {"natural",natural},
      {(char*)0},
#line 361 "IWORKToken.gperf"
      {"tail",tail},
#line 131 "IWORKToken.gperf"
      {"false",false_},
      {(char*)0},
#line 111 "IWORKToken.gperf"
      {"ct",ct},
      {(char*)0}, {(char*)0},
#line 27 "IWORKToken.gperf"
      {"1299148630",_1299148630},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 374 "IWORKToken.gperf"
      {"tile",tile},
#line 28 "IWORKToken.gperf"
      {"1346651680",_1346651680},
#line 261 "IWORKToken.gperf"
      {"naturalSize",naturalSize},
#line 136 "IWORKToken.gperf"
      {"filters",filters},
#line 147 "IWORKToken.gperf"
      {"fontName",fontName},
#line 327 "IWORKToken.gperf"
      {"size",size},
      {(char*)0},
#line 229 "IWORKToken.gperf"
      {"linear",linear},
      {(char*)0},
#line 142 "IWORKToken.gperf"
      {"fmt",fmt},
#line 113 "IWORKToken.gperf"
      {"data",data},
      {(char*)0},
#line 314 "IWORKToken.gperf"
      {"scalar",scalar},
      {(char*)0}, {(char*)0},
#line 227 "IWORKToken.gperf"
      {"line",line},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 51 "IWORKToken.gperf"
      {"amt",amt},
      {(char*)0},
#line 225 "IWORKToken.gperf"
      {"leftIndent",leftIndent},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 375 "IWORKToken.gperf"
      {"title",title},
#line 112 "IWORKToken.gperf"
      {"d",d},
      {(char*)0},
#line 243 "IWORKToken.gperf"
      {"liststyle-ref",liststyle_ref},
#line 240 "IWORKToken.gperf"
      {"listStyle",listStyle},
#line 116 "IWORKToken.gperf"
      {"datasource",datasource},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 242 "IWORKToken.gperf"
      {"liststyle",liststyle},
#line 49 "IWORKToken.gperf"
      {"align",align},
#line 302 "IWORKToken.gperf"
      {"radial",radial},
#line 126 "IWORKToken.gperf"
      {"element",element},
#line 148 "IWORKToken.gperf"
      {"fontSize",fontSize},
#line 239 "IWORKToken.gperf"
      {"listLabelTypes",listLabelTypes},
#line 253 "IWORKToken.gperf"
      {"miter",miter},
      {(char*)0},
#line 108 "IWORKToken.gperf"
      {"cornerRadius",cornerRadius},
#line 167 "IWORKToken.gperf"
      {"fraction",fraction},
      {(char*)0},
#line 241 "IWORKToken.gperf"
      {"listTextIndents",listTextIndents},
#line 73 "IWORKToken.gperf"
      {"c",c},
      {(char*)0}, {(char*)0},
#line 259 "IWORKToken.gperf"
      {"name",name},
#line 316 "IWORKToken.gperf"
      {"scale",scale},
#line 159 "IWORKToken.gperf"
      {"format-decimal-places",format_decimal_places},
#line 362 "IWORKToken.gperf"
      {"tailAtCenter",tailAtCenter},
#line 364 "IWORKToken.gperf"
      {"tailPositionY",tailPositionY},
      {(char*)0},
#line 331 "IWORKToken.gperf"
      {"solid",solid},
#line 248 "IWORKToken.gperf"
      {"m",m},
      {(char*)0}, {(char*)0},
#line 354 "IWORKToken.gperf"
      {"tabs",tabs},
#line 138 "IWORKToken.gperf"
      {"firstLineIndent",firstLineIndent},
      {(char*)0},
#line 60 "IWORKToken.gperf"
      {"authors",authors},
#line 304 "IWORKToken.gperf"
      {"relative",relative},
#line 380 "IWORKToken.gperf"
      {"true",true_},
#line 158 "IWORKToken.gperf"
      {"format-currency-code",format_currency_code},
      {(char*)0},
#line 141 "IWORKToken.gperf"
      {"fm",fm},
#line 363 "IWORKToken.gperf"
      {"tailPositionX",tailPositionX},
#line 244 "IWORKToken.gperf"
      {"lnbr",lnbr},
#line 197 "IWORKToken.gperf"
      {"ident",ident},
#line 238 "IWORKToken.gperf"
      {"listLabelIndents",listLabelIndents},
#line 104 "IWORKToken.gperf"
      {"content",content},
      {(char*)0},
#line 254 "IWORKToken.gperf"
      {"mode",mode},
#line 133 "IWORKToken.gperf"
      {"filterClassName",filterClassName},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 196 "IWORKToken.gperf"
      {"id",id},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 318 "IWORKToken.gperf"
      {"section",section},
#line 365 "IWORKToken.gperf"
      {"tailSize",tailSize},
      {(char*)0}, {(char*)0},
#line 320 "IWORKToken.gperf"
      {"sectionstyle_ref",sectionstyle_ref},
      {(char*)0}, {(char*)0},
#line 311 "IWORKToken.gperf"
      {"rows",rows},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 156 "IWORKToken.gperf"
      {"format-base",format_base},
      {(char*)0}, {(char*)0},
#line 109 "IWORKToken.gperf"
      {"crbr",crbr},
#line 198 "IWORKToken.gperf"
      {"image",image},
      {(char*)0},
#line 319 "IWORKToken.gperf"
      {"sectionstyle",sectionstyle},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 98 "IWORKToken.gperf"
      {"columns",columns},
      {(char*)0},
#line 69 "IWORKToken.gperf"
      {"bold",bold},
#line 250 "IWORKToken.gperf"
      {"media",media},
#line 63 "IWORKToken.gperf"
      {"bezier",bezier},
      {(char*)0}, {(char*)0},
#line 384 "IWORKToken.gperf"
      {"unfiltered-ref",unfiltered_ref},
      {(char*)0},
#line 119 "IWORKToken.gperf"
      {"displayname",displayname},
      {(char*)0},
#line 296 "IWORKToken.gperf"
      {"pos",pos},
#line 103 "IWORKToken.gperf"
      {"container-hint",container_hint},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 157 "IWORKToken.gperf"
      {"format-base-places",format_base_places},
      {(char*)0},
#line 65 "IWORKToken.gperf"
      {"bezier-ref",bezier_ref},
      {(char*)0},
#line 99 "IWORKToken.gperf"
      {"comment",comment},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 96 "IWORKToken.gperf"
      {"column",column},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 161 "IWORKToken.gperf"
      {"format-negative-style",format_negative_style},
      {(char*)0}, {(char*)0},
#line 50 "IWORKToken.gperf"
      {"alignment",alignment},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 134 "IWORKToken.gperf"
      {"filtered",filtered},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 274 "IWORKToken.gperf"
      {"outline",outline},
#line 252 "IWORKToken.gperf"
      {"metadata",metadata},
      {(char*)0}, {(char*)0},
#line 61 "IWORKToken.gperf"
      {"b",b},
#line 303 "IWORKToken.gperf"
      {"rb",rb},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 328 "IWORKToken.gperf"
      {"sizesLocked",sizesLocked},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 245 "IWORKToken.gperf"
      {"locked",locked},
#line 268 "IWORKToken.gperf"
      {"numcols", numcols},
      {(char*)0},
#line 335 "IWORKToken.gperf"
      {"span",span},
#line 308 "IWORKToken.gperf"
      {"round",round},
#line 266 "IWORKToken.gperf"
      {"number",number},
      {(char*)0},
#line 214 "IWORKToken.gperf"
      {"language",language},
#line 122 "IWORKToken.gperf"
      {"drawables",drawables},
#line 383 "IWORKToken.gperf"
      {"unfiltered",unfiltered},
#line 120 "IWORKToken.gperf"
      {"double",double_},
      {(char*)0}, {(char*)0},
#line 367 "IWORKToken.gperf"
      {"text",text},
#line 201 "IWORKToken.gperf"
      {"inflection",inflection},
      {(char*)0}, {(char*)0},
#line 163 "IWORKToken.gperf"
      {"format-string",format_string},
      {(char*)0},
#line 263 "IWORKToken.gperf"
      {"num-footer-rows",num_footer_rows},
#line 162 "IWORKToken.gperf"
      {"format-show-thousands-separator",format_show_thousands_separator},
      {(char*)0}, {(char*)0},
#line 72 "IWORKToken.gperf"
      {"butt",butt},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 353 "IWORKToken.gperf"
      {"tab",tab},
      {(char*)0},
#line 288 "IWORKToken.gperf"
      {"parent-ref",parent_ref},
#line 207 "IWORKToken.gperf"
      {"italic",italic},
      {(char*)0},
#line 115 "IWORKToken.gperf"
      {"data-ref",data_ref},
      {(char*)0},
#line 294 "IWORKToken.gperf"
      {"point",point},
      {(char*)0},
#line 118 "IWORKToken.gperf"
      {"decimal",decimal},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 117 "IWORKToken.gperf"
      {"date-format",date_format},
      {(char*)0}, {(char*)0},
#line 382 "IWORKToken.gperf"
      {"underline",underline},
#line 305 "IWORKToken.gperf"
      {"right",right},
#line 85 "IWORKToken.gperf"
      {"cf-ref",cf_ref},
#line 290 "IWORKToken.gperf"
      {"pattern",pattern},
      {(char*)0},
#line 34 "IWORKToken.gperf"
      {"SFTCellStylePropertyDateTimeFormat",SFTCellStylePropertyDateTimeFormat},
#line 332 "IWORKToken.gperf"
      {"spaceAfter",spaceAfter},
#line 70 "IWORKToken.gperf"
      {"bottom",bottom},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 102 "IWORKToken.gperf"
      {"connection-style",connection_style},
      {(char*)0},
#line 145 "IWORKToken.gperf"
      {"followingParagraphStyle",followingParagraphStyle},
      {(char*)0},
#line 124 "IWORKToken.gperf"
      {"duration-format",duration_format},
#line 37 "IWORKToken.gperf"
      {"SFTCellStylePropertyLayoutStyle",SFTCellStylePropertyLayoutStyle},
      {(char*)0},
#line 110 "IWORKToken.gperf"
      {"custom-space-color",custom_space_color},
#line 38 "IWORKToken.gperf"
      {"SFTCellStylePropertyParagraphStyle",SFTCellStylePropertyParagraphStyle},
#line 144 "IWORKToken.gperf"
      {"followingLayoutStyle",followingLayoutStyle},
#line 333 "IWORKToken.gperf"
      {"spaceBefore",spaceBefore},
#line 123 "IWORKToken.gperf"
      {"du",du},
#line 398 "IWORKToken.gperf"
      {"xsi",xsi},
      {(char*)0},
#line 52 "IWORKToken.gperf"
      {"angle",angle},
#line 97 "IWORKToken.gperf"
      {"column-label-formulas",column_label_formulas},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 203 "IWORKToken.gperf"
      {"inputColor",inputColor},
#line 71 "IWORKToken.gperf"
      {"bullet",bullet},
#line 80 "IWORKToken.gperf"
      {"cb",cb},
#line 388 "IWORKToken.gperf"
      {"val",val},
      {(char*)0},
#line 215 "IWORKToken.gperf"
      {"layer",layer},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 135 "IWORKToken.gperf"
      {"filtered-image",filtered_image},
#line 139 "IWORKToken.gperf"
      {"firstPageMaster",firstPageMaster},
      {(char*)0}, {(char*)0},
#line 297 "IWORKToken.gperf"
      {"position",position},
#line 178 "IWORKToken.gperf"
      {"grid",grid},
      {(char*)0},
#line 217 "IWORKToken.gperf"
      {"layers",layers},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 206 "IWORKToken.gperf"
      {"intratopicbr",intratopicbr},
#line 355 "IWORKToken.gperf"
      {"tabs-ref",tabs_ref},
      {(char*)0}, {(char*)0},
#line 348 "IWORKToken.gperf"
      {"styles",styles},
      {(char*)0},
#line 128 "IWORKToken.gperf"
      {"equal-columns",equal_columns},
#line 366 "IWORKToken.gperf"
      {"technique",technique},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 166 "IWORKToken.gperf"
      {"formula-chart-model",formula_chart_model},
      {(char*)0},
#line 74 "IWORKToken.gperf"
      {"cached-data",cached_data},
      {(char*)0}, {(char*)0},
#line 237 "IWORKToken.gperf"
      {"listLabelGeometries",listLabelGeometries},
#line 321 "IWORKToken.gperf"
      {"self-contained-movie",self_contained_movie},
#line 376 "IWORKToken.gperf"
      {"title-placeholder-ref",title_placeholder_ref},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 346 "IWORKToken.gperf"
      {"style",style},
#line 351 "IWORKToken.gperf"
      {"superscript",superscript},
      {(char*)0},
#line 94 "IWORKToken.gperf"
      {"col-span",col_span},
      {(char*)0},
#line 32 "IWORKToken.gperf"
      {"IDREF",IDREF},
#line 306 "IWORKToken.gperf"
      {"rightIndent",rightIndent},
#line 293 "IWORKToken.gperf"
      {"pm",pm},
      {(char*)0}, {(char*)0},
#line 100 "IWORKToken.gperf"
      {"connection-line",connection_line},
#line 394 "IWORKToken.gperf"
      {"w",w},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 356 "IWORKToken.gperf"
      {"tabstop",tabstop},
      {(char*)0},
#line 275 "IWORKToken.gperf"
      {"overrides",overrides},
#line 349 "IWORKToken.gperf"
      {"stylesheet",stylesheet},
      {(char*)0}, {(char*)0},
#line 270 "IWORKToken.gperf"
      {"oddPageMaster",oddPageMaster},
#line 350 "IWORKToken.gperf"
      {"stylesheet-ref",stylesheet_ref},
      {(char*)0},
#line 199 "IWORKToken.gperf"
      {"image-media",image_media},
      {(char*)0},
#line 358 "IWORKToken.gperf"
      {"tabular-model",tabular_model},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 81 "IWORKToken.gperf"
      {"cell-date",cell_date},
      {(char*)0}, {(char*)0},
#line 251 "IWORKToken.gperf"
      {"menu-choices",menu_choices},
      {(char*)0},
#line 192 "IWORKToken.gperf"
      {"href",href},
      {(char*)0},
#line 247 "IWORKToken.gperf"
      {"lower-roman",lower_roman},
#line 36 "IWORKToken.gperf"
      {"SFTCellStylePropertyNumberFormat",SFTCellStylePropertyNumberFormat},
      {(char*)0},
#line 35 "IWORKToken.gperf"
      {"SFTCellStylePropertyDurationFormat",SFTCellStylePropertyDurationFormat},
      {(char*)0},
#line 391 "IWORKToken.gperf"
      {"vector-style-ref",vector_style_ref},
#line 169 "IWORKToken.gperf"
      {"frame-w",frame_w},
#line 114 "IWORKToken.gperf"
      {"data-formulas",data_formulas},
      {(char*)0}, {(char*)0},
#line 246 "IWORKToken.gperf"
      {"lower-alpha",lower_alpha},
      {(char*)0},
#line 267 "IWORKToken.gperf"
      {"number-format",number_format},
#line 121 "IWORKToken.gperf"
      {"drawable-shape",drawable_shape},
      {(char*)0},
#line 276 "IWORKToken.gperf"
      {"p",p},
#line 56 "IWORKToken.gperf"
      {"aspectRatioLocked",aspectRatioLocked},
      {(char*)0},
#line 78 "IWORKToken.gperf"
      {"capitalization",capitalization},
      {(char*)0}, {(char*)0},
#line 390 "IWORKToken.gperf"
      {"vector-style",vector_style},
#line 204 "IWORKToken.gperf"
      {"inputDistance",inputDistance},
      {(char*)0}, {(char*)0},
#line 397 "IWORKToken.gperf"
      {"x",x},
#line 269 "IWORKToken.gperf"
      {"numrows", numrows},
      {(char*)0},
#line 345 "IWORKToken.gperf"
      {"stroke",stroke},
      {(char*)0},
#line 152 "IWORKToken.gperf"
      {"footnote-mark",footnote_mark},
#line 226 "IWORKToken.gperf"
      {"leveled",leveled},
#line 377 "IWORKToken.gperf"
      {"top",top},
      {(char*)0}, {(char*)0},
#line 173 "IWORKToken.gperf"
      {"g",g},
#line 170 "IWORKToken.gperf"
      {"frame-x",frame_x},
      {(char*)0},
#line 47 "IWORKToken.gperf"
      {"__multilingual",__multilingual},
      {(char*)0},
#line 185 "IWORKToken.gperf"
      {"header",header},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 324 "IWORKToken.gperf"
      {"shape",shape},
      {(char*)0},
#line 186 "IWORKToken.gperf"
      {"headers",headers},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 231 "IWORKToken.gperf"
      {"link",link},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 249 "IWORKToken.gperf"
      {"mark",mark},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 326 "IWORKToken.gperf"
      {"shearYAngle",shearYAngle},
#line 360 "IWORKToken.gperf"
      {"tabular-style-ref",tabular_style_ref},
#line 310 "IWORKToken.gperf"
      {"row-span",row_span},
      {(char*)0}, {(char*)0},
#line 338 "IWORKToken.gperf"
      {"start-index",start_index},
#line 287 "IWORKToken.gperf"
      {"parent-ident",parent_ident},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 371 "IWORKToken.gperf"
      {"text-storage",text_storage},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 325 "IWORKToken.gperf"
      {"shearXAngle",shearXAngle},
      {(char*)0},
#line 359 "IWORKToken.gperf"
      {"tabular-style",tabular_style},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 342 "IWORKToken.gperf"
      {"stretch",stretch},
#line 309 "IWORKToken.gperf"
      {"row-label-formulas",row_label_formulas},
#line 184 "IWORKToken.gperf"
      {"head",head},
      {(char*)0},
#line 218 "IWORKToken.gperf"
      {"layout",layout},
      {(char*)0},
#line 62 "IWORKToken.gperf"
      {"baselineShift",baselineShift},
#line 392 "IWORKToken.gperf"
      {"vertical-gridline-styles",vertical_gridline_styles,},
      {(char*)0},
#line 344 "IWORKToken.gperf"
      {"string",string},
      {(char*)0}, {(char*)0},
#line 53 "IWORKToken.gperf"
      {"angle-gradient",angle_gradient},
#line 317 "IWORKToken.gperf"
      {"scale-with-text",scale_with_text},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 219 "IWORKToken.gperf"
      {"layoutMargins",layoutMargins},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 213 "IWORKToken.gperf"
      {"kind",kind},
      {(char*)0},
#line 160 "IWORKToken.gperf"
      {"format-fraction-accuracy",format_fraction_accuracy},
      {(char*)0}, {(char*)0},
#line 165 "IWORKToken.gperf"
      {"format-use-accounting-style",format_use_accounting_style},
      {(char*)0}, {(char*)0},
#line 67 "IWORKToken.gperf"
      {"binary-ref",binary_ref},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 222 "IWORKToken.gperf"
      {"layoutstyle",layoutstyle},
#line 171 "IWORKToken.gperf"
      {"frame-y",frame_y},
#line 77 "IWORKToken.gperf"
      {"cap",cap},
#line 221 "IWORKToken.gperf"
      {"layoutParagraphStyle-ref",layoutParagraphStyle_ref},
      {(char*)0},
#line 54 "IWORKToken.gperf"
      {"anon-styles",anon_styles},
      {(char*)0}, {(char*)0},
#line 234 "IWORKToken.gperf"
      {"list-label-typeinfo",list_label_typeinfo},
#line 340 "IWORKToken.gperf"
      {"stop-index",stop_index},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 129 "IWORKToken.gperf"
      {"evenPageMaster",evenPageMaster},
#line 200 "IWORKToken.gperf"
      {"implicit-format-type",implicit_format_type},
#line 59 "IWORKToken.gperf"
      {"attachments",attachments},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 220 "IWORKToken.gperf"
      {"layoutParagraphStyle",layoutParagraphStyle},
      {(char*)0},
#line 334 "IWORKToken.gperf"
      {"spacing",spacing},
      {(char*)0},
#line 216 "IWORKToken.gperf"
      {"layer-ref",layer_ref},
#line 57 "IWORKToken.gperf"
      {"attachment",attachment},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 58 "IWORKToken.gperf"
      {"attachment-ref",attachment_ref},
#line 223 "IWORKToken.gperf"
      {"layoutstyle-ref",layoutstyle_ref},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 381 "IWORKToken.gperf"
      {"type",type},
      {(char*)0},
#line 387 "IWORKToken.gperf"
      {"v",v},
#line 107 "IWORKToken.gperf"
      {"core-image-filter-info",core_image_filter_info},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 236 "IWORKToken.gperf"
      {"list-level",list_level},
#line 299 "IWORKToken.gperf"
      {"proxied-cell-ref",proxied_cell_ref},
      {(char*)0},
#line 373 "IWORKToken.gperf"
      {"textured-fill",textured_fill},
#line 278 "IWORKToken.gperf"
      {"pgbr",pgbr},
      {(char*)0},
#line 75 "IWORKToken.gperf"
      {"calc-engine",calc_engine},
      {(char*)0},
#line 235 "IWORKToken.gperf"
      {"list-label-typeinfo-ref",list_label_typeinfo_ref},
      {(char*)0}, {(char*)0},
#line 179 "IWORKToken.gperf"
      {"grid-column",grid_column},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 281 "IWORKToken.gperf"
      {"pagemaster",pagemaster},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 187 "IWORKToken.gperf"
      {"headline-style",headline_style},
#line 202 "IWORKToken.gperf"
      {"inputAngle",inputAngle},
#line 273 "IWORKToken.gperf"
      {"other-datas",other_datas},
#line 357 "IWORKToken.gperf"
      {"tabular-info",tabular_info},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 399 "IWORKToken.gperf"
      {"y",y},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 389 "IWORKToken.gperf"
      {"value-title",value_title},
#line 272 "IWORKToken.gperf"
      {"opacity",opacity},
      {(char*)0},
#line 370 "IWORKToken.gperf"
      {"text-label-ref",text_label_ref},
#line 369 "IWORKToken.gperf"
      {"text-label",text_label},
      {(char*)0},
#line 168 "IWORKToken.gperf"
      {"frame-h",frame_h},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 279 "IWORKToken.gperf"
      {"padding",padding},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 255 "IWORKToken.gperf"
      {"movie-media",movie_media},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 55 "IWORKToken.gperf"
      {"array",array},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 83 "IWORKToken.gperf"
      {"cell-style-ref",cell_style_ref},
      {(char*)0},
#line 228 "IWORKToken.gperf"
      {"lineSpacing",lineSpacing},
      {(char*)0}, {(char*)0},
#line 289 "IWORKToken.gperf"
      {"path",path},
#line 193 "IWORKToken.gperf"
      {"http://developer.apple.com/namespaces/sf",NS_URI_SF},
#line 230 "IWORKToken.gperf"
      {"linespacing",linespacing},
      {(char*)0}, {(char*)0},
#line 181 "IWORKToken.gperf"
      {"gridline-index",gridline_index,},
#line 82 "IWORKToken.gperf"
      {"cell-style",cell_style},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 194 "IWORKToken.gperf"
      {"http://developer.apple.com/namespaces/sfa",NS_URI_SFA},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 395 "IWORKToken.gperf"
      {"widowControl",widowControl},
#line 105 "IWORKToken.gperf"
      {"core-image-filter-descriptor",core_image_filter_descriptor},
#line 33 "IWORKToken.gperf"
      {"SFIUDropShadow",SFIUDropShadow},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 101 "IWORKToken.gperf"
      {"connection-path",connection_path},
      {(char*)0}, {(char*)0},
#line 87 "IWORKToken.gperf"
      {"characterstyle-ref",characterstyle_ref},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 106 "IWORKToken.gperf"
      {"core-image-filter-descriptor-ref",core_image_filter_descriptor_ref},
      {(char*)0}, {(char*)0},
#line 182 "IWORKToken.gperf"
      {"group",group},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 86 "IWORKToken.gperf"
      {"characterstyle",characterstyle},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 277 "IWORKToken.gperf"
      {"page-start",page_start},
      {(char*)0}, {(char*)0},
#line 88 "IWORKToken.gperf"
      {"chart-column_names",chart_column_names},
#line 347 "IWORKToken.gperf"
      {"style-run",style_run},
#line 43 "IWORKToken.gperf"
      {"SFTHeaderColumnRepeatsProperty",SFTHeaderColumnRepeatsProperty},
      {(char*)0},
#line 393 "IWORKToken.gperf"
      {"verticalFlip",verticalFlip},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 205 "IWORKToken.gperf"
      {"inputOpacity",inputOpacity},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 89 "IWORKToken.gperf"
      {"chart-info",chart_info},
      {(char*)0},
#line 257 "IWORKToken.gperf"
      {"mutable-array-ref",mutable_array_ref},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 212 "IWORKToken.gperf"
      {"keywords",keywords},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 91 "IWORKToken.gperf"
      {"chart-name",chart_name},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 125 "IWORKToken.gperf"
      {"editable-bezier-path",editable_bezier_path},
#line 42 "IWORKToken.gperf"
      {"SFTDefaultHeaderRowCellStyleProperty",SFTDefaultHeaderRowCellStyleProperty},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 284 "IWORKToken.gperf"
      {"paragraphStroke",paragraphStroke},
#line 315 "IWORKToken.gperf"
      {"scalar-path",scalar_path},
      {(char*)0},
#line 300 "IWORKToken.gperf"
      {"proxy-master-layer",proxy_master_layer},
#line 282 "IWORKToken.gperf"
      {"paragraphBorderType",paragraphBorderType},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 90 "IWORKToken.gperf"
      {"chart-model-object",chart_model_object},
#line 41 "IWORKToken.gperf"
      {"SFTDefaultHeaderColumnCellStyleProperty",SFTDefaultHeaderColumnCellStyleProperty},
      {(char*)0}, {(char*)0},
#line 209 "IWORKToken.gperf"
      {"k",k},
#line 286 "IWORKToken.gperf"
      {"paragraphstyle-ref",paragraphstyle_ref},
#line 191 "IWORKToken.gperf"
      {"horizontalFlip",horizontalFlip},
#line 265 "IWORKToken.gperf"
      {"num-header-rows",num_header_rows},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 292 "IWORKToken.gperf"
      {"placeholder-style-ref",placeholder_style_ref},
      {(char*)0}, {(char*)0},
#line 285 "IWORKToken.gperf"
      {"paragraphstyle",paragraphstyle},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 183 "IWORKToken.gperf"
      {"h",h},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 280 "IWORKToken.gperf"
      {"pageBreakBefore",pageBreakBefore},
      {(char*)0},
#line 291 "IWORKToken.gperf"
      {"placeholder-style",placeholder_style},
#line 76 "IWORKToken.gperf"
      {"callout2-path",callout2_path},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 189 "IWORKToken.gperf"
      {"hfs-type",hfs_type},
      {(char*)0}, {(char*)0},
#line 386 "IWORKToken.gperf"
      {"upper-roman",upper_roman},
#line 298 "IWORKToken.gperf"
      {"property-map",property_map},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 385 "IWORKToken.gperf"
      {"upper-alpha",upper_alpha},
      {(char*)0},
#line 175 "IWORKToken.gperf"
      {"gradient-stop",gradient_stop},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 283 "IWORKToken.gperf"
      {"paragraphFill",paragraphFill},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 339 "IWORKToken.gperf"
      {"sticky-note",sticky_note},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 264 "IWORKToken.gperf"
      {"num-header-columns",num_header_columns},
#line 79 "IWORKToken.gperf"
      {"category-title",category_title},
#line 92 "IWORKToken.gperf"
      {"chart-row_names",chart_row_names},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 66 "IWORKToken.gperf"
      {"binary",binary},
#line 44 "IWORKToken.gperf"
      {"SFTHeaderRowRepeatsProperty",SFTHeaderRowRepeatsProperty},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 64 "IWORKToken.gperf"
      {"bezier-path",bezier_path},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 233 "IWORKToken.gperf"
      {"list-label-geometry-ref",list_label_geometry_ref},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 180 "IWORKToken.gperf"
      {"grid-row",grid_row},
      {(char*)0}, {(char*)0},
#line 190 "IWORKToken.gperf"
      {"horizontal-gridline-styles",horizontal_gridline_styles},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 68 "IWORKToken.gperf"
      {"body-placeholder-ref",body_placeholder_ref},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 295 "IWORKToken.gperf"
      {"point-path",point_path},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 188 "IWORKToken.gperf"
      {"height",height},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 174 "IWORKToken.gperf"
      {"geometry",geometry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0},
#line 210 "IWORKToken.gperf"
      {"keepLinesTogether",keepLinesTogether},
#line 378 "IWORKToken.gperf"
      {"tracking",tracking},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 195 "IWORKToken.gperf"
      {"http://www.w3.org/2001/XMLSchema-instance",NS_URI_XSI},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 39 "IWORKToken.gperf"
      {"SFTDefaultBodyCellStyleProperty",SFTDefaultBodyCellStyleProperty},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 40 "IWORKToken.gperf"
      {"SFTDefaultFooterRowCellStyleProperty",SFTDefaultFooterRowCellStyleProperty},
      {(char*)0},
#line 343 "IWORKToken.gperf"
      {"strikethru",strikethru},
      {(char*)0},
#line 127 "IWORKToken.gperf"
      {"empty",empty},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 46 "IWORKToken.gperf"
      {"SFTTableBandedRowsProperty",SFTTableBandedRowsProperty},
      {(char*)0}, {(char*)0},
#line 368 "IWORKToken.gperf"
      {"text-body",text_body},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 177 "IWORKToken.gperf"
      {"graphic-style-ref",graphic_style_ref},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 176 "IWORKToken.gperf"
      {"graphic-style",graphic_style},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 256 "IWORKToken.gperf"
      {"mutable-array",mutable_array},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0},
#line 93 "IWORKToken.gperf"
      {"chart-type",chart_type},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 211 "IWORKToken.gperf"
      {"keepWithNext",keepWithNext},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 372 "IWORKToken.gperf"
      {"textBackground",textBackground},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 396 "IWORKToken.gperf"
      {"width",width},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0},
#line 232 "IWORKToken.gperf"
      {"list-label-geometry",list_label_geometry},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
      {(char*)0}, {(char*)0}, {(char*)0}, {(char*)0},
#line 45 "IWORKToken.gperf"
      {"SFTStrokeProperty", SFTStrokeProperty}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          const char *s = wordlist[key].name;

          if (s && *str == *s && !strncmp (str + 1, s + 1, len - 1) && s[len] == '\0')
            return &wordlist[key];
        }
    }
  return 0;
}
#line 400 "IWORKToken.gperf"

