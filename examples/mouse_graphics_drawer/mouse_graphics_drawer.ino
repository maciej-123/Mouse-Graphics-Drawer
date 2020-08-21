//graphics drawer tester - Maciej Zajaczkowski Copyright 2020

//WARNING: The following macros take over your mouse and emulate left click to draw.
//Please ensure that cursor is positioned in the centre of the drawing space so that
//the mouse does not affect other apps and cause accidental damage and/or loss of work.

//please note shapes are usually drawn from the bottom left.

#include "Mouse.h"
#include <mouse_graphics_drawer.h>


const int pinLed = LED_BUILTIN;
const int master = 9;
int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(master, INPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);

  // Sends a clean report to the host. This is important on any Arduino type.
  Serial.begin(9600);
  Mouse.begin();
}

bool lock1 = false;
bool lock2 = false;
bool lock3 = false;
bool lock4 = false;

int polygon = 3;

void loop() {

  if (digitalRead(master)) {

    if(digitalRead(button1) == HIGH)
    {
        //square
        //draw square
        if(lock1 == false)
        {
        mouse_draw_triangle(20);
        mouse_draw_square(20);
        mouse_draw_hexagon(20);
        mouse_draw_octagon(20);
        
        }
        lock1 = true;
    }
    else
    {
      lock1 = false;
    }
    
    if(digitalRead(button2) == HIGH)
    {
      //circle  
      if(lock2 == false)
      {                   
      mouse_draw_circle(20);
      delay(50);
      mouse_draw_sin_wave(40,100,5); 
                             
      }                
      lock2 = true;
    }
    else
    {
      lock2 = false;
    }
    
    if(digitalRead(button3) == HIGH)
    { 
        if(lock3 == false)
        {  
        mouse_draw_check_mark(0);
        delay(100);
        Mouse.move(20,0,0);
        mouse_draw_check_mark(1);
        delay(100);
        Mouse.move(20,0,0);
        mouse_draw_x_mark();
         lock3 = true;
        }
    }
    else
    {
      lock3 = false;
    }

    if(digitalRead(button4) == HIGH)
    { 
        //triangle
        if(lock4 == false)
        {  

          mouse_draw_line_v_h(100,0);
          delay(100);
          mouse_draw_line_v_h(100,1);
          delay(50);
          mouse_draw_line(100,30);
          delay(50);
          for(int n = 3; n < 13; n++)
          {
          mouse_draw_polygon(15,n);
          delay(50);
          }
          
          lock4 = true;
        }
    }
    else
    {
      lock4 = false;
    }
      
    delay(50);

  }
}
