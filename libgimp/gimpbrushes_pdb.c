/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimpbrushes_pdb.c
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
 * SECTION: gimpbrushes
 * @title: gimpbrushes
 * @short_description: Functions for manipulating brushes.
 *
 * Functions related to getting and setting brushes.
 **/


/**
 * gimp_brushes_refresh:
 *
 * Refresh current brushes. This function always succeeds.
 *
 * This procedure retrieves all brushes currently in the user's brush
 * path and updates the brush dialogs accordingly.
 *
 * Returns: TRUE on success.
 **/
gboolean
gimp_brushes_refresh (void)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gboolean success = TRUE;

  args = gimp_value_array_new_from_types (NULL,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-brushes-refresh",
                                               args);
  gimp_value_array_unref (args);

  success = GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS;

  gimp_value_array_unref (return_vals);

  return success;
}

/**
 * gimp_brushes_get_list:
 * @filter: An optional regular expression used to filter the list.
 *
 * Retrieve a complete listing of the available brushes.
 *
 * This procedure returns a complete listing of available GIMP brushes.
 * Each name returned can be used as input to the
 * gimp_context_set_brush() procedure.
 *
 * Returns: (array zero-terminated=1) (transfer full): The list of brush names.
 *          The returned value must be freed with g_strfreev().
 **/
gchar **
gimp_brushes_get_list (const gchar *filter)
{
  GimpValueArray *args;
  GimpValueArray *return_vals;
  gchar **brush_list = NULL;

  args = gimp_value_array_new_from_types (NULL,
                                          G_TYPE_STRING, filter,
                                          G_TYPE_NONE);

  return_vals = _gimp_pdb_run_procedure_array (gimp_get_pdb (),
                                               "gimp-brushes-get-list",
                                               args);
  gimp_value_array_unref (args);

  if (GIMP_VALUES_GET_ENUM (return_vals, 0) == GIMP_PDB_SUCCESS)
    brush_list = GIMP_VALUES_DUP_STRV (return_vals, 1);

  gimp_value_array_unref (return_vals);

  return brush_list;
}
