Library to draw shapes with cursor for Ardunio (Pro) Micro and Ardunio Leonardo Mouse Emulation.

Created by Maciej Zajaczkowski，Copyright 2020 ©. Free free to use this library even for commercial purposes, but please attribute me.

#include <mouse_graphics_drawer.h>


WARNING: The following macros take over your mouse and emulate left click to draw.Please ensure that cursor is positioned in the centre 
of the drawing space so that the mouse does exit the drawing field and affect other apps and cause accidental damage and/or loss of work.

Please note shapes are usually drawn from the bottom left.

Please note that there are two ways of drawing Triangles, Squares, Hexagons and Octagons. This is because different drawing applications
may register the output of these functions differently: for example the polygon function may produce dotted line polygons in some software.

The mouse_draw_polygon function will not work well beyond size 100-120. In addition such large shapes will not fit on the screen and will
thus pose risk of unpredictable behaviour on your computer as the cursor will likely exceed the drawing area.