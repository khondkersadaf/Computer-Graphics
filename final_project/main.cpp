#include <windows.h>
#include <GL/glut.h>
#define PI 3.141516
#include<math.h>

float counter_sun=0.0;
float x,y,i;
GLfloat boat_speed = 0.03f;
GLfloat boat_position = 0.0f;


void update_boat(int value) {



    //boat animation
        if(boat_position < -1.0)
    boat_position = 1.0f;

    boat_position -= boat_speed;

	glutPostRedisplay();


	glutTimerFunc(100, update_boat, 0);
}






void initGL()
{

    glClearColor(0.8f, 0.4f, 0.4f, 0.6f);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'e':



    glClearColor(0.8f, 0.4f, 0.4f, 0.6f);
	glutPostRedisplay();
break;

case 'n':



    glClearColor(0.0f, 0.0f, 0.0f,0.0f);
	glutPostRedisplay();
break;



case 'd':



    glClearColor(0.0f, 0.4f, 0.7f, 0.0f);
	glutPostRedisplay();
break;


	}
}



void background()
{


glEnd();

glPushMatrix();
glRotatef(counter_sun,0.0,0.0,-1.0);
counter_sun+=2.0;
glTranslatef(0.6f,0.7f,0.0f);
glBegin(GL_TRIANGLE_FAN);

glColor3ub(255,244,0);
for(i=0;i<=2*3.14;i+=0.0001)
{
x=0.08*sin(i);
y=0.08*cos(i);
glVertex2f(x,y);
}
glEnd();
glPopMatrix();


    glBegin(GL_QUADS);///river
	glColor4f(0.0f, 0.6f, 0.9f, 0.0f);

	glVertex2f(-1.0f, -0.35f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.35f);
	glEnd();



    glBegin(GL_QUADS);///middle porch
	glColor3ub(255,255,0);

	glVertex2f(-0.4f, -0.26f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.26f);
	glEnd();


    glBegin(GL_QUADS);///middle building stairs
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.4f, -0.215f);
	glVertex2f(-0.4f, -0.26f);
	glVertex2f(0.4f, -0.26f);
	glVertex2f(0.4f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);///left porch
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, -0.32f);
	glVertex2f(-1.0f, -0.35f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(-0.5f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-1.0f, -0.215f);
	glVertex2f(-1.0f, -0.32f);
	glVertex2f(-0.5f, -0.32f);
	glVertex2f(-0.45f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.45f, -0.215f);
	glVertex2f(-0.5f, -0.32f);
	glVertex2f(-0.45f, -0.35f);
	glVertex2f(-0.4f, -0.26f);
	glEnd();

	glBegin(GL_TRIANGLES);///green  left  side small triangle
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-0.45f, -0.215f);
	glVertex2f(-0.4f, -0.26f);
	glVertex2f(-0.4f,  -0.215f);
    glEnd();


	 glBegin(GL_QUADS);///right porch
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(1.0f, -0.32f);
	glVertex2f(1.0f, -0.35f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.5f, -0.32f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(1.0f, -0.215f);
	glVertex2f(1.0f, -0.32f);
	glVertex2f(0.5f, -0.32f);
	glVertex2f(0.45f, -0.215f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(0.45f, -0.215f);
	glVertex2f(0.5f, -0.32f);
	glVertex2f(0.45f, -0.35f);
	glVertex2f(0.4f, -0.26f);
	glEnd();

    glBegin(GL_TRIANGLES);///green right side side small triangle
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(0.45f, -0.215f);
	glVertex2f(0.4f, -0.26f);
	glVertex2f(0.4f,  -0.215f);
    glEnd();
    ////////////////

    glBegin(GL_QUADS);///centre building bottom
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.35f, -0.17f);
	glVertex2f(-0.35f, -0.215f);
	glVertex2f(0.35f, -0.215f);
	glVertex2f(0.35f, -0.17f);
	glEnd();





///////////////////////////
	glBegin(GL_QUADS);///left side grass
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(-1.0f, -0.17f);
	glVertex2f(-1.0f, -0.215f);
	glVertex2f(-0.35f, -0.215f);
	glVertex2f(-0.35f, -0.17f);
	glEnd();

//
	glBegin(GL_QUADS);///right side grass
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(1.0f, -0.17f);
	glVertex2f(1.0f, -0.215f);
	glVertex2f(0.35f, -0.215f);
	glVertex2f(0.35f, -0.17f);
	glEnd();
/////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////
    glBegin(GL_QUADS);///right tree background
	glColor3ub(0,0,0);

	glVertex2f(-1.0f, 0.23f);
	glVertex2f(-1.0f, -0.17f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(-0.1f, 0.23f);
	glEnd();
	    glBegin(GL_QUADS);///left side tree body
	glColor3f(0.5f, 0.0f, 0.0f);

	glVertex2f(-0.43f, -0.06f);
	glVertex2f(-0.43f, -0.215f);
	glVertex2f(-0.41f, -0.215f);
	glVertex2f(-0.41f, -0.06f);
	glEnd();
/// left tree
		glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.5f, -0.06f);
	glVertex2f(-0.34f, -0.06f);
	glVertex2f(-0.42f,  0.1f);
    glEnd();

    		glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.495f, -0.02f);
	glVertex2f(-0.345f, -0.02f);
	glVertex2f(-0.42f,  0.17f);
    glEnd();

        		glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(-0.49f, 0.02f);
	glVertex2f(-0.35f, 0.02f);
	glVertex2f(-0.42f,  0.2f);
    glEnd();

///////////////////////////////////////////////////////////////////////////
    glBegin(GL_QUADS);///middle building left column
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.34f, 0.25f);
	glVertex2f(-0.34f, -0.17f);
	glVertex2f(-0.32f, -0.17f);
	glVertex2f(-0.32f, 0.25f);
	glEnd();

//left building
	    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.98f, 0.29f);
	glVertex2f(-0.98f, -0.215f);
	glVertex2f(-0.5f, -0.215f);
	glVertex2f(-0.5f, 0.29f);
	glEnd();





		    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.98f, 0.45f);
	glVertex2f(-0.98f, -0.215f);
	glVertex2f(-0.7f, -0.215f);
	glVertex2f(-0.7f, 0.45f);
	glEnd();



			    glBegin(GL_QUADS);///Left building roof
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.99f, 0.49f);
	glVertex2f(-0.99f, 0.45f);
	glVertex2f(-0.7f, 0.45f);
	glVertex2f(-0.7f, 0.49f);
	glEnd();

				    glBegin(GL_QUADS);///Left building middle roof
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.99f, 0.15f);
	glVertex2f(-0.99f, 0.11f);
	glVertex2f(-0.7f, 0.11f);
	glVertex2f(-0.7f, 0.15f);
	glEnd();
	////
		    glBegin(GL_QUADS);///Left building window
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.96f, 0.41f);
	glVertex2f(-0.96f, 0.32f);
	glVertex2f(-0.72f, 0.32f);
	glVertex2f(-0.72f, 0.41f);
	glEnd();


			    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.96f, 0.28f);
	glVertex2f(-0.96f, 0.18f);
	glVertex2f(-0.72f, 0.18f);
	glVertex2f(-0.72f, 0.28f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.7f, 0.49f);
    glVertex2f(-0.7f, -0.215f);
    glVertex2f(-0.696f, -0.215f);
    glVertex2f(-0.696f, 0.49f);
    glEnd();

        glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.696f, 0.32f);
    glVertex2f(-0.696f, 0.29f);
    glVertex2f(-0.47f, 0.29f);
    glVertex2f(-0.47f, 0.32f);
    glEnd();

            glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.696f, 0.35f);
    glVertex2f(-0.696f, 0.32f);
    glVertex2f(-0.45f, 0.32f);
    glVertex2f(-0.45f, 0.35f);
    glEnd();

        glBegin(GL_QUADS);///left building right window
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.675f, 0.265f);
    glVertex2f(-0.675f, 0.14f);
    glVertex2f(-0.52f, 0.14f);
    glVertex2f(-0.52f, 0.265f);
    glEnd();

            glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.675f, 0.11f);
    glVertex2f(-0.675f, -0.02f);
    glVertex2f(-0.52f, -0.02f);
    glVertex2f(-0.52f, 0.11f);
    glEnd();

                glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.675f, -0.05f);
    glVertex2f(-0.675f, -0.19f);
    glVertex2f(-0.52f, -0.19f);
    glVertex2f(-0.52f, -0.05f);
    glEnd();
    //////////////////////////////////////////////////
    /////////////////////////////////////////
    ///////////////////////////
    ////////////////////

    			    glBegin(GL_QUADS);///left building door
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.87f, -0.03f);
	glVertex2f(-0.87f, -0.215f);
	glVertex2f(-0.78f, -0.215f);
	glVertex2f(-0.78f, -0.03f);
	glEnd();

		    glBegin(GL_QUADS);///left building door centre
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.82f, -0.03f);
    glVertex2f(-0.82f, -0.215f);
    glVertex2f(-0.826f, -0.215f);
    glVertex2f(-0.826f, -0.03f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.7f, -0.15f);
	glVertex2f(-0.7f, 0.05f);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.75f, -0.05f);
	glVertex2f(-0.75f, -0.06f);
	glVertex2f(-0.7f, -0.06f);
	glVertex2f(-0.7f, -0.05f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(-0.96f, 0.05f);
	glVertex2f(-0.96f, -0.15f);
	glVertex2f(-0.9f, -0.15f);
	glVertex2f(-0.9f, 0.05f);
	glEnd();///

	    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.96f, -0.05f);
	glVertex2f(-0.96f, -0.06f);
	glVertex2f(-0.9f, -0.06f);
	glVertex2f(-0.9f, -0.05f);
	glEnd();


			    glBegin(GL_QUADS);///lamp post left
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.71f, 0.03f);
	glVertex2f(-0.71f, -0.215f);
	glVertex2f(-0.696f, -0.215f);
	glVertex2f(-0.696f, 0.03f);
	glEnd();

				    glBegin(GL_QUADS);///lamp post left
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.72f, 0.07f);
	glVertex2f(-0.71f, 0.03f);
	glVertex2f(-0.696f, 0.03f);
	glVertex2f(-0.685f, 0.07f);
	glEnd();

	glBegin(GL_TRIANGLES);///lamp post left
	glColor3f(1.0f, 0.0f, 0.0f);

	glVertex2f(-0.72f, 0.07f);
	glVertex2f(-0.685f, 0.07f);
	glVertex2f(-0.7f,  0.09f);


	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.8f, 0.8f);

	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, -0.17f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.35f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.1f, 0.16f);
	glVertex2f(0.1f, 0.14f);
	glVertex2f(0.35f, 0.14f);
	glVertex2f(0.35f, 0.16f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.35f, 0.16f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.36f, -0.17f);
	glVertex2f(0.36f, 0.16f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.6f, 0.6f, 0.6f);

	glVertex2f(0.35f, 0.12f);
	glVertex2f(0.35f, -0.17f);
	glVertex2f(0.45f, -0.17f);
	glVertex2f(0.45f, 0.12f);
	glEnd();

		glBegin(GL_QUADS);
	glColor3f(0.6f, 1.0f, 1.0f);

	glVertex2f(0.37f, 0.1f);
	glVertex2f(0.37f, -0.06f);
	glVertex2f(0.41f, -0.06f);
	glVertex2f(0.41f, 0.1f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(0.5f, 0.29f);
	glVertex2f(0.4f, 0.14f);
	glVertex2f(0.8f, 0.14f);
	glVertex2f(0.8f, 0.29f);
	glEnd();
////////////////////////////////
    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.45f, 0.14f);
	glVertex2f(0.45f, -0.17f);
	glVertex2f(0.8f, -0.17f);
	glVertex2f(0.8f, 0.14f);
	glEnd();

		glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.47f, 0.11f);
	glVertex2f(0.47f, 0.03f);
	glVertex2f(0.51f, 0.03f);
	glVertex2f(0.51f, 0.11f);
	glEnd();

			glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.54f, 0.11f);
	glVertex2f(0.54f, 0.03f);
	glVertex2f(0.58f, 0.03f);
	glVertex2f(0.58f, 0.11f);
	glEnd();

				glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.61f, 0.11f);
	glVertex2f(0.61f, 0.03f);
	glVertex2f(0.65f, 0.03f);
	glVertex2f(0.65f, 0.11f);
	glEnd();

					glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.68f, 0.11f);
	glVertex2f(0.68f, 0.03f);
	glVertex2f(0.72f, 0.03f);
	glVertex2f(0.72f, 0.11f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.75f, 0.11f);
	glVertex2f(0.75f, 0.03f);
	glVertex2f(0.79f, 0.03f);
	glVertex2f(0.79f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.47f, -0.06f);
	glVertex2f(0.47f, -0.14f);
	glVertex2f(0.51f, -0.14f);
	glVertex2f(0.51f, -0.06f);
	glEnd();

			glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.54f, -0.06f);
	glVertex2f(0.54f, -0.14f);
	glVertex2f(0.58f, -0.14f);
	glVertex2f(0.58f,-0.06f);
	glEnd();

				glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.61f, -0.06f);
	glVertex2f(0.61f, -0.14f);
	glVertex2f(0.65f, -0.14f);
	glVertex2f(0.65f, -0.06f);
	glEnd();

					glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.68f, -0.06f);
	glVertex2f(0.68f, -0.14f);
	glVertex2f(0.72f, -0.14f);
	glVertex2f(0.72f, -0.06f);
	glEnd();

					glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.75f, -0.06f);
	glVertex2f(0.75f, -0.14f);
	glVertex2f(0.79f, -0.14f);
	glVertex2f(0.79f, -0.06f);
	glEnd();


	    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.45f, 0.00f);
	glVertex2f(0.45f, -0.03f);
	glVertex2f(0.8f, -0.03f);
	glVertex2f(0.8f, 0.00f);
	glEnd();


		    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.775f, -0.02f);
	glVertex2f(0.775f, -0.215f);
	glVertex2f(0.79f, -0.215f);
	glVertex2f(0.79f, -0.02f);
	glEnd();




    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.8f, 0.24f);
	glVertex2f(0.8f, -0.17f);
	glVertex2f(0.93f, -0.17f);
	glVertex2f(0.93f, 0.24f);
	glEnd();

	    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.8f, 0.02f);
	glVertex2f(0.8f, 0.00f);
	glVertex2f(0.93f, 0.00f);
	glVertex2f(0.93f, 0.02f);
	glEnd();

				    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, 0.12f);
	glVertex2f(0.82f, 0.04f);
	glVertex2f(0.91f, 0.04f);
	glVertex2f(0.91f, 0.12f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, 0.086f);
	glVertex2f(0.82f, 0.08f);
	glVertex2f(0.91f, 0.08f);
	glVertex2f(0.91f, 0.086f);
	glEnd();



    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.8633f, 0.12f);
	glVertex2f(0.8633f, 0.04f);
	glVertex2f(0.8666f, 0.04f);
	glVertex2f(0.8666f, 0.12f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3f(0.9f, 0.6f, 0.0f);

	glVertex2f(0.8f, 0.24f);
	glVertex2f(0.93f, 0.24f);
	glVertex2f(0.865f,  0.34f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.9f);

	glVertex2f(0.93f, 0.13f);
	glVertex2f(0.93f, -0.17f);
	glVertex2f(1.0f, -0.17f);
	glVertex2f(1.0f, 0.13f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.93f, 0.11f);
	glVertex2f(0.93f, 0.03f);
	glVertex2f(0.955f, 0.03f);
	glVertex2f(0.955f, 0.11f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.94f, -0.02f);
	glVertex2f(0.94f, -0.215f);
	glVertex2f(0.955f, -0.215f);
	glVertex2f(0.955f, -0.02f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.82f, -0.04f);
	glVertex2f(0.82f, -0.17f);
	glVertex2f(0.91f, -0.17f);
	glVertex2f(0.91f, -0.04f);
	glEnd();
	///////////////
    glBegin(GL_QUADS);
	glColor3f(0.8f, 0.8f, 0.8f);

	glVertex2f(0.82f, -0.17f);
	glVertex2f(0.79f, -0.20f);
	glVertex2f(0.94f, -0.20f);
	glVertex2f(0.91f, -0.17f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.8633f, -0.04f);
	glVertex2f(0.8633f, -0.17f);
	glVertex2f(0.8666f, -0.17f);
	glVertex2f(0.8666f, -0.04f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.775f, 0.00f);
	glVertex2f(0.775f, -0.02f);
	glVertex2f(0.955f, -0.02f);
	glVertex2f(0.955f, 0.00f);
	glEnd();



    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.775f, -0.20f);
	glVertex2f(0.775f, -0.215f);
	glVertex2f(0.955f, -0.215f);
	glVertex2f(0.955f, -0.20f);
	glEnd();
	///////////////////////////////////////////////
	//////////////////////////////////////////////


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.34f, 0.25f);
	glVertex2f(0.34f, -0.17f);
	glVertex2f(0.32f, -0.17f);
	glVertex2f(0.32f, 0.25f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.4f, 0.29f);
	glVertex2f(-0.4f, 0.25f);
	glVertex2f(0.4f, 0.25f);
	glVertex2f(0.4f, 0.29f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.3f, 0.01f);
	glVertex2f(-0.3f, -0.17f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(-0.1f, 0.01f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.29f, 0.0f);
	glVertex2f(-0.29f, -0.16f);
	glVertex2f(-0.11f, -0.16f);
	glVertex2f(-0.11f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.28f, -0.01f);
	glVertex2f(-0.28f, -0.15f);
	glVertex2f(-0.205f, -0.15f);
	glVertex2f(-0.205f, -0.01f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.195f, -0.01f);
	glVertex2f(-0.195f, -0.15f);
	glVertex2f(-0.12f, -0.15f);
	glVertex2f(-0.12f, -0.01f);
	glEnd();



    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.3f, 0.01f);
	glVertex2f(-0.1f, 0.01f);
	glVertex2f(-0.1f, 0.05f);
	glEnd();



	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.3f, 0.25f);
	glVertex2f(-0.3f, 0.05f);
	glVertex2f(-0.1f, 0.05f);
	glVertex2f(-0.1f, 0.25f);
	glEnd();



    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.29f, 0.24f);
	glVertex2f(-0.29f, 0.06f);
	glVertex2f(-0.11f, 0.06f);
	glVertex2f(-0.11f, 0.24f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.28f, 0.23f);
	glVertex2f(-0.28f, 0.07f);
	glVertex2f(-0.205f, 0.07f);
	glVertex2f(-0.205f, 0.23f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.195f, 0.23f);
	glVertex2f(-0.195f, 0.07f);
	glVertex2f(-0.12f, 0.07f);
	glVertex2f(-0.12f, 0.23f);
	glEnd();



    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.1f, 0.05f);
	glVertex2f(-0.1f, -0.17f);
	glVertex2f(0.1f, -0.17f);
	glVertex2f(0.1f, 0.05f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(-0.05f, 0.0f);
	glVertex2f(-0.05f, -0.17f);
	glVertex2f(0.05f, -0.17f);
	glVertex2f(0.05f, 0.0f);
	glEnd();

    glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.01f);
    glVertex2f(0.0f, -0.17f);
    glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.065f, 0.0f);
	glVertex2f(-0.065f, -0.17f);
	glVertex2f(-0.085f, -0.17f);
	glVertex2f(-0.085f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.065f, 0.0f);
	glVertex2f(0.065f, -0.17f);
	glVertex2f(0.085f, -0.17f);
	glVertex2f(0.085f, 0.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.09f, 0.0f);
	glVertex2f(-0.09f, -0.04f);
	glVertex2f(0.09f, -0.04f);
	glVertex2f(0.09f, 0.0f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.1f, 0.09f);
	glVertex2f(-0.1f, 0.05f);
	glVertex2f(0.1f, 0.05f);
	glVertex2f(0.1f, 0.09f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(-0.1f, 0.33f);
	glVertex2f(-0.1f, 0.09f);
	glVertex2f(0.1f, 0.09f);
	glVertex2f(0.1f, 0.33f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.08f, 0.32f);
	glVertex2f(-0.08f, 0.1f);
	glVertex2f(0.08f, 0.1f);
	glVertex2f(0.08f, 0.32f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

    glVertex2f(0.1f, 0.01f);
	glVertex2f(0.3f, 0.01f);
	glVertex2f(0.3f, -0.17f);
	glVertex2f(0.1f, -0.17f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.29f, 0.0f);
	glVertex2f(0.29f, -0.16f);
	glVertex2f(0.11f, -0.16f);
	glVertex2f(0.11f, 0.0f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.28f, -0.01f);
	glVertex2f(0.28f, -0.15f);
	glVertex2f(0.205f, -0.15f);
	glVertex2f(0.205f, -0.01f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.195f, -0.01f);
	glVertex2f(0.195f, -0.15f);
	glVertex2f(0.12f, -0.15f);
	glVertex2f(0.12f, -0.01f);
	glEnd();


    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.3f, 0.01f);
	glVertex2f(0.1f, 0.01f);
	glVertex2f(0.1f, 0.05f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3f(0.9f, 0.4f, 0.0f);

	glVertex2f(0.3f, 0.25f);
	glVertex2f(0.3f, 0.05f);
	glVertex2f(0.1f, 0.05f);
	glVertex2f(0.1f, 0.25f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.29f, 0.24f);
	glVertex2f(0.29f, 0.06f);
	glVertex2f(0.11f, 0.06f);
	glVertex2f(0.11f, 0.24f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.28f, 0.23f);
	glVertex2f(0.28f, 0.07f);
	glVertex2f(0.205f, 0.07f);
	glVertex2f(0.205f, 0.23f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 1.0f, 1.0f);

	glVertex2f(0.195f, 0.23f);
	glVertex2f(0.195f, 0.07f);
	glVertex2f(0.12f, 0.07f);
	glVertex2f(0.12f, 0.23f);
	glEnd();

			    glBegin(GL_QUADS);///lamp post right
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.71f, 0.03f);
	glVertex2f(0.71f, -0.215f);
	glVertex2f(0.696f, -0.215f);
	glVertex2f(0.696f, 0.03f);
	glEnd();

				    glBegin(GL_QUADS);///lamp post right
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.72f, 0.07f);
	glVertex2f(0.71f, 0.03f);
	glVertex2f(0.696f, 0.03f);
	glVertex2f(0.685f, 0.07f);
	glEnd();

	glBegin(GL_TRIANGLES);///lamp post right
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.72f, 0.07f);
	glVertex2f(0.685f, 0.07f);
	glVertex2f(0.7f,  0.09f);


	glEnd();

	glBegin(GL_QUADS);///right side tree body
	glColor3f(0.5f, 0.0f, 0.0f);

	glVertex2f(0.43f, -0.06f);
	glVertex2f(0.43f, -0.215f);
	glVertex2f(0.41f, -0.215f);
	glVertex2f(0.41f, -0.06f);
	glEnd();

		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.5f, -0.06f);
	glVertex2f(0.34f, -0.06f);
	glVertex2f(0.42f,  0.1f);
    glEnd();

    		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.495f, -0.02f);
	glVertex2f(0.345f, -0.02f);
	glVertex2f(0.42f,  0.17f);
    glEnd();

          		glBegin(GL_TRIANGLES);///Green tree
	glColor3f(0.0f, 0.8f, 0.0f);

	glVertex2f(0.49f, 0.02f);
	glVertex2f(0.35f, 0.02f);
	glVertex2f(0.42f,  0.2f);
    glEnd();

    glBegin(GL_QUADS);///red high
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.12f, 0.37f);
	glVertex2f(-0.12f, 0.33f);
	glVertex2f(0.12f, 0.33f);
	glVertex2f(0.12f, 0.37f);
	glEnd();


    glBegin(GL_QUADS);///red high up
	glColor3f(0.7f, 0.0f, 0.0f);

	glVertex2f(-0.14f, 0.41f);
	glVertex2f(-0.14f, 0.37f);
	glVertex2f(0.14f, 0.37f);
	glVertex2f(0.14f, 0.41f);
	glEnd();


    glPushMatrix();
        glTranslatef(boat_position,0.0f, 0.0f);


    //boat
    glTranslatef(boat_position,0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(153,51,0);           //BOAT BASE
    glVertex2f(-0.98f,-0.79f);
    glVertex2f(-0.49f,-0.79f);
    glVertex2f(-0.56f,-0.95f);
    glVertex2f(-0.92f,-0.95f);
	glEnd();
	//................................................
	glBegin(GL_POLYGON);
	glColor3ub(255,255,53);           //Boat BOX
    glVertex2f(-0.81f,-0.68f);
    glVertex2f(-0.56f,-0.68f);
    glVertex2f(-0.56f,-0.79f);
    glVertex2f(-0.81f,-0.79f);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);              // Sail support 1 from right
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.70f,-0.26f);
    glVertex2f(-0.70f,-0.78f);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);              // Sail support 2 from eight
	glColor3f(1.0f, 0.0f, 0.0f); // Re
	glVertex2f(-0.71f,-0.27f);
    glVertex2f(-0.71f,-0.79f);
	glEnd();

	glLineWidth(2.0);
	glBegin(GL_LINES);              // Sail support 3 from eight
	glColor3f(1.0f, 0.0f, 0.0f); // Re
	glVertex2f(-0.77f,-0.38f);
    glVertex2f(-0.77f,-0.79f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);           //SAIL 1 FROM RIGHT
    glVertex2f(-0.70f,-0.26f);
    glVertex2f(-0.61f,-0.72f);
    glVertex2f(-0.70f,-0.70f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);           //SAIL 2 FROM RIGHT
    glVertex2f(-0.71f,-0.28f);
    glVertex2f(-0.71f,-0.699717f);
    glVertex2f(-0.80f,-0.72f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,255);           //SAIL 3 FROM RIGHT
    glVertex2f(-0.77f,-0.38f);
    glVertex2f(-0.77f,-0.71f);
    glVertex2f(-0.87f,-0.74f);
    glEnd();
    glPopMatrix();
    glFlush();
}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	background();

	glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("A Beautiful Scenario");
	glutDisplayFunc(display);
    glutTimerFunc(100, update_boat, 0);
	initGL();
    glutKeyboardFunc(handleKeypress);

	glutMainLoop();
	return 0;
}

