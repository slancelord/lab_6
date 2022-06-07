#include <iostream>
#include "glut.h"
#include "windows.h"


void cr(int r, int n) {
	glColor3f(0.13, 0.36, 0.56);
	glBegin(GL_LINE_LOOP);
	for (int ii = 0; ii < n; ii++) {
		float theta = 2.0f * 3.1415926f * float(ii) / float(n);
		float x = r * cosf(theta);
		float y = r * sinf(theta);
		glVertex2f(x, y);
	}
	glEnd();

	
	
	for (int i = 0; i < 60; i++) {
		glPushMatrix();

		glRotated(-(360 / 60.) * i, 0, 0, 1);
		glBegin(GL_TRIANGLES);
			glVertex2f(-3, 257);
			glVertex2f(3, 257);
			glVertex2f(-3, 242);

			glVertex2f(-3, 242);
			glVertex2f(3, 257);
			glVertex2f(3, 242);
		glEnd();

		glPopMatrix();
	}
	glColor3f(0.15, 0.19, 0.20);
	for (int i = 0; i < 24; i++) {
		glPushMatrix();

		glRotated(-(360 / 12.) * i, 0, 0, 1);
		glBegin(GL_TRIANGLES);
			glVertex2f(-5, 257);
			glVertex2f(5, 257);
			glVertex2f(-5, 237);

			glVertex2f(-5, 237);
			glVertex2f(5, 257);
			glVertex2f(5, 237);
		glEnd();

		glPopMatrix();
	}

	//XII
	glColor3f(0, 0, 0);
	glPushMatrix();
//  \    ;
	glTranslatef(0, 190, 0);
	glRotated(25, 0, 0, 1);
	glTranslatef(0, -190, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, 235);
		glVertex2f(2, 235);
		glVertex2f(-2, 190);

		glVertex2f(-2, 190);
		glVertex2f(2, 235);
		glVertex2f(2, 190);
	glEnd();

	glPopMatrix();

	glPushMatrix();
//  /    ;
	glTranslated(-20, 0, 0);

	glTranslatef(0, 190, 0);
	glRotated(-25, 0, 0, 1);
	glTranslatef(0, -190, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, 235);
		glVertex2f(2, 235);
		glVertex2f(-2, 190);

		glVertex2f(-2, 190);
		glVertex2f(2, 235);
		glVertex2f(2, 190);
	glEnd();

	glPopMatrix();
	// I
	glPushMatrix();
	glTranslatef(+4, -1, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, 232);
		glVertex2f(2, 232);
		glVertex2f(-2, 190);

		glVertex2f(-2, 190);
		glVertex2f(2, 232);
		glVertex2f(2, 190);
	glEnd();

	glPopMatrix();

	// I
	glPushMatrix();
	glTranslatef(+10, -1, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, 232);
		glVertex2f(2, 232);
		glVertex2f(-2, 190);

		glVertex2f(-2, 190);
		glVertex2f(2, 232);
		glVertex2f(2, 190);
	glEnd();

	glPopMatrix();

	// III
	glPopMatrix();
	// I
	glPushMatrix();

	glTranslated(20, -21, 0);

	glTranslatef(190, 0, 0);
	glRotated(90, 0, 0, 1);
	glTranslatef(-190, 0, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(232,-2);
		glVertex2f(232, 2);
		glVertex2f(190,-2);

		glVertex2f(190, -2);
		glVertex2f(232, 2);
		glVertex2f(190, 2);
	glEnd();

	glPopMatrix();

	// I
	glPushMatrix();

	glTranslated(28, -21, 0);

	glTranslatef(190, 0, 0);
	glRotated(90, 0, 0, 1);
	glTranslatef(-190, 0, 0);


	glBegin(GL_TRIANGLES);
		glVertex2f(232, -2);
		glVertex2f(232, 2);
		glVertex2f(190, -2);

		glVertex2f(190, -2);
		glVertex2f(232, 2);
		glVertex2f(190, 2);
	glEnd();

	glPopMatrix();

	// I
	glPushMatrix();

	glTranslated(36, -21, 0);

	glTranslatef(190, 0, 0);
	glRotated(90, 0, 0, 1);
	glTranslatef(-190, 0, 0);


	glBegin(GL_TRIANGLES);
		glVertex2f(232, -2);
		glVertex2f(232, 2);
		glVertex2f(190, -2);

		glVertex2f(190, -2);
		glVertex2f(232, 2);
		glVertex2f(190, 2);
	glEnd();

	glPopMatrix();


	// VI
	//  /    ;
	glPushMatrix();
	glTranslated(6, 0, 0);

	glTranslatef(0, -190, 0);
	glRotated(-15, 0, 0, 1);
	glTranslatef(0, 190, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, -235);
		glVertex2f(2, -235);
		glVertex2f(-2, -190);

		glVertex2f(-2, -190);
		glVertex2f(2, -235);
		glVertex2f(2, -190);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	//  \    ;

	glTranslated(-18, 0, 0);

	glTranslatef(0, -190, 0);
	glRotated(15, 0, 0, 1);
	glTranslatef(0, 190, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, -235);
		glVertex2f(2, -235);
		glVertex2f(-2, -190);

		glVertex2f(-2, -190);
		glVertex2f(2, -235);
		glVertex2f(2, -190);
	glEnd();

	glPopMatrix();

	// I
	glPushMatrix();

	glTranslated(10, 0, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, -235);
		glVertex2f(2, -235);
		glVertex2f(-2, -190);

		glVertex2f(-2, -190);
		glVertex2f(2, -235);
		glVertex2f(2, -190);
	glEnd();

	glPopMatrix();

	// IX
	//  \    ;
	glPushMatrix();

	glTranslated(-27, -22, 0);
	
	glTranslatef(-190, 0, 0);
	glRotated(-115, 0, 0, 1);
	glTranslatef(190, 0, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-238, -2);
		glVertex2f(-238, 2);
		glVertex2f(-190, -2);

		glVertex2f(-190, -2);
		glVertex2f(-238, 2);
		glVertex2f(-190, 2);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	//  /    ;
	glTranslated(-27, 21, 0);

	glTranslatef(-190, 0, 0);
	glRotated(115, 0, 0, 1);
	glTranslatef(190, 0, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-238, -2);
		glVertex2f(-238, 2);
		glVertex2f(-190, -2);

		glVertex2f(-190, -2);
		glVertex2f(-238, 2);
		glVertex2f(-190, 2);
	glEnd();

	glPopMatrix();

	glPushMatrix();

	glTranslated(-35, 21, 0);

	glTranslatef(-190, 0, 0);
	glRotated(90, 0, 0, 1);
	glTranslatef(190, 0, 0);

	glBegin(GL_TRIANGLES);
		glVertex2f(-232, -2);
		glVertex2f(-232, 2);
		glVertex2f(-190, -2);

		glVertex2f(-190, -2);
		glVertex2f(-232, 2);
		glVertex2f(-190, 2);
	glEnd();

	glPopMatrix();
}

void drawWatch(int s, int m, int h) {
	glClear(GL_COLOR_BUFFER_BIT);
	cr(255, 2000);
	cr(254, 2000);
	cr(253, 2000);

	glColor3f(0, 0, 0);

	// ЧАСЫ
	glPushMatrix();
	glRotated((-(((h*60) + m) * 60 + s)/120)%360, 0, 0, 1);

	glBegin(GL_TRIANGLES);
		glVertex2f(-5, 0);
		glVertex2f(5, 0);
		glVertex2f(-5, 150);

		glVertex2f(-5, 150);
		glVertex2f(5, 150);
		glVertex2f(5, 0);
	glEnd();

	glPopMatrix();

	// МИНУТЫ
	glPushMatrix();
	glRotated(-(360 / 3600.) * (h * 60 * 60 + m * 60 + s), 0, 0, 1);

	glBegin(GL_TRIANGLES);
		glVertex2f(-4, 0);
		glVertex2f(4, 0);
		glVertex2f(-4, 215);

		glVertex2f(-4, 215);
		glVertex2f(4, 215);
		glVertex2f(4, 0);
	glEnd();

	glPopMatrix();

	glColor3f(1, 0, 0);
	// СЕКУНДЫ
	glPushMatrix();
	glRotated(-(360 / 60.) * s, 0, 0, 1);

	glBegin(GL_TRIANGLES);
		glVertex2f(-2, -25);
		glVertex2f(2, -25);
		glVertex2f(-2, 241);

		glVertex2f(-2, 241);
		glVertex2f(2, 241);
		glVertex2f(2, -25);
	glEnd();

	glPopMatrix();


	glFlush();
}

void myDisplay() {
	SYSTEMTIME t;
	GetLocalTime(&t);
	int seconds = t.wSecond;
	int minutes = t.wMinute;
	int hours = t.wHour;
	drawWatch(seconds, minutes, hours);
	std::cout << hours << ":" << minutes << ":" << seconds << "\n";
	// Отправляем на прорисовку
}


void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(1000, timer, 0);
}

void myInit() {
	glClearColor(1, 1, 1, 0);
	//задание цвета фона (белый)
	glColor3f(0, 0, 0);
	// задание цвета рисования (черный)
	glPointSize(1);
	// размер точки
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-320, 320, -320, 320);
	// задание окнной системы координат (Слева снизу начало)

}

void main(int argc, char** argv) {
	glutInit(&argc, argv);
	//инициализируем glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//устанавливаем режим дисплея
	glutInitWindowSize(640, 640);
	//устанавливаем размер окна
	glutCreateWindow("OpenGL example");
	//открываем окно на экране

	glutDisplayFunc(myDisplay);
	glutTimerFunc(1000, timer, 0);

	//регистрируем функцию обратного вызова
	myInit();

	glutMainLoop();
	//входим в бесконечный цикл

}

