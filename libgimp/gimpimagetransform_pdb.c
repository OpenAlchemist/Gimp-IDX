/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimpimagetransform_pdb.c
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

#include "config.h"

#include "stamp-pdbgen.h"

#include "gimp.h"


/**
 * SECTION: gimpimagetransform
 * @title: gimpimagetransform
 * @short_description: Transformations on images.
 *
 * Operations to scale, resize, crop, flip and rotate images.
 **/


/**
 * gimp_image_resize:
 * @image: The image.
 * @new_width: New image width.
 * @new_height: New image height.
 * @offx: x offset between upper left corner of old and new images: (new - old).
 * @offy: y offset between upper left corner of old and new images: (new - old).
 *
 * Resize the image to the specified extents.
 *
 * This procedure resizes the image so that it's new width and height
 * are equal to the supplied parameters. Offsets are also provided
 * which describe the position of the previous image's content. All
 * channels within the image are resized according to the specified
 * parameters; this includes the image selection mask. All layers
 * within the image are repositioned according to the specified
 * offsets.
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_image_resize (GimpImage *image,
                   gint       new_width,
                   gint       new_height,
                   gint       offx,
                   gint       offy)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          G_TYPE_INT, new_width,
                                          G_TYPE_INT, new_height,
                                          G_TYPE_INT, offx,
                                          G_TYPE_INT, offy,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-resize",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_image_resize_to_layers:
 * @image: The image.
 *
 * Resize the image to fit all layers.
 *
 * This procedure resizes the image to the bounding box of all layers
 * of the image. All channels within the image are resized to the new
 * size; this includes the image selection mask. All layers within the
 * image are repositioned to the new image area.
 *
 * Returns: TRUE on success.
 *
 * Since: 2.2
 **/
gboolean
gimp_image_resize_to_layers (GimpImage *image)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-resize-to-layers",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_image_scale:
 * @image: The image.
 * @new_width: New image width.
 * @new_height: New image height.
 *
 * Scale the image using the default interpolation method.
 *
 * This procedure scales the image so that its new width and height are
 * equal to the supplied parameters. All layers and channels within the
 * image are scaled according to the specified parameters; this
 * includes the image selection mask. The interpolation method used can
 * be set with gimp_context_set_interpolation().
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_image_scale (GimpImage *image,
                  gint       new_width,
                  gint       new_height)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          G_TYPE_INT, new_width,
                                          G_TYPE_INT, new_height,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-scale",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_image_crop:
 * @image: The image.
 * @new_width: New image width: (0 < new_width <= width).
 * @new_height: New image height: (0 < new_height <= height).
 * @offx: X offset: (0 <= offx <= (width - new_width)).
 * @offy: Y offset: (0 <= offy <= (height - new_height)).
 *
 * Crop the image to the specified extents.
 *
 * This procedure crops the image so that it's new width and height are
 * equal to the supplied parameters. Offsets are also provided which
 * describe the position of the previous image's content. All channels
 * and layers within the image are cropped to the new image extents;
 * this includes the image selection mask. If any parameters are out of
 * range, an error is returned.
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_image_crop (GimpImage *image,
                 gint       new_width,
                 gint       new_height,
                 gint       offx,
                 gint       offy)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          G_TYPE_INT, new_width,
                                          G_TYPE_INT, new_height,
                                          G_TYPE_INT, offx,
                                          G_TYPE_INT, offy,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-crop",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_image_flip:
 * @image: The image.
 * @flip_type: Type of flip.
 *
 * Flips the image horizontally or vertically.
 *
 * This procedure flips (mirrors) the image.
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_image_flip (GimpImage           *image,
                 GimpOrientationType  flip_type)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          GIMP_TYPE_ORIENTATION_TYPE, flip_type,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-flip",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_image_rotate:
 * @image: The image.
 * @rotate_type: Angle of rotation.
 *
 * Rotates the image by the specified degrees.
 *
 * This procedure rotates the image.
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_image_rotate (GimpImage        *image,
                   GimpRotationType  rotate_type)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          GIMP_TYPE_IMAGE, image,
                                          GIMP_TYPE_ROTATION_TYPE, rotate_type,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-image-rotate",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}
