#!/bin/sh
main=xfce4-workspace-number-plugin

g++ -Wall -shared -o lib${main}.so -fPIC ${main}.cpp `pkg-config --cflags --libs libxfce4panel-1.0` `pkg-config --cflags --libs gtk+-3.0`

# sudo cp -r lib${main}.so /usr/lib/xfce4/panel/plugins/.
# sudo chown -R root:root /usr/lib/xfce4/panel/plugins/lib${main}.so
