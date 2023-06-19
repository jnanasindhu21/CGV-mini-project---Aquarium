#include<stdio.h>
#include<GL/glut.h>
#include<math.h>


void init()
{
	glMatrixMode(GL_PROJECTION_MATRIX);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
}

float x = -10.0;
float x1 = -10.0-2.0;
float x2 = -10.0-7.0;

float xk = -14.0;			//keyboard
float xk2 = -14.0;			//keyboard fish 2
float ax = 10.0;	//ax = aquarium x		//10.0 value has no significance here check y???
float y = 0.3;

float fy = 2.0;		//food y-axis	//top to bottom

void display()
{
	glClearColor(0.0, 0.6, 0.8, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);


	//bubbles
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = y * cos(i);
		float y1 = y * sin(i);
		glVertex2f(x1 - 9.7, y1 + x);
	}
	glEnd();

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.3 * cos(i);
		float y1 = 0.3 * sin(i);
		glVertex2f(x1 - 9.6, y1 + x - 1.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 - 8.2, y1 + x - 2.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 - 9.2, y1 + x - 2.0);
	}
	glEnd();


	//left 2nd
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = y * cos(i);
		float y1 = y * sin(i);
		glVertex2f(x1 - 9.3, y1 + x - 10.0);
	}
	glEnd();

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.3 * cos(i);
		float y1 = 0.3 * sin(i);
		glVertex2f(x1 - 8.6, y1 + x - 1.0 - 10.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 - 8.2, y1 + x - 2.0 - 10.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 - 9.4, y1 + x - 2.0 - 10.0);
	}
	glEnd();


	//right 1st

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = y * cos(i);
		float y1 = y * sin(i);
		glVertex2f(x1 + 9.5, y1 + ax);
	}
	glEnd();

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.3 * cos(i);
		float y1 = 0.3 * sin(i);
		glVertex2f(x1 + 9.3, y1 + ax - 1.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 + 8.2, y1 + ax - 2.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 + 9.2, y1 + ax - 2.0);
	}
	glEnd();

	//right 2nd
	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = y * cos(i);
		float y1 = y * sin(i);
		glVertex2f(x1 + 9.3, y1 + x);
	}
	glEnd();

	glPointSize(2);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.3 * cos(i);
		float y1 = 0.3 * sin(i);
		glVertex2f(x1 + 8.6, y1 + x - 1.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 + 8.2, y1 + x - 2.0);
	}
	glEnd();

	glPointSize(1);
	glBegin(GL_POINTS);
	glColor3f(0.0, 1.0, 1.0);
	for (float i = 0; i < 2 * 3.14; i += 0.001)
	{
		float x1 = 0.2 * cos(i);
		float y1 = 0.2 * sin(i);
		glVertex2f(x1 + 9.4, y1 + x - 2.0);
	}
	glEnd();


	//fish
	/*
	glColor3f(0.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x+1.0, 0.0);
	glVertex2f(x + 5.0, -1.3);
	glVertex2f(x + 6.0, 0.0);
	glVertex2f(x + 5.0, 1.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(x+1.0, 0.0);
	glVertex2f(x, 1.0);
	glVertex2f(x, -1.0);
	glEnd();
	*/

	//color fish1
	glBegin(GL_POLYGON);//body
	glVertex2f(100 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 125 / 59.9+ 2.5);
	glVertex2f(150 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 75 / 59.9 + 2.5);
	glVertex2f(100 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glEnd();


	glColor3f(1.0, 0.0, 0.9);
	glBegin(GL_LINES);//body
	glVertex2f(147 / 49.9 - x2 + 2.0, 105 / 59.9+ 2.5);
	glVertex2f(147 / 49.9 - x2 + 2.0, 95 / 59.9 + 2.5);
	glEnd();
	glColor3f(1.0, 0.0, 0.9);
	glBegin(GL_LINES);//body
	glVertex2f(135 / 49.9 - x2 + 2.0, 115 / 59.9 + 2.5);
	glVertex2f(135 / 49.9 - x2 + 2.0, 85 / 59.9  + 2.5);
	glEnd();
	glColor3f(1.0, 0.0, 0.9);
	glBegin(GL_LINES);//body
	glVertex2f(127 / 49.9 - x2 + 2.0, 125 / 59.9 + 2.5);
	glVertex2f(127 / 49.9 - x2 + 2.0, 75 / 59.9  + 2.5);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(1.0, 0.0, 0.9);
	glVertex2f(125 / 49.9 - x2 + 2.0, 125 / 59.9 + 2.5);
	glVertex2f(120 / 49.9 - x2 + 2.0, 160 / 59.9 + 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 140 / 59.9 + 2.5);
	glVertex2f(130 / 49.9 - x2 + 2.0, 160 / 59.9 + 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 125 / 59.9 + 2.5);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(1.0, 0.0, 0.9);
	glVertex2f(125 / 49.9 - x2 + 2.0, 75 / 59.9 + 2.5);
	glVertex2f(120 / 49.9 - x2 + 2.0, 45 / 59.9 + 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 60 / 59.9 + 2.5);
	glVertex2f(130 / 49.9 - x2 + 2.0, 45 / 59.9 + 2.5);
	glVertex2f(125 / 49.9 - x2 + 2.0, 75 / 59.9 + 2.5);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(1.0, 0.0, 0.9);
	glVertex2f(150 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glVertex2f(175 / 49.9 - x2 + 2.0, 125 / 59.9+ 2.5);
	glVertex2f(175 / 49.9 - x2 + 2.0, 75 / 59.9 + 2.5);
	glVertex2f(150 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glEnd();
	glColor3f(0.2, 0.0, 0.6);
	glBegin(GL_LINES);//body
	glVertex2f(165 / 49.9 - x2 + 2.0, 95 / 59.9 + 2.5);
	glVertex2f(172.5 / 49.9 - x2 + 2.0, 102.5 / 59.9 + 2.5);
	glEnd();
	glColor3f(0.3, 0.0, 0.7);
	glBegin(GL_LINES);//body
	glVertex2f(162.5 / 49.9 - x2 + 2.0, 100 / 59.9+ 2.5);
	glVertex2f(172.5 / 49.9 - x2 + 2.0, 110 / 59.9+ 2.5);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(115 / 49.9 - x2 + 2.0, 105 / 59.9 + 2.5);
	glEnd();


	//color fish2
	glColor3f(1.0, 0.0, 0.9);
	glBegin(GL_POLYGON);//body
	glVertex2f(100 / 49.9 - x2, 100 / 59.9 - 5.0);
	glVertex2f(125 / 49.9 - x2, 125 / 59.9 - 5.0);
	glVertex2f(150 / 49.9 - x2, 100 / 59.9 - 5.0);
	glVertex2f(125 / 49.9 - x2, 75 / 59.9 -  5.0);
	glVertex2f(100 / 49.9 - x2, 100 / 59.9 - 5.0);
	glEnd();

	glFlush();

	glColor3f(0.0, 0.0, 0.9);
	glBegin(GL_LINES);//body
	glVertex2f(147 / 49.9 - x2, 105 / 59.9 - 5.0);
	glVertex2f(147 / 49.9 - x2, 95 / 59.9 - 5.0);
	glEnd();
	glColor3f(0.0, 0.0, 0.9);
	glBegin(GL_LINES);//body
	glVertex2f(135 / 49.9 - x2, 115 / 59.9 - 5.0);
	glVertex2f(135 / 49.9 - x2, 85 / 59.9 - 5.0);
	glEnd();
	glColor3f(1.0, 0.0, 0.5);
	glBegin(GL_LINES);//body
	glVertex2f(127 / 49.9 - x2, 125 / 59.9 - 5.0);
	glVertex2f(127 / 49.9 - x2, 75 / 59.9 - 5.0);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(1.0, 0.0, 0.5);
	glVertex2f(125 / 49.9 - x2, 125 / 59.9 -5.0);
	glVertex2f(120 / 49.9 - x2, 160 / 59.9 -5.0);
	glVertex2f(125 / 49.9 - x2, 140 / 59.9 -5.0);
	glVertex2f(130 / 49.9 - x2, 160 / 59.9 -5.0);
	glVertex2f(125 / 49.9 - x2, 125 / 59.9 -5.0);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(1.0, 0.0, 0.5);
	glVertex2f(125 / 49.9 - x2, 75 / 59.9 -5.0);
	glVertex2f(120 / 49.9 - x2, 45 / 59.9 -5.0);
	glVertex2f(125 / 49.9 - x2, 60 / 59.9 -5.0);
	glVertex2f(130 / 49.9 - x2, 45 / 59.9 -5.0);
	glVertex2f(125 / 49.9 - x2, 75 / 59.9 -5.0);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(1.0, 0.0, 0.3);
	glVertex2f(150 / 49.9 - x2, 100 / 59.9 - 5.0);
	glVertex2f(175 / 49.9 - x2, 125 / 59.9 - 5.0);
	glVertex2f(175 / 49.9 - x2, 75 / 59.9 - 5.0);
	glVertex2f(150 / 49.9 - x2, 100 / 59.9 - 5.0);
	glEnd();
	glColor3f(0.5, 0.0, 0.6);
	glBegin(GL_LINES);//body
	glVertex2f(165 / 49.9 - x2, 95 / 59.9 - 5.0);
	glVertex2f(172.5 / 49.9 - x2, 102.5 / 59.9 - 5.0);
	glEnd();
	glColor3f(0.5, 0.0, 0.6);
	glBegin(GL_LINES);//body
	glVertex2f(162.5 / 49.9 - x2, 100 / 59.9 - 5.0);
	glVertex2f(172.5 / 49.9 - x2, 110 / 59.9 - 5.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(115 / 49.9 - x2, 105 / 59.9 - 5.0);
	glEnd();



	//golden fish1

	glColor3f(0.9, 0.8, 0.2);
	glBegin(GL_POLYGON);//body
	glVertex2f(75 / 49.9 + x2 - 3.0, 225 / 59.9 + 2.0);
	glVertex2f(100/ 49.9 + x2 - 3.0, 250 / 59.9 + 2.0);
	glVertex2f(125/ 49.9 + x2 - 3.0, 225 / 59.9 + 2.0);
	glVertex2f(100/ 49.9 + x2 - 3.0, 200 / 59.9 + 2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(80/ 49.9 + x2 - 3.0, 230 / 59.9 + 2.0);
	glVertex2f(80/ 49.9 + x2 - 3.0, 220 / 59.9 + 2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(90/ 49.9 + x2 - 3.0, 240 / 59.9 + 2.0);
	glVertex2f(90/ 49.9 + x2 - 3.0, 210 / 59.9 + 2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(100/ 49.9 + x2 - 3.0, 250 / 59.9 + 2.0);
	glVertex2f(100/ 49.9 + x2 - 3.0, 200 / 59.9 + 2.0);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(100 / 49.9 +x2 - 3.0, 200 / 59.9+ 2.0);
	glVertex2f(80 / 49.9 + x2 - 3.0, 175 / 59.9 + 2.0);
	glVertex2f(90 / 49.9 + x2 - 3.0, 210 / 59.9 + 2.0);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(75/ 49.9 + x2 - 3.0, 225 / 59.9 + 2.0);
	glVertex2f(50/ 49.9 + x2 - 3.0, 250 / 59.9 + 2.0);
	glVertex2f(50/ 49.9 + x2 - 3.0, 200 / 59.9 + 2.0);
	glVertex2f(75/ 49.9 + x2 - 3.0, 225 / 59.9 + 2.0);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(100 / 49.9 +x2 - 3.0, 250 / 59.9 + 2.0);
	glVertex2f(80 / 49.9 + x2 - 3.0, 175 / 59.9 + 2.0);
	glVertex2f(90 / 49.9 + x2 - 3.0, 240 / 59.9 + 2.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(110 / 49.9 + x2 - 3.0, 230 / 59.9 + 2.0);
	glEnd();


	//golden fish2

	glColor3f(0.9, 0.8, 0.2);
	glBegin(GL_POLYGON);//body
	glVertex2f(75 / 49.9 + x2,  225 / 59.9 -2.0);
	glVertex2f(100 / 49.9 + x2, 250 / 59.9 -2.0);
	glVertex2f(125 / 49.9 + x2, 225 / 59.9 -2.0);
	glVertex2f(100 / 49.9 + x2, 200 / 59.9 -2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(80 / 49.9 + x2, 230 / 59.9 - 2.0);
	glVertex2f(80 / 49.9 + x2, 220 / 59.9 - 2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(90 / 49.9 + x2, 240 / 59.9 - 2.0);
	glVertex2f(90 / 49.9 + x2, 210 / 59.9 - 2.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(100 / 49.9 + x2, 250 / 59.9 - 2.0);
	glVertex2f(100 / 49.9 + x2, 200 / 59.9 - 2.0);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(100 / 49.9 + x2, 200 / 59.9 - 2.0);
	glVertex2f(80 / 49.9 + x2, 175 / 59.9  - 2.0);
	glVertex2f(90 / 49.9 + x2, 210 / 59.9  - 2.0);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(75 / 49.9 + x2, 225 / 59.9 - 2.0);
	glVertex2f(50 / 49.9 + x2, 250 / 59.9 - 2.0);
	glVertex2f(50 / 49.9 + x2, 200 / 59.9 - 2.0);
	glVertex2f(75 / 49.9 + x2, 225 / 59.9 - 2.0);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(0.9, 0.0, 0.0);
	glVertex2f(100 / 49.9 + x2, 250 / 59.9 - 2.0);
	glVertex2f(80 / 49.9 + x2, 175 / 59.9  - 2.0);
	glVertex2f(90 / 49.9 + x2, 240 / 59.9  - 2.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(110 / 49.9 + x2, 230 / 59.9 - 2.0);
	glEnd();


	//keyboard fish
	//golden fish1

	glColor4f(0.8, 0.6, 1.0, 0.5);
	glBegin(GL_POLYGON);//body
	glVertex2f(75 / 49.9 + xk, 225 / 59.9 - 4.0);
	glVertex2f(100 / 49.9 +xk, 250 / 59.9 - 4.0);
	glVertex2f(125 / 49.9 +xk, 225 / 59.9 - 4.0);
	glVertex2f(100 / 49.9 +xk, 200 / 59.9 - 4.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(80 / 49.9 + xk, 230 / 59.9 - 4.0);
	glVertex2f(80 / 49.9 + xk, 220 / 59.9 - 4.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(90 / 49.9 + xk, 240 / 59.9 - 4.0);
	glVertex2f(90 / 49.9 + xk, 210 / 59.9 - 4.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(100 / 49.9 + xk, 250 / 59.9 - 4.0);
	glVertex2f(100 / 49.9 + xk, 200 / 59.9 - 4.0);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(0.9, 0.2, 0.4);
	glVertex2f(100 / 49.9 + xk, 200 / 59.9 - 4.0);
	glVertex2f(80 / 49.9 + xk, 175 / 59.9 - 4.0);
	glVertex2f(90 / 49.9 + xk, 210 / 59.9 - 4.0);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(0.9, 0.2, 0.5);
	glVertex2f(75 / 49.9 + xk, 225 / 59.9 - 4.0);
	glVertex2f(50 / 49.9 + xk, 250 / 59.9 - 4.0);
	glVertex2f(50 / 49.9 + xk, 200 / 59.9 - 4.0);
	glVertex2f(75 / 49.9 + xk, 225 / 59.9 - 4.0);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(0.9, 0.2, 0.4);
	glVertex2f(100 / 49.9 + xk, 250 / 59.9 - 4.0);
	glVertex2f(80 / 49.9 + xk, 175 / 59.9 - 4.0);
	glVertex2f(90 / 49.9 + xk, 240 / 59.9 - 4.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(110 / 49.9 + xk, 230 / 59.9 - 4.0);
	glEnd();



	//keyboard fish
	//golden fish2

	glColor3f(0.0, 0.0, 0.9);
	glBegin(GL_POLYGON);//body
	glVertex2f(75 / 49.9 +  xk2, 225 / 59.9 - 10.0);
	glVertex2f(100 / 49.9 + xk2, 250 / 59.9 - 10.0);
	glVertex2f(125 / 49.9 + xk2, 225 / 59.9 - 10.0);
	glVertex2f(100 / 49.9 + xk2, 200 / 59.9 - 10.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(80 / 49.9 + xk2, 230 / 59.9 - 10.0);
	glVertex2f(80 / 49.9 + xk2, 220 / 59.9 - 10.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(90 / 49.9 + xk2, 240 / 59.9 - 10.0);
	glVertex2f(90 / 49.9 + xk2, 210 / 59.9 - 10.0);
	glEnd();
	glColor3f(0.9, 0.0, 0.0);
	glBegin(GL_LINES);//body
	glVertex2f(100 / 49.9 + xk2, 250 / 59.9 - 10.0);
	glVertex2f(100 / 49.9 + xk2, 200 / 59.9 - 10.0);
	glEnd();
	glBegin(GL_POLYGON);//fins1
	glColor3f(0.9, 0.0, 0.9);
	glVertex2f(100 / 49.9 + xk2, 200 / 59.9 -10.0);
	glVertex2f(80 / 49.9 + xk2, 175 / 59.9 - 10.0);
	glVertex2f(90 / 49.9 + xk2, 210 / 59.9 - 10.0);
	glEnd();
	glBegin(GL_POLYGON);//tail
	glColor3f(0.9, 0.0, 0.9);
	glVertex2f(75 / 49.9 + xk2, 225 / 59.9 - 10.0);
	glVertex2f(50 / 49.9 + xk2, 250 / 59.9 - 10.0);
	glVertex2f(50 / 49.9 + xk2, 200 / 59.9 - 10.0);
	glVertex2f(75 / 49.9 + xk2, 225 / 59.9 - 10.0);
	glEnd();
	glBegin(GL_POLYGON);//fin2
	glColor3f(0.9, 0.0, 0.9);
	glVertex2f(100 / 49.9 +xk2, 250 / 59.9 - 10.0);
	glVertex2f(80 / 49.9 + xk2, 175 / 59.9 - 10.0);
	glVertex2f(90 / 49.9 + xk2, 240 / 59.9 - 10.0);
	glEnd();
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(110 / 49.9 + xk2, 230 / 59.9 - 10.0);
	glEnd();


	//food
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(8);
	glBegin(GL_POINTS);
	glVertex2f(6.0, 9.0 + fy);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(5.0, 10.0 + fy);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(4.0, 9.5 + fy);
	glEnd();
	glBegin(GL_POINTS);
	glVertex2f(5.5, 8.5 + fy);
	glEnd();

/*
	//fish2
	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x1 + 0.2, 0.0);
	glVertex2f(x1 + 1.2, -0.3);
	glVertex2f(x1 + 1.4, 0.0);
	glVertex2f(x1 + 1.2, 0.3);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(x1 + 0.2, 0.0);
	glVertex2f(x1, 0.15);
	glVertex2f(x1 +0.1 , 0.15);
	glVertex2f(x1, -0.15);
	glEnd();

	//fish2							-7.0 in x to start late
	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x2 + 0.2 , 0.0);
	glVertex2f(x2 + 1.2 , -0.3);
	glVertex2f(x2 + 1.4, 0.0);
	glVertex2f(x2 + 1.2 , 0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(x2 + 0.2 , 0.0);
	glVertex2f(x2 , 0.15);
	glVertex2f(x2 , -0.15);
	glEnd();


	//fish3							-1.0 in x to start late  //    -7.0 to go down
	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(x + 0.2 , 0.0 - 5.0);
	glVertex2f(x + 1.2 , -0.3 - 5.0);
	glVertex2f(x + 1.4 , 0.0 - 5.0);
	glVertex2f(x + 1.2 , 0.3 - 5.0);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0 - 5.0);
	glVertex2f(x + 0.2 , 0.0 - 5.0);
	glVertex2f(x , 0.15 - 5.0);
	glVertex2f(x , -0.15 - 5.0);
	glEnd();
	glBegin(GL_TRIANGLES);

	//keyboard func fish
	glColor3f(1.0, 1.0, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(xk + 0.2 - 1.0, 0.0 - 7.0);
	glVertex2f(xk + 1.2 - 1.0, -0.3 - 7.0);
	glVertex2f(xk + 1.4 - 1.0, 0.0 - 7.0);
	glVertex2f(xk + 1.2 - 1.0, 0.3 - 7.0);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0 - 7.0);
	glVertex2f(xk + 0.2 - 1.0, 0.0 - 7.0);
	glVertex2f(xk - 1.0, 0.15 - 7.0);
	glVertex2f(xk - 1.0, -0.15 - 7.0);
	glEnd();

	*/



	//grass

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(9.0, -10.0);
	glVertex2f(9.3, -9.0);
	glVertex2f(9.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(9.0, -10.0);
	glVertex2f(8.7, -8.0);
	glVertex2f(8.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(5.0, -10.0);
	glVertex2f(5.3, -9.0);
	glVertex2f(5.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(5.0, -10.0);
	glVertex2f(4.7, -8.0);
	glVertex2f(4.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-5.0, -10.0);
	glVertex2f(-5.3, -9.0);
	glVertex2f(-5.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-5.0, -10.0);
	glVertex2f(-4.7, -8.0);
	glVertex2f(-4.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-9.0, -10.0);
	glVertex2f(-9.3, -6.0);
	glVertex2f(-9.1, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-9.0, -10.0);
	glVertex2f(-8.7, -6.0);
	glVertex2f(-8.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(9.0, -10.0);
	glVertex2f(9.3, -6.0);
	glVertex2f(9.1, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(9.0, -10.0);
	glVertex2f(8.7, -6.0);
	glVertex2f(8.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.0, -10.0);
	glVertex2f(-1.3, -6.0);
	glVertex2f(-1.1, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-1.0, -10.0);
	glVertex2f(-0.7, -6.0);
	glVertex2f(-0.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-2.3, -6.0);
	glVertex2f(-2.1, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-1.7, -6.0);
	glVertex2f(-1.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-2.3, -9.0);
	glVertex2f(-2.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-2.0, -10.0);
	glVertex2f(-1.7, -8.0);
	glVertex2f(-1.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(2.0, -10.0);
	glVertex2f(2.3, -9.0);
	glVertex2f(2.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(2.0, -10.0);
	glVertex2f(1.7, -8.0);
	glVertex2f(1.8, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-3.0, -10.0);
	glVertex2f(-3.3, -9.0);
	glVertex2f(-3.2, -10.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2f(-3.0, -10.0);
	glVertex2f(-2.7, -8.0);
	glVertex2f(-2.8, -10.0);
	glEnd();

	glFlush();	
}

void timer(int)
{
	glutPostRedisplay();				//to display again and again
	glutTimerFunc(1000 / 15, timer, 0);		//1st arg: 40times per sec change the screen

	if (x < 10)
		x += .15;						//.15 less value becz motion needs to be small (should look like moving not teleporting)

	//implement somthing to pause so that whn the fish goes out of screen it comes back after 4-5 secs

	if (x >= 10)
		x = -10.0;

	if (x1 < 10)
		x1 += .15;						

	

	if (x1 >= 10)
		x1 = -10.0;

	//fish2
	if (x2 < 10)
		x2 += .15;						

	if (x2 >= 10)
		x2 = -10.0;

	//for other bubbles
			//1st arg: 40times per sec change the screen

	if (ax < 10)
		ax += .2;						//.15 less value becz motion needs to be small (should look like moving not teleporting)

	//implement somthing to pause so that whn the fish goes out of screen it comes back after 4-5 secs

	if (ax >= 10)
		ax = -10.0;


}


void timer1(int)
{
					//to display again and again
	glutTimerFunc(1000 / 10, timer1, 0);		//1st arg: 40times per sec change the screen



	//keyboard func fish
	if (xk < 10)
		xk += .2;						//.15 less value becz motion needs to be small (should look like moving not teleporting)

	//implement somthing to pause so that whn the fish goes out of screen it comes back after 4-5 secs

	if (xk >= 10)
		xk = -13.0;



}



void timer3(int)
{
	//to display again and again
	glutTimerFunc(1000 / 10, timer3, 0);		//1st arg: 40times per sec change the screen



	//fish 2
	if (xk2 < 10)
		xk2 += .2;						//.15 less value becz motion needs to be small (should look like moving not teleporting)

	//implement somthing to pause so that whn the fish goes out of screen it comes back after 4-5 secs

	if (xk2 >= 10)
		xk2 = -14.0;

}

//for mouse

void timer2(int)
{
	glutPostRedisplay();				//to display again and again
	glutTimerFunc(1000 / 10, timer2, 0);		//1st arg: 40times per sec change the screen




	//mouse func
	if (fy <= 10.0 && fy >= -20.0)
		fy -= .2;

}

int flag1 = 0;

void keyboard(unsigned char key, int x1, int y1)
{
	
	/*else if (flag1 == 2)
	{
		flag1 = 2;
	}*/
	if (key == '1')
	{
		xk = -15.0;
		glutTimerFunc(0, timer1, 0);
		flag1++;

	}
	if (key == '2')
	{
		xk2 = -14.0;
		glutTimerFunc(0, timer3, 0);
		flag1++;

	}	glutPostRedisplay();
	//glutSwapBuffers();
}



void myMouseFunc(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		fy = 1.0;
		glutTimerFunc(0, timer2, 0);
		return;
	}
	glutPostRedisplay();
	
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowPosition(0, 0);
	glutInitWindowSize(1600, 800);
	glutCreateWindow("first proj");

	glutKeyboardFunc(keyboard);//1st arg: millisec, 2nd arg: func name, 3rd arg: we dont use here so just give 0
	glutMouseFunc(myMouseFunc);
	glutDisplayFunc(display);
	glutTimerFunc(0, timer, 0);
	init();

	glutMainLoop();
}
