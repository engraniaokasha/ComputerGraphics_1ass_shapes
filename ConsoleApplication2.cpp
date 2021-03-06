#include "pch.h"
#include <iostream>
#include <stdlib.h>

#ifdef __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

//Called when a key is pressed
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	case 27: //Escape key
		exit(0);
	}
}

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);	 //Enable color
	glClearColor(0.1f, 0.1f, 0.3f, 1.0);  //Change the background 
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);   //Switch to the drawing perspective
	glLoadIdentity();             //Reset the drawing perspective
	glPushMatrix();                              
	glTranslatef(0.0f, 0.0f, -15.0f);  
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.7f); 
	glVertex3f(-5.5f, 0.5f, 0.0f);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 2.0f, 0.0f);
	glVertex3f(-4.5f, 3.5f, 0.0f);
	glVertex3f(-3.0f, 2.0f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-3.5f, 0.5f, 0.0f);
	glEnd();
	glPopMatrix();
	 
	//SECOND SHAPE
	glPushMatrix();                         
	glTranslatef(3.5f, 0.0f, -15.0f); 
	glBegin(GL_POLYGON);
	glColor3f(5.0f, 5.0f, 0.7f);
	glVertex3f(-5.5f, 0.5f, 0.0f);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 2.0f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-5.5f, 3.25f, 0.0f);
	glColor3f(5.0f, 5.0f, 0.7f);
	glVertex3f(-3.5f, 3.25f, 0.0f);
	glColor3f(0.6f, 0.0f, 0.7f);
	glVertex3f(-3.0f, 2.0f, 0.0f);
	glColor3f(5.0f, 5.0f, 0.7f);
	glVertex3f(-3.5f, 0.5f, 0.0f);
	glEnd();
	glPopMatrix();


	//third shape
	glPushMatrix();
	glTranslatef(7.0f, 0.0f, -15.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-5.25f, 0.5f, 0.0f);
	glVertex3f(-6.0f, 1.25f, 0.0f);
	glColor3f(0.7f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 2.25f, 0.0f);
	glVertex3f(-5.25f, 3.25f, 0.0f);
	glVertex3f(-3.5f, 3.25f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-2.75f, 2.25f, 0.0f);
	glVertex3f(-2.75f, 1.25f, 0.0f);
	glVertex3f(-3.5f, 0.5f, 0.0f);
	glEnd();
	glPopMatrix();

	//fourth shape
	glPushMatrix();                           
	glTranslatef(0.0f, -3.5f, -15.0f); 
	glBegin(GL_POLYGON);
	glVertex3f(-5.25f, 0.25f, 0.0f);
	glColor3f(0.7f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 1.25f, 0.0f);
	glVertex3f(-6.0f, 2.25f, 0.0f);
	glColor3f(1.0f, 1.0f, 0.7f);
	glVertex3f(-4.4f, 3.25f, 0.0f);
	glVertex3f(-2.75f, 2.25f, 0.0f);
	glColor3f(0.7f, 0.0f, 0.7f);
	glVertex3f(-2.75f, 1.25f, 0.0f);
	glVertex3f(-3.5f, 0.25f, 0.0f);
	glEnd();
	glPopMatrix();

	//fifth shape
	glPushMatrix();
	glTranslatef(3.75f, -3.5f, -15.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-5.0f, 0.25f, 0.0f);
	glVertex3f(-5.8f, 1.0f, 0.0f);
	glColor3f(0.7f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 1.5f, 0.0f);
	glVertex3f(-5.9f, 2.5f, 0.0f);
	glColor3f(1.0f, 1.0f, 0.7f);
	glVertex3f(-5.0f, 3.25f, 0.0f);
	glVertex3f(-3.75f, 3.25f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-2.75f, 2.5f, 0.0f);
	glVertex3f(-2.75f, 1.5f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-3.0f, 1.0f, 0.0f);
    glVertex3f(-3.75f, 0.25f, 0.0f);
	glEnd();
	glPopMatrix();


   
	glPushMatrix();
	glTranslatef(7.5f, -3.5f, -15.0f);
	glBegin(GL_POLYGON);
	glVertex3f(-5.25f, 0.25f, 0.0f);
	glVertex3f(-5.8f, 1.0f, 0.0f);
	glColor3f(0.7f, 0.0f, 0.7f);
	glVertex3f(-6.0f, 1.5f, 0.0f);
	glVertex3f(-5.5f, 2.5f, 0.0f);
	glColor3f(1.0f, 1.0f, 0.7f);
	glVertex3f(-4.35f, 3.25f, 0.0f);
	glColor3f(0.3f, 0.5f, 0.7f);
	glVertex3f(-3.0f, 2.5f, 0.0f);
	glVertex3f(-2.75f, 1.5f, 0.0f);
	glVertex3f(-2.9f, 1.0f, 0.0f);
	glVertex3f(-3.5f, 0.25f, 0.0f);
	glEnd();
	glPopMatrix();

	glutPostRedisplay();              //Tell GLUT that the display has changed
	glutTimerFunc(25, 0, 0);          //Tell GLUT to call update again in 25 milliseconds
	glutSwapBuffers();
}


int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(400, 400);

	//Create the window
	glutCreateWindow("different shapes");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);
	glutKeyboardFunc(handleKeypress);
	glutReshapeFunc(handleResize);

	glutMainLoop();
	return 0;
}