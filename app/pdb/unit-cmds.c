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

#include "libgimpbase/gimpbase.h"

#include "pdb-types.h"

#include "core/gimpparamspecs.h"
#include "core/gimpunit.h"

#include "gimppdb.h"
#include "gimpprocedure.h"
#include "internal-procs.h"


static GimpValueArray *
unit_get_number_of_units_invoker (GimpProcedure         *procedure,
                                  Gimp                  *gimp,
                                  GimpContext           *context,
                                  GimpProgress          *progress,
                                  const GimpValueArray  *args,
                                  GError               **error)
{
  GimpValueArray *return_vals;
  gint num_units = 0;

  num_units = _gimp_unit_get_number_of_units (gimp);

  return_vals = gimp_procedure_get_return_values (procedure, TRUE, NULL);
  g_value_set_int (gimp_value_array_index (return_vals, 1), num_units);

  return return_vals;
}

static GimpValueArray *
unit_get_number_of_built_in_units_invoker (GimpProcedure         *procedure,
                                           Gimp                  *gimp,
                                           GimpContext           *context,
                                           GimpProgress          *progress,
                                           const GimpValueArray  *args,
                                           GError               **error)
{
  GimpValueArray *return_vals;
  gint num_units = 0;

  num_units = _gimp_unit_get_number_of_built_in_units (gimp);

  return_vals = gimp_procedure_get_return_values (procedure, TRUE, NULL);
  g_value_set_int (gimp_value_array_index (return_vals, 1), num_units);

  return return_vals;
}

static GimpValueArray *
unit_new_invoker (GimpProcedure         *procedure,
                  Gimp                  *gimp,
                  GimpContext           *context,
                  GimpProgress          *progress,
                  const GimpValueArray  *args,
                  GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  const gchar *identifier;
  gdouble factor;
  gint digits;
  const gchar *symbol;
  const gchar *abbreviation;
  const gchar *singular;
  const gchar *plural;
  GimpUnit unit_id = GIMP_UNIT_PIXEL;

  identifier = g_value_get_string (gimp_value_array_index (args, 0));
  factor = g_value_get_double (gimp_value_array_index (args, 1));
  digits = g_value_get_int (gimp_value_array_index (args, 2));
  symbol = g_value_get_string (gimp_value_array_index (args, 3));
  abbreviation = g_value_get_string (gimp_value_array_index (args, 4));
  singular = g_value_get_string (gimp_value_array_index (args, 5));
  plural = g_value_get_string (gimp_value_array_index (args, 6));

  if (success)
    {
      unit_id = _gimp_unit_new (gimp, identifier, factor, digits,
                                symbol, abbreviation, singular, plural);
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_set_int (gimp_value_array_index (return_vals, 1), unit_id);

  return return_vals;
}

static GimpValueArray *
unit_get_deletion_flag_invoker (GimpProcedure         *procedure,
                                Gimp                  *gimp,
                                GimpContext           *context,
                                GimpProgress          *progress,
                                const GimpValueArray  *args,
                                GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gboolean deletion_flag = FALSE;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      deletion_flag = _gimp_unit_get_deletion_flag (gimp, unit_id);
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_set_boolean (gimp_value_array_index (return_vals, 1), deletion_flag);

  return return_vals;
}

static GimpValueArray *
unit_set_deletion_flag_invoker (GimpProcedure         *procedure,
                                Gimp                  *gimp,
                                GimpContext           *context,
                                GimpProgress          *progress,
                                const GimpValueArray  *args,
                                GError               **error)
{
  gboolean success = TRUE;
  GimpUnit unit_id;
  gboolean deletion_flag;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));
  deletion_flag = g_value_get_boolean (gimp_value_array_index (args, 1));

  if (success)
    {
      _gimp_unit_set_deletion_flag (gimp, unit_id, deletion_flag);
    }

  return gimp_procedure_get_return_values (procedure, success,
                                           error ? *error : NULL);
}

static GimpValueArray *
unit_get_identifier_invoker (GimpProcedure         *procedure,
                             Gimp                  *gimp,
                             GimpContext           *context,
                             GimpProgress          *progress,
                             const GimpValueArray  *args,
                             GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gchar *identifier = NULL;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      identifier = g_strdup (_gimp_unit_get_identifier (gimp, unit_id));
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_take_string (gimp_value_array_index (return_vals, 1), identifier);

  return return_vals;
}

static GimpValueArray *
unit_get_factor_invoker (GimpProcedure         *procedure,
                         Gimp                  *gimp,
                         GimpContext           *context,
                         GimpProgress          *progress,
                         const GimpValueArray  *args,
                         GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gdouble factor = 0.0;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      factor = _gimp_unit_get_factor (gimp, unit_id);
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_set_double (gimp_value_array_index (return_vals, 1), factor);

  return return_vals;
}

static GimpValueArray *
unit_get_digits_invoker (GimpProcedure         *procedure,
                         Gimp                  *gimp,
                         GimpContext           *context,
                         GimpProgress          *progress,
                         const GimpValueArray  *args,
                         GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gint digits = 0;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      digits = _gimp_unit_get_digits (gimp, unit_id);
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_set_int (gimp_value_array_index (return_vals, 1), digits);

  return return_vals;
}

static GimpValueArray *
unit_get_symbol_invoker (GimpProcedure         *procedure,
                         Gimp                  *gimp,
                         GimpContext           *context,
                         GimpProgress          *progress,
                         const GimpValueArray  *args,
                         GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gchar *symbol = NULL;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      symbol = g_strdup (_gimp_unit_get_symbol (gimp, unit_id));
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_take_string (gimp_value_array_index (return_vals, 1), symbol);

  return return_vals;
}

static GimpValueArray *
unit_get_abbreviation_invoker (GimpProcedure         *procedure,
                               Gimp                  *gimp,
                               GimpContext           *context,
                               GimpProgress          *progress,
                               const GimpValueArray  *args,
                               GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gchar *abbreviation = NULL;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      abbreviation = g_strdup (_gimp_unit_get_abbreviation (gimp, unit_id));
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_take_string (gimp_value_array_index (return_vals, 1), abbreviation);

  return return_vals;
}

static GimpValueArray *
unit_get_singular_invoker (GimpProcedure         *procedure,
                           Gimp                  *gimp,
                           GimpContext           *context,
                           GimpProgress          *progress,
                           const GimpValueArray  *args,
                           GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gchar *singular = NULL;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      singular = g_strdup (_gimp_unit_get_singular (gimp, unit_id));
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_take_string (gimp_value_array_index (return_vals, 1), singular);

  return return_vals;
}

static GimpValueArray *
unit_get_plural_invoker (GimpProcedure         *procedure,
                         Gimp                  *gimp,
                         GimpContext           *context,
                         GimpProgress          *progress,
                         const GimpValueArray  *args,
                         GError               **error)
{
  gboolean success = TRUE;
  GimpValueArray *return_vals;
  GimpUnit unit_id;
  gchar *plural = NULL;

  unit_id = g_value_get_int (gimp_value_array_index (args, 0));

  if (success)
    {
      plural = g_strdup (_gimp_unit_get_plural (gimp, unit_id));
    }

  return_vals = gimp_procedure_get_return_values (procedure, success,
                                                  error ? *error : NULL);

  if (success)
    g_value_take_string (gimp_value_array_index (return_vals, 1), plural);

  return return_vals;
}

void
register_unit_procs (GimpPDB *pdb)
{
  GimpProcedure *procedure;

  /*
   * gimp-unit-get-number-of-units
   */
  procedure = gimp_procedure_new (unit_get_number_of_units_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-number-of-units");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the number of units.",
                                  "This procedure returns the number of defined units.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_int ("num-units",
                                                     "num units",
                                                     "The number of units",
                                                     G_MININT32, G_MAXINT32, 0,
                                                     GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-number-of-built-in-units
   */
  procedure = gimp_procedure_new (unit_get_number_of_built_in_units_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-number-of-built-in-units");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the number of built-in units.",
                                  "This procedure returns the number of defined units built-in to GIMP.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_int ("num-units",
                                                     "num units",
                                                     "The number of built-in units",
                                                     G_MININT32, G_MAXINT32, 0,
                                                     GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-new
   */
  procedure = gimp_procedure_new (unit_new_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-new");
  gimp_procedure_set_static_help (procedure,
                                  "Creates a new unit and returns it's integer ID.",
                                  "This procedure creates a new unit and returns it's integer ID. Note that the new unit will have it's deletion flag set to TRUE, so you will have to set it to FALSE with 'gimp-unit-set-deletion-flag' to make it persistent.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("identifier",
                                                       "identifier",
                                                       "The new unit's identifier",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_double ("factor",
                                                    "factor",
                                                    "The new unit's factor",
                                                    -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                    GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_int ("digits",
                                                 "digits",
                                                 "The new unit's digits",
                                                 G_MININT32, G_MAXINT32, 0,
                                                 GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("symbol",
                                                       "symbol",
                                                       "The new unit's symbol",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("abbreviation",
                                                       "abbreviation",
                                                       "The new unit's abbreviation",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("singular",
                                                       "singular",
                                                       "The new unit's singular form",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_string ("plural",
                                                       "plural",
                                                       "The new unit's plural form",
                                                       FALSE, FALSE, TRUE,
                                                       NULL,
                                                       GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_unit ("unit-id",
                                                         "unit id",
                                                         "The new unit's ID",
                                                         TRUE,
                                                         FALSE,
                                                         GIMP_UNIT_PIXEL,
                                                         GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-deletion-flag
   */
  procedure = gimp_procedure_new (unit_get_deletion_flag_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-deletion-flag");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the deletion flag of the unit.",
                                  "This procedure returns the deletion flag of the unit. If this value is TRUE the unit's definition will not be saved in the user's unitrc file on gimp exit.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_boolean ("deletion-flag",
                                                         "deletion flag",
                                                         "The unit's deletion flag",
                                                         FALSE,
                                                         GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-set-deletion-flag
   */
  procedure = gimp_procedure_new (unit_set_deletion_flag_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-set-deletion-flag");
  gimp_procedure_set_static_help (procedure,
                                  "Sets the deletion flag of a unit.",
                                  "This procedure sets the unit's deletion flag. If the deletion flag of a unit is TRUE on gimp exit, this unit's definition will not be saved in the user's unitrc.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_argument (procedure,
                               g_param_spec_boolean ("deletion-flag",
                                                     "deletion flag",
                                                     "The new deletion flag of the unit",
                                                     FALSE,
                                                     GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-identifier
   */
  procedure = gimp_procedure_new (unit_get_identifier_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-identifier");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the textual identifier of the unit.",
                                  "This procedure returns the textual identifier of the unit. For built-in units it will be the english singular form of the unit's name. For user-defined units this should equal to the singular form.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_string ("identifier",
                                                           "identifier",
                                                           "The unit's textual identifier",
                                                           FALSE, FALSE, FALSE,
                                                           NULL,
                                                           GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-factor
   */
  procedure = gimp_procedure_new (unit_get_factor_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-factor");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the factor of the unit.",
                                  "This procedure returns the unit's factor which indicates how many units make up an inch. Note that asking for the factor of \"pixels\" will produce an error.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_double ("factor",
                                                        "factor",
                                                        "The unit's factor",
                                                        -G_MAXDOUBLE, G_MAXDOUBLE, 0,
                                                        GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-digits
   */
  procedure = gimp_procedure_new (unit_get_digits_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-digits");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the number of digits of the unit.",
                                  "This procedure returns the number of digits you should provide in input or output functions to get approximately the same accuracy as with two digits and inches. Note that asking for the digits of \"pixels\" will produce an error.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   g_param_spec_int ("digits",
                                                     "digits",
                                                     "The unit's number of digits",
                                                     G_MININT32, G_MAXINT32, 0,
                                                     GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-symbol
   */
  procedure = gimp_procedure_new (unit_get_symbol_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-symbol");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the symbol of the unit.",
                                  "This procedure returns the symbol of the unit (\"''\" for inches).",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_string ("symbol",
                                                           "symbol",
                                                           "The unit's symbol",
                                                           FALSE, FALSE, FALSE,
                                                           NULL,
                                                           GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-abbreviation
   */
  procedure = gimp_procedure_new (unit_get_abbreviation_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-abbreviation");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the abbreviation of the unit.",
                                  "This procedure returns the abbreviation of the unit (\"in\" for inches).",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_string ("abbreviation",
                                                           "abbreviation",
                                                           "The unit's abbreviation",
                                                           FALSE, FALSE, FALSE,
                                                           NULL,
                                                           GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-singular
   */
  procedure = gimp_procedure_new (unit_get_singular_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-singular");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the singular form of the unit.",
                                  "This procedure returns the singular form of the unit.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_string ("singular",
                                                           "singular",
                                                           "The unit's singular form",
                                                           FALSE, FALSE, FALSE,
                                                           NULL,
                                                           GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);

  /*
   * gimp-unit-get-plural
   */
  procedure = gimp_procedure_new (unit_get_plural_invoker);
  gimp_object_set_static_name (GIMP_OBJECT (procedure),
                               "gimp-unit-get-plural");
  gimp_procedure_set_static_help (procedure,
                                  "Returns the plural form of the unit.",
                                  "This procedure returns the plural form of the unit.",
                                  NULL);
  gimp_procedure_set_static_attribution (procedure,
                                         "Michael Natterer <mitch@gimp.org>",
                                         "Michael Natterer",
                                         "1999");
  gimp_procedure_add_argument (procedure,
                               gimp_param_spec_unit ("unit-id",
                                                     "unit id",
                                                     "The unit's integer ID",
                                                     TRUE,
                                                     FALSE,
                                                     GIMP_UNIT_PIXEL,
                                                     GIMP_PARAM_READWRITE));
  gimp_procedure_add_return_value (procedure,
                                   gimp_param_spec_string ("plural",
                                                           "plural",
                                                           "The unit's plural form",
                                                           FALSE, FALSE, FALSE,
                                                           NULL,
                                                           GIMP_PARAM_READWRITE));
  gimp_pdb_register_procedure (pdb, procedure);
  g_object_unref (procedure);
}
