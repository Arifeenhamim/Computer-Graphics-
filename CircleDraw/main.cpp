#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
int x = 0, y,x2, y2, p;
int r;
void display(void){

glClear (GL_COLOR_BUFFER_BIT);
glEnd();

glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POINTS);

p= 1-r;
while ((x<y))
{
    if(p<0)
    {
        x=x+1;
        y=y;
        printf("%d %d\n",x,y);
        p=p+(2*x+1);

    }
    else{
        x=x+1;
        y=y-1;
        printf("%d %d\n" ,x,y);
        p=p+(2*x)+1-(2*y);

    }

    glVertex3i(x,y,0.0);
    glVertex3i(y,x,0.0);

    glVertex3i(-x,y,0.0);
    glVertex3i(-y,x,0.0);

    glVertex3i(-x,-y,0.0);
    glVertex3i(-y,-x,0.0);

    glVertex3i(x,-y,0.0);
    glVertex3i(y,-x,0.0);

}

glEnd();


glFlush();
}
void init(void)
{
    glClearColor(0.0, 0.0 , 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0,100.0, -1.0, 1.0);

}

int main(int argc, char* argv[])
{
printf("Enter radius :");
scanf("%d", &r);
y=r;
glutInit(&argc, argv); // Initalise GLUT
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); // Set display mode

 glutInitWindowPosition(100, 100); // Set window position
glutInitWindowSize(500, 500); // Set window size
glutCreateWindow("Circle"); // Create display window

 init(); // Execute initialisation procedure
glutDisplayFunc(display); // Send graphics to display window
glutMainLoop(); // Display everything and wait

 return 0;
}
