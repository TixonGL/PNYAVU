#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <array>
#include <ctime>
#include "draw.h"

Figure f = { .0, -1.2 };
Figure f2 = { .0, -3.0 };
Figure fb = { .0, -3.0};
Figure f3 = { 2, -4.0 };
Figure f4 = { 2, -4.0 };
Figure f5 = { .0, 4.5 };


float moveY = 0.0091;
float moveX = 0.0045;

void animate(int value) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, animate, 0);
}

void drawAnima() {
    drawEarth();
    drawSun(0.2, 0.45, 0.45);
    f.pos.y += moveY;
    drawRocket(f);
    if (f.pos.y > 3.5) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        SecondBackground(f2);
        drawSun(0.2, 0.45, -0.4);
        f2.pos.y += moveY;
        drawRocket(f2);
        if (f2.pos.y > 3.5){
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            drawBackground(fb);
            fb.pos.y += moveY;
            drawRocket(fb);
            if (fb.pos.y > 3.5) {
                glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                ThirdBackground(f3);
                drawStars();
                f3.pos.y += moveY;
                f3.pos.x -= moveX;
                drawRocket2(f3);
                if (f3.pos.y > 3.5) {
                 FourthBackground(f4);
                    drawStars();
                    drawMoon();
                    f4.pos.y += moveY;
                    f4.pos.x -= moveX;
                 drawRocket2(f4);
                 if (f4.pos.y > 3.5) {
                     FifthBackground(f5);
                     drawZemlya(0.5, 0, 0.2);
                     glPushMatrix();
                     if(f5.pos.y > -1.0)
                     f5.pos.y -= moveY;
                     glPopMatrix();
                     drawRocket(f5);
                    }
                }
            }
        }
    }
}
int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Space");
    glutDisplayFunc(renderScene);
    glutTimerFunc(1000 / 60, animate, 1);
    glutMainLoop();

    return 0;
}

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //drawEarth();
//    SecondBackground(f2);
//    ThirdBackground(f3);
//    FourthBackground(f4);
//    FifthBackground(f5);
//    drawStars();
//    drawSun(float radius, float x, float y);
//    drawRocket(f);
    drawAnima();
    glutSwapBuffers();

}

