
#include "public.hpp"


int main(int argc, char* argv[])
{

    gtk_init(&argc,&argv);


    printf("GTK+ version: %d.%d.%d\n", gtk_major_version, 
        gtk_minor_version, gtk_micro_version);
    
    printf("Glib version: %d.%d.%d\n", glib_major_version,
        glib_minor_version, glib_micro_version);    

    
    GtkWidget* window=NULL;
    window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(window);

    g_signal_connect(window,"destroy",G_CALLBACK(gtk_main_quit),NULL);

    gtk_main();


    return 0;
}

