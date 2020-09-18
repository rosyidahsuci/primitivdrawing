#include <GL/glut.h>
void userdraw(void);
void drawDot(float x, float y)
{
	glBegin(GL_POINTS);
	glVertex2f(250, 50);
	glEnd();
	glPointSize(7);
}
void setColor(float red, float green, float blue)
{
	glColor3f(red, green, blue);
}
void userdraw()
{
	glPointSize(8);
	setColor(1., 0., 1.);
	for (int i = 0; i < 20; i += 5)
	{
		for (int j = 0; j < 20; j += 5)
		{
			drawDot(10.0 + i, 10.0 + j);
		}
	}
}

void display(void)
{	//clear screen
	glClear(GL_COLOR_BUFFER_BIT);
	userdraw();
	glutSwapBuffers();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Grafika Komputer - Rosyidah Suci");
	glClearColor(1.0, 1.0, 1.0, 0.0);
	gluOrtho2D(0., 640., -240., 240.);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
