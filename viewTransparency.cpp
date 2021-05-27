#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void display () {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBegin(GL_QUADS);
    glColor4f(1.0f, 0.0f, 0.0f, 1.0f);
    glVertex2f(-2.0, 2.0);
    glVertex2f(-2.0,-2.0);
    glVertex2f(2.0,-2.0);
    glVertex2f(2.0,2.0);


    glColor4f(0.0f, 1.0f, 0.0f, 0.5f);
    // quarto parâmetro da função acima modifica a transparência
    glVertex2f(0.0, 4.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(4.0, 0.0);
    glVertex2f(4.0, 4.0);



    glEnd();
    glFlush();
}

void backgroundDisplay(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
}

void reshapeFigure(int width, int height){
    glViewport(0,0, (GLsizei)width, (GLsizei)height);
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
    glutCreateWindow("Blending in Transparency");

    glutDisplayFunc(display);
    glutReshapeFunc(reshapeFigure);
    backgroundDisplay();
    glutMainLoop();
    return 0;
}