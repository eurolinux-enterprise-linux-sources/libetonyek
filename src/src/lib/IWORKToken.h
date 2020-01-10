/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libetonyek project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#ifndef IWORKTOKEN_H_INCLUDED
#define IWORKTOKEN_H_INCLUDED

#include <boost/static_assert.hpp>

#include "IWORKTokenInfo.h"

namespace libetonyek
{

class IWORKTokenizer;

namespace IWORKToken
{

enum
{
  INVALID_TOKEN = 0,
  FIRST_TOKEN = IWORKTokenInfo<IWORKParser>::first,

  // namespace prefixes
  sf,
  sfa,
  xsi,

  // elements
  SFTCellStylePropertyDateTimeFormat,
  SFTCellStylePropertyDurationFormat,
  SFTCellStylePropertyNumberFormat,
  SFTCellStylePropertyLayoutStyle,
  SFTCellStylePropertyParagraphStyle,
  SFTDefaultBodyCellStyleProperty,
  SFTDefaultFooterRowCellStyleProperty,
  SFTDefaultHeaderColumnCellStyleProperty,
  SFTDefaultHeaderRowCellStyleProperty,
  SFTHeaderColumnRepeatsProperty,
  SFTHeaderRowRepeatsProperty,
  SFTStrokeProperty,
  SFTTableBandedRowsProperty,
  alignment,
  angle_gradient,
  anon_styles,
  array,
  attachment,
  attachment_ref,
  attachments,
  authors,
  baselineShift,
  bezier,
  bezier_path,
  bezier_ref,
  binary,
  binary_ref,
  body_placeholder_ref,
  bold,
  cached_data,
  calc_engine,
  callout2_path,
  capitalization,
  category_title,
  cb,
  cell_date,
  cell_style,
  cell_style_ref,
  cf, // condition
  cf_ref,
  characterstyle,
  characterstyle_ref,
  chart_column_names,
  chart_info,
  chart_model_object,
  chart_name,
  chart_row_names,
  chart_type,
  color,
  column,
  column_label_formulas,
  columns,
  comment,
  connection_line,
  connection_path,
  connection_style,
  container_hint,
  content,
  core_image_filter_descriptor,
  core_image_filter_descriptor_ref,
  core_image_filter_info,
  crbr,
  ct,
  custom_space_color,
  d,
  data,
  data_formulas,
  data_ref,
  datasource,
  date_format,
  drawable_shape,
  drawables,
  du,
  duration_format,
  editable_bezier_path,
  element,
  evenPageMaster,
  f,
  fill,
  filtered,
  filtered_image,
  filters,
  firstLineIndent,
  firstPageMaster,
  fm, // formula mutable dictionary
  fmt,
  fo,
  followingLayoutStyle,
  followingParagraphStyle,
  fontColor,
  fontName,
  fontSize,
  footer,
  footers,
  footnote,
  footnote_mark,
  footnotebr,
  footnotes,
  format_base,
  format_base_places,
  format_currency_code,
  format_decimal_places,
  format_fraction_accuracy,
  format_negative_style,
  format_show_thousands_separator,
  format_string,
  format_type,
  format_use_accounting_style,
  formula_chart_model,
  fraction,
  fs,
  g,
  geometry,
  gradient_stop,
  graphic_style,
  graphic_style_ref,
  grid,
  grid_column,
  grid_row,
  gridline_index,
  group,
  head,
  header,
  headers,
  headline_style,
  href,
  id,
  image,
  image_media,
  inflection,
  inputAngle,
  inputColor,
  inputDistance,
  inputOpacity,
  intratopicbr,
  italic,
  keepLinesTogether,
  keepWithNext,
  keywords,
  language,
  layer,
  layer_ref,
  layers,
  layout,
  layoutMargins,
  layoutParagraphStyle,
  layoutParagraphStyle_ref,
  layoutstyle,
  layoutstyle_ref,
  leftIndent,
  leveled,
  line,
  lineSpacing,
  linespacing,
  link,
  listLabelGeometries,
  listLabelIndents,
  listLabelTypes,
  listStyle,
  listTextIndents,
  list_label_geometry,
  list_label_geometry_ref,
  list_label_typeinfo,
  list_label_typeinfo_ref,
  liststyle,
  liststyle_ref,
  lnbr,
  media,
  menu_choices,
  metadata,
  movie_media,
  mutable_array,
  mutable_array_ref,
  n,
  naturalSize,
  number,
  number_format,
  oddPageMaster,
  other_datas,
  outline,
  overrides,
  p,
  padding,
  pageBreakBefore,
  pagemaster,
  page_start,
  paragraphBorderType,
  paragraphFill,
  paragraphStroke,
  paragraphstyle,
  paragraphstyle_ref,
  parent_ref,
  path,
  pattern,
  pgbr,
  placeholder_style,
  placeholder_style_ref,
  pm,
  point,
  point_path,
  position,
  property_map,
  proxied_cell_ref,
  proxy_master_layer,
  r,
  rb,
  rightIndent,
  rn,
  row_label_formulas,
  rows,
  rt,
  s,
  scalar_path,
  section,
  sectionstyle,
  sectionstyle_ref,
  self_contained_movie,
  shape,
  size,
  sl,
  so,
  spaceAfter,
  spaceBefore,
  span,
  st,
  start_index,
  sticky_note,
  stop_index,
  stops,
  strikethru,
  string,
  stroke,
  style,
  style_run,
  styles,
  stylesheet,
  stylesheet_ref,
  superscript,
  t,
  tab,
  tabs,
  tabs_ref,
  tabstop,
  tabular_info,
  tabular_model,
  tabular_style,
  tabular_style_ref,
  tail,
  text,
  textBackground,
  text_body,
  text_label,
  text_label_ref,
  text_storage,
  textured_fill,
  title,
  title_placeholder_ref,
  tracking,
  transform_gradient,
  type,
  underline,
  unfiltered,
  unfiltered_ref,
  vector_style,
  vector_style_ref,
  vertical_gridline_styles,
  widowControl,

  // attributes
  ID,
  IDREF,
  a,
  align,
  amt,
  angle,
  aspectRatioLocked,
  b,
  bottom,
  c,
  cap,
  col_span,
  cornerRadius,
  decimal,
  displayname,
  equal_columns,
  filterClassName,
  first,
  format,
  frame_h,
  frame_w,
  frame_x,
  frame_y,
  h,
  height,
  hfs_type,
  horizontalFlip,
  horizontal_gridline_styles,
  ident,
  implicit_format_type,
  join,
  k,
  kind,
  left,
  list_level,
  locked,
  m,
  mark,
  mode,
  name,
  num_footer_rows,
  num_header_columns,
  num_header_rows,
  numcols,
  numrows,
  offset,
  opacity,
  parent_ident,
  pos,
  right,
  row_span,
  scalar,
  scale,
  scale_with_text,
  shearXAngle,
  shearYAngle,
  sizesLocked,
  spacing,
  tailAtCenter,
  tailPositionX,
  tailPositionY,
  tailSize,
  technique,
  top,
  v,
  val,
  value_title,
  verticalFlip,
  w,
  width,
  x,
  y,

  // attribute values
  SFIUDropShadow,
  _0,
  _1,
  _1246774599,
  _1299148630,
  _1346651680,
  _1347307366,
  _1414088262,
  __multilingual,
  bullet,
  butt,
  double_,
  empty,
  false_,
  fit,
  linear,
  lower_alpha,
  lower_roman,
  miter,
  natural,
  none,
  radial,
  relative,
  round,
  solid,
  star,
  stretch,
  tile,
  true_,
  upper_alpha,
  upper_roman,

  LAST_TOKEN
};

BOOST_STATIC_ASSERT(IWORKTokenInfo<IWORKParser>::last >= LAST_TOKEN);

enum Namespace
{
  NS_URI_SF = sf << 16,
  NS_URI_SFA = sfa << 16,
  NS_URI_XSI = xsi << 16,
};

const IWORKTokenizer &getTokenizer();

}

}

#endif // IWORKTOKEN_H_INCLUDED

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
