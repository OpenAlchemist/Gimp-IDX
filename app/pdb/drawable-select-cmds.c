/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995-2003 Spencer Kimball and Peter Mattis
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

/* NOTE: This file is auto-generated by pdbgen.pl. */

#include "config.h"

#include "stamp-pdbgen.h"

#include <gegl.h>

#include <gdk-pixbuf/gdk-pixbuf.h>

#include "libgimpbase/gimpbase.h"

#include "pdb-types.h"

#include "core/gimp.h"
#include "core/gimpdatafactory.h"
#include "core/gimpdrawable.h"
#include "core/gimpparamspecs.h"

#include "gimppdb.h"
#include "gimpprocedure.h"
#include "internal-procs.h"


static GimpValueArray *
drawables_popup_invoker (GimpProcedure         *procedure,
                         Gimp                  *gimp,
                         GimpContext           *context,
                         GimpProgress          *progress,
                         const GimpValueArray  *args,
                         GError               **error)
{
  gboolean success = TRUE;
  const gchar *callback;
  const gchar *popup_title;
  const gchar *drawable_type;
  GimpDrawable *initial_drawable;
  GBytes *parent_window;

  callback = g_value_get_string (gimp_value_array_index (args, 0));
  popup_title = g_value_get_string (gimp_value_array_index (args, 1));
  drawable_type = g_value_get_string (gimp_value_array_index (args, 2));
  initial_drawable = g_value_get_object (gimp_value_array_index (args, 3));
  parent_window = g_value_get_boxed (gimp_value_array_index (args, 4));

  if (success)
    {
      if (gimp->no_interface ||
          ! gimp_pdb_lookup_procedure (gimp->pdb, callback) ||
          ! gimp_pdb_dialog_new (gimp, context, progress,
                                 g_type_from_name (drawable_type),
                                 parent_window, popup_title, callback,
                                 GIMP_OBJECT (initial_drawable),
                                 NULL))
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GimpValueArray *
drawables_close_popup_invoker (GimpProcedure         *procedure,
                               Gimp                  *gimp,
                               GimpContext           *context,
                               GimpProgress          *progress,
                               const GimpValueArray  *args,
                               GError               **error)
{
  gboolean success = TRUE;
  const gchar *callback;

  callback = g_value_get_string (gimp_value_array_index (args, 0));

  if (success)
    {
      if (gimp->no_interface ||
          ! gimp_pdb_lookup_procedure (gimp->pdb, callback) ||
          ! gimp_pdb_dialog_close (gimp, GIMP_TYPE_DRAWABLE, callback))
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GimpValueArray *
drawables_set_popup_invoker (GimpProcedure         *procedure,
                             Gimp                  *gimp,
                             GimpContext           *context,
                             GimpProgress          *progress,
                             const GimpValueArray  *args,
                             GError               **error)
{
  gboolean success = TRUE;
  const gchar *callback;
  GimpDrawable *drawable;

  callback = g_value_get_string (gimp_value_array_index (args, 0));
  drawable = g_value_get_object (gimp_value_array_index (args, 1));

  if (success)
    {
      if (gimp->no_interface ||
          ! gimp_pdb_lookup_procedure (gimp->pdb, callback) ||
          ! gimp_pdb_dialog_set (gimp, GIMP_TYPE_DRAWABLE, callback, GIMP_OBJECT (drawable), NULL))
        success = FALSE;
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

void
register_drawable_select_procs (GimpPDB *pdb)
{
  GimpProcedure *procedure;

  /*
   * gimp-drawables-popup
   */
  procedure = gimp_procedure_new (drawables_popup_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-drawables-popup");
  gimp_procedure_set_static_help (procedure,
                                  "Invokes the drawable selection dialog.",
                                  "Opens a dialog letting a user choose an drawable.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Jehan",
                                         "Jehan",
                                         "2023");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("callback",
                                                       "callback",
                                                       "The callback PDB proc to call when user chooses an drawable",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("popup-title",
                                                       "popup title",
                                                       "Title of the drawable selection dialog",
                                                       FALSE, FALSE, FALSE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("drawable-type",
                                                       "drawable type",
                                                       "The name of the GIMP_TYPE_DRAWABLE subtype",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_drawable ("initial-drawable",
                                                         "initial drawable",
                                                         "The drawable to set as the initial choice",
                                                         FALSE,
                                                         GIMP_PARAM_READWRITE | GIMP_PARAM_NO_VALIDATE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_boxed ("parent-window",
                                                   "parent window",
                                                   "An optional parent window handle for the popup to be set transient to",
                                                   G_TYPE_BYTES,
                                                   GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-drawables-close-popup
   */
  procedure = gimp_procedure_new (drawables_close_popup_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-drawables-close-popup");
  gimp_procedure_set_static_help (procedure,
                                  "Close the drawable selection dialog.",
                                  "Closes an open drawable selection dialog.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Jehan",
                                         "Jehan",
                                         "2023");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("callback",
                                                       "callback",
                                                       "The name of the callback registered for this pop-up",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-drawables-set-popup
   */
  procedure = gimp_procedure_new (drawables_set_popup_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-drawables-set-popup");
  gimp_procedure_set_static_help (procedure,
                                  "Sets the selected drawable in a drawable selection dialog.",
                                  "Sets the selected drawable in a drawable selection dialog.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Jehan",
                                         "Jehan",
                                         "2023");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("callback",
                                                       "callback",
                                                       "The name of the callback registered for this pop-up",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_drawable ("drawable",
                                                         "drawable",
                                                         "The drawable to set as selected",
                                                         FALSE,
                                                         GIMP_PARAM_READWRITE | GIMP_PARAM_NO_VALIDATE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);
}
