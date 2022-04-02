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

 //Set colour to red
glColor3f(0.0, 1.0, 0.0);

glBegin(GL_POLYGON);

  glVertex2i(10,3);
  glVertex2i(12,1);

  glVertex2i(12,1);
  glVertex2i(15,0);

  glVertex2i(15,0);
  glVertex2i(18,1);

  glVertex2i(18,1);
  glVertex2i(20,3);


  glVertex2i(20,3);
  glVertex2i(20,5);

  glVertex2i(20,5);
  glVertex2i(20,7);

  glVertex2i(20,7);
  glVertex2i(18,9);

  glVertex2i(18,9);
  glVertex2i(15,10);

  glVertex2i(15,10);
  glVertex2i(12,9);

  glVertex2i(12,9);
  glVertex2i(10,7);

  glVertex2i(10,7);
  glVertex2i(10,5);

  glVertex2i(10,5);
  glVertex2i(10,3);



 glEnd();




 glFlush(); // Process all OpenGL routines
}

int main(int argc, char* argv[])
{
glutInit(&argc, argv); // Initalise GLUT
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); // Set display mode

 glutInitWindowPosition(50, 100); // Set window position
glutInitWindowSize(400, 300); // Set window size
glutCreateWindow("An Example OpenGL Program"); // Create display window

 init(); // Execute initialisation procedure
glutDisplayFunc(drawShapes); // Send graphics to display window
glutMainLoop(); // Display everything and wait

 return 0;
}
