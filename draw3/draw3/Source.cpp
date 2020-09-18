#include <GL/glut.h>
void titik_garis(void) {
	glColor3f(1.0, 0.0, 1.0);
	glPointSize(9);
	glBegin(GL_POINTS);
	glVertex3f(15.0, 15.0, 0.0);
	glVertex3f(-15.0, 15.0, 0.0);
	glVertex3f(-15.0, -15.0, 0.0);
	glVertex3f(15.0, -15.0, 0.0);
	glEnd();
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_LINES);
	glVertex3f(25.0, 25.0, 0.0);
	glVertex3f(175.0, 175.0, 0.0);
	glEnd();
	glFlush();
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	titik_garis();
}
void Initialize(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-200, 200, -200, 200);
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(200, 200);
	glutInitWindowSize(400, 400);
	glutCreateWindow("2103181045 Rosyidah Amini Suci");
	Initialize();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

