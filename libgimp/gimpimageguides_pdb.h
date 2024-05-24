/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimpimageguides_pdb.h
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

#ifndef __GIMP_IMAGE_GUIDES_PDB_H__
#define __GIMP_IMAGE_GUIDES_PDB_H__

G_BEGIN_DECLS

/* For information look into the C source or the html documentation */


guint               gimp_image_add_hguide            (GimpImage *image,
                                                      gint       yposition);
guint               gimp_image_add_vguide            (GimpImage *image,
                                                      gint       xposition);
gboolean            gimp_image_delete_guide          (GimpImage *image,
                                                      guint      guide);
guint               gimp_image_find_next_guide       (GimpImage *image,
                                                      gint       guide);
GimpOrientationType gimp_image_get_guide_orientation (GimpImage *image,
                                                      guint      guide);
gint                gimp_image_get_guide_position    (GimpImage *image,
                                                      guint      guide);


G_END_DECLS

#endif /* __GIMP_IMAGE_GUIDES_PDB_H__ */
