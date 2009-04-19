/*
 * Copyright © 2009 Siyan Panayotov <xsisqox@gmail.com>
 *
 * This file is part of Viewnior.
 *
 * Viewnior is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Viewnior is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Viewnior.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __VNR_MESSAGE_AREA_H__
#define __VNR_MESSAGE_AREA_H__

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include "vnr-window.h"

G_BEGIN_DECLS

typedef struct _VnrMessageArea VnrMessageArea;
typedef struct _VnrMessageAreaClass VnrMessageAreaClass;

#define VNR_TYPE_MESSAGE_AREA             (vnr_message_area_get_type ())
#define VNR_MESSAGE_AREA(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), VNR_TYPE_MESSAGE_AREA, VnrMessageArea))
#define VNR_MESSAGE_AREA_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass),  VNR_TYPE_MESSAGE_AREA, VnrMessageAreaClass))
#define VNR_IS_MESSAGE_AREA(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VNR_TYPE_MESSAGE_AREA))
#define VNR_IS_MESSAGE_AREA_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass),  VNR_TYPE_MESSAGE_AREA))
#define VNR_MESSAGE_AREA_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj),  VNR_TYPE_MESSAGE_AREA, VnrMessageAreaClass))

struct _VnrMessageArea {
    GtkEventBox parent;

    GtkWidget *hbox;

    GtkWidget *image;
    GtkWidget *message;
};

struct _VnrMessageAreaClass {
    GtkEventBoxClass parent_class;
};

GType       vnr_message_area_get_type (void) G_GNUC_CONST;

GtkWidget*  vnr_message_area_new      (void);

void        vnr_message_area_show_warning (VnrMessageArea *msg_area, const char *message);
void        vnr_message_area_hide_warning (VnrMessageArea *msg_area);

G_END_DECLS
#endif /* __VNR_MESSAGE_AREA_H__ */
