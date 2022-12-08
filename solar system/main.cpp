#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x,y,i;
//float counter_black=0.0;
float counter_mercury=0.0;
float counter_venus=0.0;
float counter_earth=0.0;
float counter_mars=0.0;
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




//glBegin(GL_QUADS);
//glColor3ub(0,255,0);

//        glVertex2f(-0.01,0.0);
//        glVertex2f(0.01,0.0);
 //       glVertex2f(0.01,0.40);
 //       glVertex2f(0.0,0.40);
// glEnd();


    // black
//glPushMatrix();
//glRotatef(counter_black,0.0,0.0,-1.0);
//counter_black+=2.0;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.61*sin(i);
y=0.61*cos(i);
glVertex2f(x,y);
}
//glPopMatrix();
glEnd();

    // white
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.60*sin(i);
y=0.60*cos(i);
glVertex2f(x,y);
}
glEnd();

    // black
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.51*sin(i);
y=0.51*cos(i);
glVertex2f(x,y);
}
glEnd();


    // black after white
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.50*sin(i);
y=0.50*cos(i);
glVertex2f(x,y);
}
glEnd();

    // 2nd orbit white
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.41*sin(i);
y=0.41*cos(i);
glVertex2f(x,y);
}
glEnd();


    // black
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.40*sin(i);
y=0.40*cos(i);
glVertex2f(x,y);
}
glEnd();

    // first orbit white
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.21*sin(i);
y=0.21*cos(i);
glVertex2f(x,y);
}
glEnd();

    // core black block
glBegin(GL_TRIANGLE_FAN);
glColor3ub(0,0,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.20*sin(i);
y=0.20*cos(i);
glVertex2f(x,y);
}
glEnd();


    // sun // yellow
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,244,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.06*sin(i);
y=0.06*cos(i);
glVertex2f(x,y);
}
glEnd();

//mercury
glPushMatrix();
glRotatef(counter_mercury,0.0,0.0,-1.0);
counter_mercury+=2.0;
glTranslatef(0.2f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255 ,245 ,238);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.02*sin(i);
y=0.02*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

//venus
glPushMatrix();
glRotatef(counter_venus,0.0,0.0,-1.0);
counter_venus+=3.0;
glTranslatef(0.40f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(238, 207, 161);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.035*sin(i);
y=0.035*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

//earth
glPushMatrix();
glRotatef(counter_earth,0.0,0.0,-1.0);
counter_earth+=4.0;
glTranslatef(0.50f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(30,144,255);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.041*sin(i);
y=0.041*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();

//mars
glPushMatrix();
glRotatef(counter_mars,0.0,0.0,-1.0);
counter_mars+=5.0;
glTranslatef(0.60f,0.0f,0.0f);
glBegin(GL_TRIANGLE_FAN);
glColor3ub(205,38,38);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.04*sin(i);
y=0.04*cos(i);
glVertex2f(x,y);
}

glEnd();
glPopMatrix();




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
