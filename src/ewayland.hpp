#pragma once

#include <wayland-client-protocol.h>
#include <wayland-client.h>

// #include <vector>


class WaylandWindow {

    public:

    private:

        wl_display *wayl_display;
        wl_registry *wayl_registry;
        wl_compositor *wayl_compositor;
        wl_surface *wayl_surface;
        
};