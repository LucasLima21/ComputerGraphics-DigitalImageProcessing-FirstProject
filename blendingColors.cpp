#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display () {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    //draw;
    //generate a triangle when have a red, green and blue and each vertex;
    //triangle 1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.0, 5.0);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(4.0,-3.0);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-4.0,-3.0);




    glEnd();
    glFlush();
}

void backgroundDisplay(){
    glClearColor(0.0,0.0,0.0,0.0);
}

void reshapeFigure(int w, int h){
    glViewport(0,0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Blending Colors");

    glutDisplayFunc(display);
    glutReshapeFunc(reshapeFigure);
    backgroundDisplay();
    glutMainLoop();
    return 0;
}