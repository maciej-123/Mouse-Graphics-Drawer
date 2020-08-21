#include "mouse_graphics_drawer.h"

void mouse_draw_triangle(int d = 20)
{
      if(d >= 5)
      {
      Mouse.press();
      for(int n = 0; n <= d; n++) {Mouse.move(6,0,0);} 
      Mouse.move(1,0,0);    
      delay(30);
      for(int n = 0; n <= d; n++){Mouse.move(-3,-5,0);}
      Mouse.move(1,0,0);  
      delay(30);
      for(int n = 0; n <= d; n++){Mouse.move(-3,5,0);}
      Mouse.move(-1,0,0); 
      delay(30); 
      Mouse.release();
      }
}

void mouse_draw_square(int d = 20)
{
    if(d >= 5)
    {
    Mouse.press();
    for(int n = 0; n <= d; n++){Mouse.move(0,-6,0);}
    Mouse.move(1,0,0);  
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(6,0,0);} 
    Mouse.move(-1,0,0);   
    delay(30); 
    for(int n = 0; n <= d; n++){Mouse.move(0,6,0);}
    Mouse.move(1,0,0); 
    delay(30); 
    for(int n = 0; n <= d; n++){Mouse.move(-6,0,0);}
    Mouse.move(-1,0,0);  
    delay(30);
    Mouse.release();
    }
}


void mouse_draw_hexagon(int d = 20)
{
    if(d >= 5)
    {
    Mouse.press();    
    for(int n = 0; n <= d; n++){Mouse.move(-3,-5,0);}
    Mouse.move(1,0,0);
    delay(30); 
    for(int n = 0; n <= d; n++){Mouse.move(3,-5,0);}
    Mouse.move(-1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(6,0,0);}
    Mouse.move(1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(3,5,0);}
    Mouse.move(-1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(-3,5,0);}
    Mouse.move(1,0,0);
    delay(30); 
    for(int n = 0; n <= d; n++){Mouse.move(-6,0,0);}
    Mouse.move(-1,0,0); 
    delay(30);
    Mouse.release();
    }
}

void mouse_draw_octagon(int d = 20)
{
    if(d >= 5)
    {
    Mouse.press();
    for(int n = 0; n <= d; n++){Mouse.move(6,0,0);}
    Mouse.move(1,0,0);
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(4,-4,0);} 
    Mouse.move(-1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(0,-6,0);} 
    Mouse.move(1,0,0);
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(-4,-4,0);}
    Mouse.move(-1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(-6,0,0);}
    Mouse.move(1,0,0);
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(-4,4,0);}
    Mouse.move(-1,0,0); 
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(0,6,0);} 
    Mouse.move(1,0,0);
    delay(30);
    for(int n = 0; n <= d; n++){Mouse.move(4,4,0);} 
    Mouse.move(-1,0,0); 
    delay(30);
    Mouse.release();
    }
}

void mouse_draw_circle(int R = 20)
{
        float y_current = 0;
        float y_previous = 0;
        float y_to_move = 0; 
        float x_current = 0; 
        float x_previous = 0;
        float x_to_move = 0; 

         for(float n = 0; n <= 8.9; n+=0.1)
        {       
        if(n > 2.5)
        {
            Mouse.press();  
        }               
        x_current = 5*R*cos(n);  
        x_to_move = x_current - x_previous; 
        x_previous = x_current;  
          
        y_current = 5*R*sin(n);  
        y_to_move = y_current - y_previous; 
        y_previous = y_current;  
        Mouse.move(round(x_to_move), round(y_to_move),0); 
        delay(5);     
        }   
        Mouse.release();
}

void mouse_draw_sin_wave(int D = 40,int H = 100,int L = 5)
{      
        //sin wave
        float y_current = 0;
        float y_previous = 0;
        float to_move = 0;
        
        Mouse.press();
        for(float n = 0; n <= D/L; n+=0.1)
        {       
        y_current = H*sin(n);  
        to_move = y_current - y_previous; 
        y_previous = y_current;
            
        Mouse.move(L,round(to_move),0);
        delay(7);       
        }
        delay(50);
        Mouse.release();
}



void mouse_draw_check_mark(bool left_handed = 0)
{
  if(left_handed == 0)
  {
  Mouse.press();
  for(int n = 0; n <= 10; n++){Mouse.move(1,2,0);}
  delay(10);
  for(int n = 0; n <= 20; n++){Mouse.move(1,-2,0);}
  delay(10);
  }
  else if(left_handed == 1)
  {
  Mouse.press();
  for(int n = 0; n <= 10; n++){Mouse.move(-1,2,0);}
  delay(10);
  for(int n = 0; n <= 20; n++){Mouse.move(-1,-2,0);}
  delay(10);
  }
  Mouse.release();
}

void mouse_draw_x_mark()
{
  Mouse.press();
  for(int n = 0; n <= 20; n++){Mouse.move(1,-1,0);}
  delay(10);
  Mouse.release();
  Mouse.move(-14,0,0);
  delay(10);
  Mouse.press();
  for(int n = 0; n <= 20; n++){Mouse.move(1,1,0);}
  delay(10);
  Mouse.release();
  Mouse.move(-14,0,0);
  delay(10);
}

void mouse_draw_line_v_h(int length = 100, bool vertical = 0)
{
  Mouse.press();
  if(length > 0)
  {
  if(vertical == 0){for(int n = 0; n <= length; n++){Mouse.move(1,0,0);}}
  else{for(int n = 0; n <= length; n++){Mouse.move(0,-1,0);}}
  }
  delay(50);
  Mouse.release();    
}

void mouse_draw_line(int length = 15, float angle = 0)
{
  //convert to radians
  angle /= 57.3; 
  Mouse.press();
  Mouse.move(length*cos(angle),(-length)*sin(angle),0);
  Mouse.move(1,0,0);
  delay(30);
  Mouse.release();    
}

void mouse_draw_polygon(float length = 15, int n_sides = 3)
{
  //calculate angles:
  float angle = 360/((float)n_sides);

  int sides4_quotient = -1;

  //correction for polygons with sides divisible by 4
  //check if polygon sides divisible by 4
  if(n_sides % 4 == 0){sides4_quotient = n_sides/4;}
  Mouse.press();
  for(int x = 0; x <= n_sides; x++)
  {        
    if(sides4_quotient == -1)  
    {
      mouse_draw_line(length,x*angle);

    }  
    else
    {
      if(x != sides4_quotient)
      {
         mouse_draw_line(length,x*angle);

      }
      else
      {
        mouse_draw_line(length*0.99,x*angle);       
      }
     }
    }
    Mouse.release();
}
