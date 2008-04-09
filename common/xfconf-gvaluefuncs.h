/*
 *  xfconf
 *
 *  Copyright (c) 2008 Brian Tarricone <bjt23@cornell.edu>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License ONLY.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __XFCONF_GVALUEFUNCS_H__
#define __XFCONF_GVALUEFUNCS_H__

#include <glib-object.h>

G_BEGIN_DECLS

gboolean _xfconf_gvalue_from_string(GValue *value,
                                    const gchar *str) G_GNUC_INTERNAL;

void _xfconf_gvalue_free(GValue *value) G_GNUC_INTERNAL;

G_END_DECLS

#endif  /* __XFCONF_GVALUEFUNCS_H__ */
