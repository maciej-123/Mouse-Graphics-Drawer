#ifndef MOUSE_GRAPHICS_DRAWER_H
#define MOUSE_GRAPHICS_DRAWER_H

#include <Arduino.h>
#include <Mouse.h>

void mouse_draw_triangle(int d = 20);
void mouse_draw_square(int d = 20);
void mouse_draw_hexagon(int d = 20);
void mouse_draw_octagon(int d = 20);
void mouse_draw_circle(int R = 20);
void mouse_draw_sin_wave(int D = 40,int H = 100,int L = 5);
void mouse_draw_check_mark(bool left_handed = 0);
void mouse_draw_x_mark();
void mouse_draw_line_v_h(int length = 100, bool vertical = 0);
void mouse_draw_line(int length = 15, float angle = 0);
void mouse_draw_polygon(float length = 15, int n_sides = 3);

#endif 
