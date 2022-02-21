//
// Created by jackcamp on 2/21/22.
//

#include <gtkmm/application.h>
#include <gtkmm/applicationwindow.h>
#include <gtkmm/builder.h>

#include <adwaita.h>

#include <iostream>


int main(int argc, char **argv) {
    auto app = Gtk::Application::create("org.gtkmm4-with-libadwaita.example");

    app->signal_activate().connect([app]() {

        adw_style_manager_set_color_scheme(adw_style_manager_get_default(), ADW_COLOR_SCHEME_PREFER_DARK);

        auto builder = Gtk::Builder::create_from_file("resources/ui/example.xml");
        auto window = builder->get_widget<Gtk::ApplicationWindow>("window1");
        app->add_window(*window);
        window->show();
    });

    return app->run(argc, argv);
}