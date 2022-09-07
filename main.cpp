#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1416

void displayPoints(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 1.0, 0.0); //f for float, i hole int point hoto
    glBegin(GL_POINTS);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(0.5f, -0.5f);
        glVertex2f(-0.5f, 0.5f);
    glEnd();
    glFlush(); //immediately execute
}

void displayLines(void)
{
    glClearColor ( 1.0, 0.0, 0.0, 0.0); //background color, alpha always 0
    glClear(GL_COLOR_BUFFER_BIT); //background pixel/shape clear, notun window
    glBegin(GL_LINES); //GL_Line function 2ta 2ta point jug korbe
        glColor3f (0.0, 0.0, 1.0);
        glVertex2f(0.5f, 0.5f);
        glVertex2f(-0.5f, 0.5f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
    glEnd();
    glutSwapBuffers();
}

void displayLinestrip()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP); //all point connect korbe. except 1st and last
    //glBegin(GL_LINE_LOOP);
        glColor3f (1.0, 0.0, 0.0);
        glVertex2f(-0.75f, 0.75f);
        glVertex2f(-0.25f, 0.25f);
        glVertex2f(0.25f, 0.25f);
        glVertex2f(0.75f, 0.75f);
    glEnd();
    glutSwapBuffers();
}

void displayTriangle(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES); //3ta point draw
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(-0.25f, 0.25f, 0.0); //vertex 1
        glVertex3f(-0.5f, -0.25f, 0.0); //vertex 2
        glVertex3f(0.5f, -0.25f, 0.0); //vertex 3
    glEnd();
    glFlush();
}

void displayCircle(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    GLint circle_points = 1000;
    glBegin(GL_LINE_LOOP);
        for(int i =0; i< circle_points; i++)
        {
            double angle = 2*PI*i/circle_points;
            glVertex2f(0.5*cos(angle), 0.5*sin(angle));
        }
    glEnd();
    glFlush();
}

void displayQuads(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS); //all point connect hobe
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(-0.25f, 0.25f);
        glVertex2f(-0.25f, -0.25f);
        glVertex2f(-0.75f, -0.25f);
        glVertex2f(-0.75f, 0.25f);
    glEnd();
    glFlush();
}

void displayPolygon(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(-0.25f, 0.25f); //v1
        glVertex2f(0.25f, 0.25f); //v2
        glVertex2f(0.75f, 0.0f); //v3
        glVertex2f(0.25f, -0.25f); //v4
        glVertex2f(-0.25f, -0.25f); //v5
        glVertex2f(-0.75f, 0.0f); //v6
    glEnd();
    glFlush();
}

void displayColorQuads(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    //vertex er age color define
        glColor3f(1.0f, 0.0f, 0.0f); //yellow
        glVertex2f(-0.25f, 0.25f);
        glColor3f(0.0f, 1.0f, 0.0f); //green
        glVertex2f(-0.25f, -0.25f);
        glColor3f(0.0f, 1.0f, 1.0f); //cyan
        glVertex2f(-0.75f, -0.25f);
        glColor3f(1.0f, 0.0f, 1.0f); //magenta
        glVertex2f(-0.75f, 0.25f);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv); //GLUT INITIALIZE
    glutInitDisplayMode(GLUT_SINGLE); //kivabe screen dispLay korse
    glutInitWindowSize(400, 300); // koto size open hoise
    glutInitWindowPosition(100, 100); //kun jaygay open hoise
    glutCreateWindow("New Window says hi!");
    //glutDisplayFunc(displayPoints);
    //glutDisplayFunc(displayLines);
    //glutDisplayFunc(displayLinestrip);
   // glutDisplayFunc(displayTriangle);
    //glutDisplayFunc(displayQuads);
    //glutDisplayFunc(displayPolygon);
    //glutDisplayFunc(displayColorQuads);
    glutMainLoop();
    return 0;
}

