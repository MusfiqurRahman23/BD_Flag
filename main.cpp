#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void init(void)
{
    glClearColor(0, 1, 0,0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,500,0,500);
}
void Display(void)
{
    float theta;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.19,0.0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.142/180;
        glVertex2f(250+150*cos(theta),250+150*sin(theta));
    }
    glEnd();
    glFlush();
}
int main (int argc, char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (150, 100);
    glutCreateWindow ("BD Flag");
    init ();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;

}
