#include <gtk/gtk.h>


void
on_window1_destroy                     (GtkObject       *object,
                                        gpointer         user_data);

gboolean
on_window1_button_press_event          (GtkWidget       *widget,
                                        GdkEventButton  *event,
                                        gpointer         user_data);

void
on_resetbutt_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_quitbutt_clicked                    (GtkButton       *button,
                                        gpointer         user_data);
