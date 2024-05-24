/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-2003 Peter Mattis and Spencer Kimball
 *
 * gimppdb_pdb.h
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

#ifndef __GIMP_PDB_PDB_H__
#define __GIMP_PDB_PDB_H__

G_BEGIN_DECLS

/* For information look into the C source or the html documentation */


G_GNUC_INTERNAL gchar*      _gimp_pdb_temp_name                      (void);
G_GNUC_INTERNAL gboolean    _gimp_pdb_dump                           (GFile             *file);
G_GNUC_INTERNAL gboolean    _gimp_pdb_query                          (const gchar       *name,
                                                                      const gchar       *blurb,
                                                                      const gchar       *help,
                                                                      const gchar       *authors,
                                                                      const gchar       *copyright,
                                                                      const gchar       *date,
                                                                      const gchar       *proc_type,
                                                                      gchar           ***procedure_names);
G_GNUC_INTERNAL gboolean    _gimp_pdb_proc_exists                    (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_get_proc_info                  (const gchar       *procedure_name,
                                                                      GimpPDBProcType   *proc_type,
                                                                      gint              *num_args,
                                                                      gint              *num_values);
G_GNUC_INTERNAL GParamSpec* _gimp_pdb_get_proc_argument              (const gchar       *procedure_name,
                                                                      gint               arg_num);
G_GNUC_INTERNAL GParamSpec* _gimp_pdb_get_proc_return_value          (const gchar       *procedure_name,
                                                                      gint               val_num);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_image_types           (const gchar       *procedure_name,
                                                                      const gchar       *image_types);
G_GNUC_INTERNAL gchar*      _gimp_pdb_get_proc_image_types           (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_sensitivity_mask      (const gchar       *procedure_name,
                                                                      gint               mask);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_menu_label            (const gchar       *procedure_name,
                                                                      const gchar       *menu_label);
G_GNUC_INTERNAL gchar*      _gimp_pdb_get_proc_menu_label            (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_add_proc_menu_path             (const gchar       *procedure_name,
                                                                      const gchar       *menu_path);
G_GNUC_INTERNAL gchar**     _gimp_pdb_get_proc_menu_paths            (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_icon                  (const gchar       *procedure_name,
                                                                      GimpIconType       icon_type,
                                                                      GBytes            *icon_data);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_documentation         (const gchar       *procedure_name,
                                                                      const gchar       *blurb,
                                                                      const gchar       *help,
                                                                      const gchar       *help_id);
G_GNUC_INTERNAL gboolean    _gimp_pdb_get_proc_documentation         (const gchar       *procedure_name,
                                                                      gchar            **blurb,
                                                                      gchar            **help,
                                                                      gchar            **help_id);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_proc_attribution           (const gchar       *procedure_name,
                                                                      const gchar       *authors,
                                                                      const gchar       *copyright,
                                                                      const gchar       *date);
G_GNUC_INTERNAL gboolean    _gimp_pdb_get_proc_attribution           (const gchar       *procedure_name,
                                                                      gchar            **authors,
                                                                      gchar            **copyright,
                                                                      gchar            **date);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_load_handler     (const gchar       *procedure_name,
                                                                      const gchar       *extensions,
                                                                      const gchar       *prefixes,
                                                                      const gchar       *magics);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_save_handler     (const gchar       *procedure_name,
                                                                      const gchar       *extensions,
                                                                      const gchar       *prefixes);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_priority         (const gchar       *procedure_name,
                                                                      gint               priority);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_mime_types       (const gchar       *procedure_name,
                                                                      const gchar       *mime_types);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_handles_remote   (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_handles_raw      (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_handles_vector   (const gchar       *procedure_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_file_proc_thumbnail_loader (const gchar       *load_proc,
                                                                      const gchar       *thumb_proc);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_batch_interpreter          (const gchar       *procedure_name,
                                                                      const gchar       *interpreter_name);
G_GNUC_INTERNAL gboolean    _gimp_pdb_get_data                       (const gchar       *identifier,
                                                                      GBytes           **data);
G_GNUC_INTERNAL gboolean    _gimp_pdb_set_data                       (const gchar       *identifier,
                                                                      GBytes            *data);


G_END_DECLS

#endif /* __GIMP_PDB_PDB_H__ */