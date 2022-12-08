#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
float counter1=0.0;
float counter2=0.0;
void init(void)
{
//gluOrtho2D(0,800,400,0);
//glOrtho(0,800,500,0,1,-1);
}
void fan(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glClear(GL_COLOR_BUFFER_BIT);
//glPointSize(10.0);
//glLoadIdentity();
glLoadIdentity(); // center ta fix kora ..

// big circle
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.46*sin(i);
y=0.46*cos(i);
glVertex2f(x,y);
}
glEnd();


glPushMatrix();
glRotatef(counter1,0.0,0.0,-1.0); // rotate kora .. angle, x, y, z axis
// z axis e rotate kori amra .. -1 clock wise .. 1 anti clock wise ...
// koto tuku poriman ghurtese .. angle koto dicchen ..

counter1+=0.01;
glBegin(GL_QUADS);
glColor3ub(34,139,34);

glVertex2f(-0.01,0.0);
glVertex2f(0.01,0.0);
        glVertex2f(0.01,0.20);
        glVertex2f(0.0,0.20);
glEnd();
glPopMatrix();

glPushMatrix();
glRotatef(counter2,0.0,0.0,-1.0); // rotate kora .. angle, x, y, z axis
// z axis e rotate kori amra .. -1 clock wise .. 1 anti clock wise ...
// koto tuku poriman ghurtese .. angle koto dicchen ..

counter2+=0.07;
glBegin(GL_QUADS);
glColor3ub(34,139,34);

glVertex2f(-0.01,0.0);
glVertex2f(0.01,0.0);
        glVertex2f(0.01,0.40);
        glVertex2f(0.0,0.40);
glEnd();
glPopMatrix();



    // small circle
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,205);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.02*sin(i);
y=0.02*cos(i);
glVertex2f(x,y);
}
glEnd();



// glTranslatef(x,y ,0) // push matrix ... pop matrix

glutSwapBuffers();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowPosition(-1,-1);
glutInitWindowSize(640,480);
glutCreateWindow("Fan");
init();
glutDisplayFunc(fan);
glutIdleFunc(fan);  // timer function er cheye powerful
glutMainLoop();
return 0;
}
