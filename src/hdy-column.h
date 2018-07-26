/*
 * Copyright (C) 2018 Purism SPC
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define HDY_TYPE_COLUMN (hdy_column_get_type())

G_DECLARE_FINAL_TYPE (HdyColumn, hdy_column, HDY, COLUMN, GtkBin)

HdyColumn *hdy_column_new (void);
gint hdy_column_get_maximum_width (HdyColumn *self);
void hdy_column_set_maximum_width (HdyColumn *self,
                                   gint       maximum_width);

G_END_DECLS