#include<windows.h>
#include <GL/glut.h>

void init(void)
{
glClearColor(1.0, 1.0, 1.0, 0.0); // Set display window colour to white

 glMatrixMode(GL_PROJECTION); // Set projection parameters
gluOrtho2D(0.0, 35.0, 0.0, 30.0);
}

void drawShapes(void)
{
glClear(GL_COLOR_BUFFER_BIT); // Clear display window

 //Set colour to black
glColor3f(0.0, 0.0, 0.0);
//Adjust the point size
glPointSize(10.0);


glColor3f(0.0, 1.0, 0.0);

glBegin(GL_POLYGON);
  glVertex2i(10,0);
  glVertex2i(20,0);

  glVertex2i(20,0);
  glVertex2i(15,8);

  glVertex2i(15,8);
  glVertex2i(10,0);




 glEnd();
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);

glVertex2i(13,17);
glVertex2i(17,17);

glVertex2i(17,17);
glVertex2i(18,20);

glVertex2i(18,20);
glVertex2i(17,23);

glVertex2i(17,23);
glVertex2i(13,23);

glVertex2i(13,23);
glVertex2i(12,20);

glVertex2i(12,20);
glVertex2i(13,17);

glEnd();


glColor3f(0.0, 0.0, 1.0);
glBegin(GL_POLYGON);

glVertex2i(21,15);
glVertex2i(24,15);

glVertex2i(24,15);
glVertex2i(26,16);

glVertex2i(26,16);
glVertex2i(27,18);

glVertex2i(27,18);
glVertex2i(26,20);

glVertex2i(26,20);
glVertex2i(24,21);

glVertex2i(24,21);
glVertex2i(21,21);

glVertex2i(21,21);
glVertex2i(19,20);

glVertex2i(19,20);
glVertex2i(18,18);

glVertex2i(18,18);
glVertex2i(19,16);

glVertex2i(19,16);
glVertex2i(21,15);




 glEnd();

 glFlush(); // Process all OpenGL routin
