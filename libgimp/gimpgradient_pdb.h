/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimpgradient_pdb.h
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

/* NOTE: This file is auto-generated by pdbgen.pl */

#if !defined (__GIMP_H_INSIDE__) && !defined (GIMP_COMPILATION)
#error "Only <libgimp/gimp.h> can be included directly."
#endif

#ifndef __GIMP_GRADIENT_PDB_H__
#define __GIMP_GRADIENT_PDB_H__

G_BEGIN_DECLS

/* For information look into the C source or the html documentation */


GimpGradient* gimp_gradient_new                                 (const gchar               *name);
GimpGradient* gimp_gradient_get_by_name                         (const gchar               *name);
gint          gimp_gradient_get_number_of_segments              (GimpGradient              *gradient);
gboolean      gimp_gradient_get_uniform_samples                 (GimpGradient              *gradient,
                                                                 gint                       num_samples,
                                                                 gboolean                   reverse,
                                                                 gint                      *num_color_samples,
                                                                 gdouble                  **color_samples);
gboolean      gimp_gradient_get_custom_samples                  (GimpGradient              *gradient,
                                                                 gint                       num_samples,
                                                                 const gdouble             *positions,
                                                                 gboolean                   reverse,
                                                                 gint                      *num_color_samples,
                                                                 gdouble                  **color_samples);
GeglColor*    gimp_gradient_segment_get_left_color              (GimpGradient              *gradient,
                                                                 gint                       segment);
gboolean      gimp_gradient_segment_set_left_color              (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 GeglColor                 *color);
GeglColor*    gimp_gradient_segment_get_right_color             (GimpGradient              *gradient,
                                                                 gint                       segment);
gboolean      gimp_gradient_segment_set_right_color             (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 GeglColor                 *color);
gboolean      gimp_gradient_segment_get_left_pos                (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                   *pos);
gboolean      gimp_gradient_segment_set_left_pos                (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                    pos,
                                                                 gdouble                   *final_pos);
gboolean      gimp_gradient_segment_get_middle_pos              (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                   *pos);
gboolean      gimp_gradient_segment_set_middle_pos              (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                    pos,
                                                                 gdouble                   *final_pos);
gboolean      gimp_gradient_segment_get_right_pos               (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                   *pos);
gboolean      gimp_gradient_segment_set_right_pos               (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 gdouble                    pos,
                                                                 gdouble                   *final_pos);
gboolean      gimp_gradient_segment_get_blending_function       (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 GimpGradientSegmentType   *blend_func);
gboolean      gimp_gradient_segment_get_coloring_type           (GimpGradient              *gradient,
                                                                 gint                       segment,
                                                                 GimpGradientSegmentColor  *coloring_type);
gboolean      gimp_gradient_segment_range_set_blending_function (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment,
                                                                 GimpGradientSegmentType    blending_function);
gboolean      gimp_gradient_segment_range_set_coloring_type     (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment,
                                                                 GimpGradientSegmentColor   coloring_type);
gboolean      gimp_gradient_segment_range_flip                  (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gboolean      gimp_gradient_segment_range_replicate             (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment,
                                                                 gint                       replicate_times);
gboolean      gimp_gradient_segment_range_split_midpoint        (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gboolean      gimp_gradient_segment_range_split_uniform         (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment,
                                                                 gint                       split_parts);
gboolean      gimp_gradient_segment_range_delete                (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gboolean      gimp_gradient_segment_range_redistribute_handles  (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gboolean      gimp_gradient_segment_range_blend_colors          (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gboolean      gimp_gradient_segment_range_blend_opacity         (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment);
gdouble       gimp_gradient_segment_range_move                  (GimpGradient              *gradient,
                                                                 gint                       start_segment,
                                                                 gint                       end_segment,
                                                                 gdouble                    delta,
                                                                 gboolean                   control_compress);


G_END_DECLS

#endif /* __GIMP_GRADIENT_PDB_H__ */