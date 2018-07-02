#include<iostream>
#include<string>
#include<vector>
using namespace std;

extern "C" {
    #include<gtk/gtk.h>
    #include<libxfce4panel/xfce-panel-plugin.h>
}

extern "C" void workspace_no_constructor(XfcePanelPlugin* plugin) {


    /* GtkOrientation orientation; */
    /* int spacing = 2; */

    /* GtkWidget *gtk_container = gtk_hbox_new(orientation, spacing); */

    /* gtk_container_add(GTK_CONTAINER(plugin), gtk_container); */
    /* gtk_widget_show_all(gtk_container); */
    /* xfce_panel_plugin_set_expand(XFCE_PANEL_PLUGIN(plugin), TRUE); */

    xfce_text_domain(GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR, "UTF-8");
    new Plugin(plugin);
}

XFCE_PANEL_PLUGIN_REGISTER_INTERNAL(workspace_no_constructor);

