#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);
glBegin(GL_LINES);
glVertex2i(0, 240);
glVertex2i(320, 240);
glVertex2i(320, 480);
glVertex2i(320, 240);

glVertex2i(0, 360);
glVertex2i(120, 360);
glVertex2i(120, 480);
glVertex2i(120, 360);

glVertex2i(200, 480);
glVertex2i(200, 360);
glVertex2i(200, 360);
glVertex2i(320, 360);

glVertex2i(200, 480);
glVertex2i(200, 480);
//glVertex2i(200, 360);
//glVertex2i(200, 360);
glVertex2i(200, 180);
glVertex2i(200, 360);




glVertex2i(0, 320);
glVertex2i(120, 320);
glVertex2i(120, 320);
glVertex2i(120, 240);



glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1080, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
