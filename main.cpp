#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat position = 0.0f;
GLfloat speed = 0.04f;

GLfloat body_speed = 0.0f;

GLfloat bullet_speed = 0.0f;
GLfloat bullet_position = 0.0f;

GLfloat bullet_speed_x = 0.0f;
GLfloat bullet_position_x = 0.0f;

GLfloat left_enemy_position = 0.2f;
GLfloat right_enemy_position = 0.4f;
GLfloat center_enemy_position = 0.5f;

//firing body
void update(int value) {

    if(position > 1.0)
    position = -1.2f;

    position += body_speed;

    if(bullet_position > 1.0)
    bullet_position = 0.0f;

    bullet_position += bullet_speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update_left_enemy(int value) {

    if(left_enemy_position < -1.0)
    left_enemy_position = 1.0f;

    left_enemy_position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update_left_enemy, 0);
}
void update_right_enemy(int value) {

    if(right_enemy_position < -1.0)
    right_enemy_position = 1.0f;

    right_enemy_position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update_right_enemy, 0);
}

void update_center_enemy(int value) {

    if(center_enemy_position < -1.0)
    center_enemy_position = 1.2f;

    center_enemy_position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update_center_enemy, 0);
}


void init() {
   glClearColor(1.0f, 0.5f, 0.0f, 0.0f);
}

/*void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}
*/
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':
    position += 0.1f;
        if(position > 1.0)
    position = -1.2f;

    position += body_speed;

	glutPostRedisplay();
    break;
case 'a':
    position += -0.1f;
        if(position < -1.0)
    position = 1.2f;

    position += body_speed;

	glutPostRedisplay();
    break;


glutPostRedisplay();

case 'f':
//if(bullet_position == position)
//{
      bullet_speed = 0.1f;


	glutPostRedisplay();

	        /*if(-0.01f < bullet_position_x > 0.01f)
            {
                    bullet_position_x = 0.0f;

                    bullet_position_x += bullet_speed_x;
	        }
*/
    if(bullet_position_x != position)
    {
       bullet_position_x == position;
    }

	glutPostRedisplay();
    break;
//}



	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
glPushMatrix();
        glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
//body
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.1f, -0.8f);
      glVertex2f( 0.1f, -0.8f);
      glVertex2f( 0.1f,  -1.0f);
      glVertex2f(-0.1f,  -1.0f);
   glEnd();

//left
    glBegin(GL_QUADS);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f(-0.15f, -0.9f);
      glVertex2f( -0.1f, -0.9f);
      glVertex2f( -0.1f,  -0.95f);
      glVertex2f(-0.15f,  -0.95f);
   glEnd();

//right
       glBegin(GL_QUADS);
      glVertex2f(0.15f, -0.9f);
      glVertex2f( 0.1f, -0.9f);
      glVertex2f( 0.1f,  -0.95f);
      glVertex2f(0.15f,  -0.95f);
   glEnd();

//bullet

glTranslatef(0.0f,bullet_position, 0.0f);
glTranslatef(bullet_position_x,0.0f, 0.0f);
   glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(-0.01f,-0.6f);
   glVertex2f(0.01f, -0.6f);
   glVertex2f(0.01f, -0.8f);
   glVertex2f(-0.01f, -0.8f);
   glEnd();

//bullet head
   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(0.01f,-0.6f);
   glVertex2f(0.0f, -0.56f);
   glVertex2f(-0.01f, -0.6f);
   glEnd();
    glPopMatrix();


//left enemy
glPushMatrix();
glTranslatef(0.0f,left_enemy_position, 0.0f);
glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 1.0f, 1.0f);
   glVertex2f(-0.6f,0.7f);
   glVertex2f(-0.7f, 0.9f);
   glVertex2f(-0.5f, 0.9f);
   glEnd();
glPopMatrix();


//right enemy
glPushMatrix();
glTranslatef(0.0f,right_enemy_position, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 1.0f);
   glVertex2f(0.6f,0.7f);
   glVertex2f(0.7f, 0.9f);
   glVertex2f(0.5f, 0.9f);
   glEnd();
glPopMatrix();

//center enemy
glPushMatrix();
glTranslatef(0.0f,center_enemy_position, 0.0f);
    glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 1.0f, 0.0f);
   glVertex2f(0.0f,0.7f);
   glVertex2f(0.1f, 0.9f);
   glVertex2f(-0.1f, 0.9f);
   glEnd();
glPopMatrix();
  glFlush();


}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Rocket Launcher");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
//glutMouseFunc(handleMouse);
     glutTimerFunc(1000, update, 0);
    glutTimerFunc(1000, update_left_enemy, 0);
    glutTimerFunc(1000, update_right_enemy, 0);
   glutTimerFunc(1000, update_center_enemy, 0);
   glutMainLoop();
   return 0;
}
