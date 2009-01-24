/*
 *  main.cpp
 *  ÇPROJECTNAMEÈ
 *
 *  Created by ÇFULLUSERNAMEÈ on ÇDATEÈ.
 *  Copyright ÇYEARÈ ÇORGANIZATIONNAMEÈ. All rights reserved.
 *
 */

#include <stdlib.h>

#if __APPLE__
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

static int gMainWindow = 0;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	// insert display code here...
	
	glutSwapBuffers();
}

void idle(void)
{
	// make sure the main window is active
	if (glutGetWindow() != gMainWindow)
		glutSetWindow(gMainWindow);
	
	glutPostRedisplay();
}

void keyboard(unsigned char c, int x, int y)
{
	switch (c)
	{
		case 27:  /* Esc key */
			exit(0);
			break;
			
		default:
			break;
	}
}

int main(int argc, char** argv)
{
	glutInitWindowSize(500, 500);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInit(&argc, argv);
	
	gMainWindow = glutCreateWindow("ÇPROJECTNAMEÈ");
	
	glutDisplayFunc(display);
	glutIdleFunc(idle);
	glutKeyboardFunc(keyboard);
	
	glClearColor(0.1, 0.3, 0.6, 0.0);  /* Blue background */
	
	glutMainLoop();
	return 0;
}
