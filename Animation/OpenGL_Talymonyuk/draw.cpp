#include "draw.h"

float randFloat() {
    return (float)rand() / RAND_MAX;
}

void drawRocket(Figure& f){
    glPushMatrix();
        glLoadIdentity();
        glScalef(0.4, 0.5, 1);
        glTranslatef(f.pos.x, f.pos.y, 0);

        glBegin(GL_TRIANGLES);  //Golova
        glColor3ub(191, 0, 0);
        glVertex2f(-0.2, 0.8);
        glVertex2f(0, 1.0);
        glVertex2f(0.2, 0.8);

        glColor3ub(105, 0, 0);  //Shadow Golova
        glVertex2f(0, 1.0);
        glVertex2f(0.2, 0.8);
        glVertex2f(0.13, 0.8);
        glEnd();

        glBegin(GL_QUADS);  //Korpus
        glColor3ub(178, 178, 178);
        glVertex2f(-0.2, 0.8);
        glVertex2f(0.2, 0.8);
        glVertex2f(0.2, 0.0);
        glVertex2f(-0.2, 0.0);

        //Levaya 1.0
        glColor3ub(178, 178, 178);
        glVertex2f(-0.2, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, -0.2);
        glVertex2f(-0.2, -0.4);

        //Levaya 2.0
        glColor3ub(191, 0, 0);
        glVertex2f(-0.2, 0);
        glVertex2f(-0.2, -0.4);
        glVertex2f(-0.3, -0.5);
        glVertex2f(-0.3, -0.2);

        //Pravaya 1.0
        glColor3ub(178, 178, 178);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, -0.2);
        glVertex2f(0.2, -0.4);

        //Pravaya 2.0
        glColor3ub(191, 0, 0);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.3, -0.5);
        glVertex2f(0.3, -0.2);

        //Okno 1.0
        glColor3ub(0, 120, 160);
        glVertex2f(-0.1, 0.7);
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.1, 0.5);
        glVertex2f(0.1, 0.7);

        //Okno 2.0
        glColor3ub(0, 120, 160);
        glVertex2f(-0.1, 0.4);
        glVertex2f(-0.1, 0.2);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.1, 0.4);

        glColor3ub(105, 105, 105);//Shadow Korpus 1.1
        glVertex2f(0.2, 0.8);
        glVertex2f(0.13, 0.8);
        glVertex2f(0.13, 0);
        glVertex2f(0.2, -0.13);

        glColor3ub(105, 0, 0);//Shadow Pravaya 2.1
        glVertex2f(0.2, 0);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.23, -0.2);
        glVertex2f(0.2, -0.13);


        glColor3ub(105, 0, 0);//Shadow Pravaya 2.2
        glVertex2f(0.23, -0.2);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.3, -0.5);
        glVertex2f(0.23, -0.43);
        glEnd();
        glPopMatrix();
}

void drawEarth(){
    glLoadIdentity();
    glScalef(1, 1, 1);
    glTranslatef(0, 0, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 186, 200);  //nebo
    glVertex2f(-1, 1);
    glVertex2f(-1, -1);
    glVertex2f(1, -1);
    glVertex2f(1, 1);

    glColor3ub(0, 170, 0);  //Trava
    glVertex2f(-1.0, -0.64);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glVertex2f(1.0, -0.64);

    glColor3ub(130, 130, 130); //Platforma 1.0
    glVertex2f(0.15, -0.7);
    glVertex2f(-0.15, -0.7);
    glVertex2f(-0.3, -0.8);
    glVertex2f(0.0, -0.8);

    glColor3ub(110, 110, 110); //Platforma 2.0
    glVertex2f(-0.3, -0.8);
    glVertex2f(0.0, -0.8);
    glVertex2f(0.0, -0.87);
    glVertex2f(-0.3, -0.87);

    glColor3ub(90, 90, 90); //Platforma 3.0
    glVertex2f(0.0, -0.8);
    glVertex2f(0.0, -0.87);
    glVertex2f(0.15, -0.77);
    glVertex2f(0.15, -0.7);

    glColor3ub(250, 250, 250); //OporaV 1.0
    glVertex2f(-0.3, -0.77);
    glVertex2f(-0.32, -0.77);
    glVertex2f(-0.32, 0.03);
    glVertex2f(-0.3, 0.03);

    glColor3ub(255, 0, 0); //OporaV 2.0
    glVertex2f(-0.35, -0.77);
    glVertex2f(-0.37, -0.77);
    glVertex2f(-0.37, 0.03);
    glVertex2f(-0.35, 0.03);

    glColor3ub(250, 250, 250); //OporaG 1.1
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.3, -0.12);
    glVertex2f(0, -0.12);
    glVertex2f(0, -0.1);

    glColor3ub(250, 250, 250); //OporaG 2.1
    glVertex2f(-0.32, -0.1);
    glVertex2f(-0.32, -0.12);
    glVertex2f(-0.37, -0.12);
    glVertex2f(-0.37, -0.1);

    glColor3ub(250, 250, 250); //OporaG 5.1
    glVertex2f(-0.38, -0.2);
    glVertex2f(-0.38, -0.22);
    glVertex2f(0, -0.22);
    glVertex2f(0, -0.2);

    glColor3ub(250, 250, 250); //OporaG 4.1
    glVertex2f(-0.43, -0.18);
    glVertex2f(-0.43, -0.2);
    glVertex2f(-0.4, -0.22);
    glVertex2f(-0.4, -0.2);

    glColor3ub(250, 250, 250); //OporaG 3.1
    glVertex2f(-0.37, -0.1);
    glVertex2f(-0.37, -0.12);
    glVertex2f(-0.43, -0.18);
    glVertex2f(-0.43, -0.16);

    glColor3ub(250, 0, 0); //OporaG 1.2
    glVertex2f(-0.3, -0.24);
    glVertex2f(-0.3, -0.26);
    glVertex2f(0, -0.26);
    glVertex2f(0, -0.24);

    glColor3ub(250, 0, 0); //OporaG 2.2
    glVertex2f(-0.3, -0.24);
    glVertex2f(-0.3, -0.26);
    glVertex2f(-0.35, -0.26);
    glVertex2f(-0.35, -0.24);

    glColor3ub(250, 0, 0); //OporaG 5.2
    glVertex2f(-0.38, -0.34);
    glVertex2f(-0.38, -0.36);
    glVertex2f(0, -0.36);
    glVertex2f(0, -0.34);

    glColor3ub(250, 0, 0); //OporaG 4.2
    glVertex2f(-0.43, -0.32);
    glVertex2f(-0.43, -0.34);
    glVertex2f(-0.4, -0.36);
    glVertex2f(-0.4, -0.34);

    glColor3ub(250, 0, 0); //OporaG 3.2
    glVertex2f(-0.37, -0.24);
    glVertex2f(-0.37, -0.26);
    glVertex2f(-0.43, -0.28);
    glVertex2f(-0.43, -0.26);

    glColor3ub(250, 250, 250); //OporaG 1.3
    glVertex2f(-0.3, -0.38);
    glVertex2f(-0.3, -0.4);
    glVertex2f(0, -0.4);
    glVertex2f(0, -0.38);

    glColor3ub(250, 250, 250); //OporaG 2.3
    glVertex2f(-0.32, -0.38);
    glVertex2f(-0.32, -0.4);
    glVertex2f(-0.37, -0.4);
    glVertex2f(-0.37, -0.38);

    glColor3ub(250, 250, 250); //OporaG 5.3
    glVertex2f(-0.38, -0.48);
    glVertex2f(-0.38, -0.5);
    glVertex2f(0, -0.5);
    glVertex2f(0, -0.48);

    glColor3ub(250, 250, 250); //OporaG 4.3
    glVertex2f(-0.43, -0.46);
    glVertex2f(-0.43, -0.48);
    glVertex2f(-0.4, -0.5);
    glVertex2f(-0.4, -0.48);

    glColor3ub(250, 250, 250); //OporaG 3.3
    glVertex2f(-0.37, -0.38);
    glVertex2f(-0.37, -0.4);
    glVertex2f(-0.43, -0.42);
    glVertex2f(-0.43, -0.4);

    glColor3ub(255, 250, 250); //OporaVERH 1
    glVertex2f(-0.3, 0.03);
    glVertex2f(-0.3, 0.01);
    glVertex2f(-0.37, 0.01);
    glVertex2f(-0.37, 0.03);

    glColor3ub(255, 250, 250); //OporaVERH 2
    glVertex2f(-0.37, 0.03);
    glVertex2f(-0.35, 0.03);
    glVertex2f(-0.43, -0.02);
    glVertex2f(-0.45, -0.02);

    glColor3ub(255, 250, 250); //OporaVERH 3
    glVertex2f(-0.43, -0.02);
    glVertex2f(-0.43, -0.04);
    glVertex2f(-0.4, -0.04);
    glVertex2f(-0.4, -0.02);

    glColor3ub(255, 250, 250); //OporaVERH 4
    glVertex2f(-0.4, -0.02);
    glVertex2f(-0.4, -0.04);
    glVertex2f(-0.3, 0.03);
    glVertex2f(-0.32, 0.03);

    glColor3ub(250, 250, 250); //OporaV 4.0
    glVertex2f(-0.43, -0.82);
    glVertex2f(-0.45, -0.82);
    glVertex2f(-0.45, -0.02);
    glVertex2f(-0.43, -0.02);

    glColor3ub(255, 0, 0); //OporaV 3.0
    glVertex2f(-0.38, -0.82);
    glVertex2f(-0.4, -0.82);
    glVertex2f(-0.4, -0.02);
    glVertex2f(-0.38, -0.02);

    glColor3ub(135, 135, 135); //Angar 1.0
    glVertex2f(0.5, -0.8);
    glVertex2f(0.7, -0.8);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.5, -0.6);

    glColor3ub(150, 150, 150); //Angar 2.0
    glVertex2f(0.5, -0.6);
    glVertex2f(0.7, -0.6);
    glVertex2f(0.8, -0.5);
    glVertex2f(0.6, -0.5);

    glColor3ub(120, 120, 120); //Angar 3.0
    glVertex2f(0.8, -0.5);
    glVertex2f(0.8, -0.7);
    glVertex2f(0.7, -0.8);
    glVertex2f(0.7, -0.6);

    glColor3ub(200, 200, 200); //Angar Polosa 1.0
    glVertex2f(0.52, -0.78);
    glVertex2f(0.52, -0.76);
    glVertex2f(0.68, -0.76);
    glVertex2f(0.68, -0.78);

    glColor3ub(200, 200, 200); //Angar Polosa 2.0
    glVertex2f(0.52, -0.74);
    glVertex2f(0.52, -0.72);
    glVertex2f(0.68, -0.72);
    glVertex2f(0.68, -0.74);

    glColor3ub(200, 200, 200); //Angar Polosa 3.0
    glVertex2f(0.52, -0.70);
    glVertex2f(0.52, -0.68);
    glVertex2f(0.68, -0.68);
    glVertex2f(0.68, -0.70);

    glColor3ub(200, 200, 200); //Angar Polosa 4.0
    glVertex2f(0.52, -0.66);
    glVertex2f(0.52, -0.64);
    glVertex2f(0.68, -0.64);
    glVertex2f(0.68, -0.66);


    glEnd();
}

void drawMoon(){
  glLoadIdentity();
  glScalef(0.2, 0.2, 1);
  glTranslatef(-4, 4, 0);
  glBegin(GL_QUADS);
  glColor3ub(200, 200, 200);
  glVertex2f(1, 1);
  glVertex2f(1, -1);
  glVertex2f(-1, -1);
  glVertex2f(-1, 1);

  glColor3ub(230, 230, 230);
  glVertex2f(-0.6, 1);
  glVertex2f(-1, 1);
  glVertex2f(-1, -1);
  glVertex2f(-0.6, -1);

  glColor3ub(230, 230, 230);
  glVertex2f(-0.6, -0.7);
  glVertex2f(1, -0.7);
  glVertex2f(1, -1);
  glVertex2f(-0.6, -1);

  glColor3ub(130, 130, 130);
  glVertex2f(-0.6, 0.4);
  glVertex2f(-0.8, 0.4);
  glVertex2f(-0.8, 0.8);
  glVertex2f(-0.6, 0.8);

  glColor3ub(150, 150, 150);
  glVertex2f(-0.4, 0.2);
  glVertex2f(-0.6, 0.2);
  glVertex2f(-0.6, 0.8);
  glVertex2f(-0.4, 0.8);

  glColor3ub(150, 150, 150);
  glVertex2f(-0.6, 0.2);
  glVertex2f(-0.8, 0.2);
  glVertex2f(-0.8, 0.4);
  glVertex2f(-0.6, 0.4);

  glColor3ub(130, 130, 130);
  glVertex2f(-0.2, 0);
  glVertex2f(-0.4, 0);
  glVertex2f(-0.4, 0.4);
  glVertex2f(-0.2, 0.4);

  glColor3ub(150, 150, 150);
  glVertex2f(0, 0);
  glVertex2f(-0.2, 0);
  glVertex2f(-0.2, 0.6);
  glVertex2f(0, 0.6);

  glColor3ub(150, 150, 150);
  glVertex2f(0.2, 0);
  glVertex2f(0.2, -0.2);
  glVertex2f(-0.8, -0.2);
  glVertex2f(-0.8, 0);

  glColor3ub(130, 130, 130);
  glVertex2f(0.2, 0.2);
  glVertex2f(0.4, 0.2);
  glVertex2f(0.4, -0.2);
  glVertex2f(0.2, -0.2);

  glColor3ub(130, 130, 130);
  glVertex2f(-0.8, 0);
  glVertex2f(-0.8, -0.2);
  glVertex2f(-1, -0.2);
  glVertex2f(-1, 0);

  glColor3ub(150, 150, 150);
  glVertex2f(0.4, 0.2);
  glVertex2f(0.6, 0.2);
  glVertex2f(0.6, 0.8);
  glVertex2f(0.4, 0.8);

  glColor3ub(150, 150, 150);
  glVertex2f(0.2, 0.6);
  glVertex2f(0.4, 0.6);
  glVertex2f(0.4, 0.8);
  glVertex2f(0.2, 0.8);

  glColor3ub(130, 130, 130);
  glVertex2f(0.6, 0.4);
  glVertex2f(0.8, 0.4);
  glVertex2f(0.8, 0.6);
  glVertex2f(0.6, 0.6);

  glColor3ub(130, 130, 130);
  glVertex2f(0.4, -0.4);
  glVertex2f(0.6, -0.4);
  glVertex2f(0.6, -0.6);
  glVertex2f(0.4, -0.6);

  glColor3ub(130, 130, 130);
  glVertex2f(-0.4, -0.4);
  glVertex2f(-0.6, -0.4);
  glVertex2f(-0.6, -0.6);
  glVertex2f(-0.4, -0.6);

  glColor3ub(150, 150, 150);
  glVertex2f(0.4, -0.2);
  glVertex2f(0.8, -0.2);
  glVertex2f(0.8, -0.4);
  glVertex2f(0.4, -0.4);

  glColor3ub(150, 150, 150);
  glVertex2f(0.2, -0.2);
  glVertex2f(0.4, -0.2);
  glVertex2f(0.4, -0.4);
  glVertex2f(0.2, -0.4);

  glColor3ub(150, 150, 150);
  glVertex2f(-0.2, -0.6);
  glVertex2f(-0.8, -0.6);
  glVertex2f(-0.8, -0.8);
  glVertex2f(-0.2, -0.8);

  glColor3ub(150, 150, 150);
  glVertex2f(0, -0.8);
  glVertex2f(-0.4, -0.8);
  glVertex2f(-0.4, -1);
  glVertex2f(0, -1);

  glColor3ub(150, 150, 150);
  glVertex2f(0.6, -0.8);
  glVertex2f(1, -0.8);
  glVertex2f(1, -1);
  glVertex2f(0.6, -1);

  glColor3ub(130, 130, 130);
  glVertex2f(0.4, -0.8);
  glVertex2f(0.6, -0.8);
  glVertex2f(0.6, -1);
  glVertex2f(0.4, -1);

  glEnd();

}

void drawBackground(Figure& fb){
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(0, 100, 200);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glColor3ub(0, 130, 200);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();
    glPopMatrix();
}

void drawStars(){
    glLoadIdentity();
        glColor3ub(255, 255, 255);

        glBegin(GL_POINTS);

        int numPoints = 100;
        for (int i = 0; i < numPoints; i++) {
            float x = randFloat() * 2 - 1;
            float y = randFloat() * 2 - 1;

            glVertex2f(x, y);
        }

        glEnd();
        glFlush();
    }

void SecondBackground(Figure& f2) {
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(0, 130, 200);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glColor3ub(0, 186, 200);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();
    glPopMatrix();
}

void ThirdBackground(Figure& f3) {
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(0, 70, 200);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glColor3ub(0, 100, 200);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glEnd();
    glPopMatrix();
}

void FourthBackground(Figure& f4) {
    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_QUADS);
    glColor3ub(23, 102, 119);
    glVertex2f(-1, 1);
    glColor3ub(67, 122, 155);
    glVertex2f(1, 1);
    glColor3ub(0, 70, 200);
    glVertex2f(1, -1);
    glColor3ub(67, 122, 155);
    glVertex2f(-1, -1);

    glEnd();
    glPopMatrix();
}

void FifthBackground(Figure& f5) {
    glLoadIdentity();
    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(-1, 1);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);

    glEnd();

    glColor3ub(170, 170, 170);
    glBegin(GL_QUADS);
    glVertex2f(-1, -1);
    glVertex2f(-1, -0.5);
    glVertex2f(1, -0.5);
    glVertex2f(1, -1);

    glColor3ub(130, 130, 130);
    glVertex2f(-0.8, -0.6);
    glVertex2f(-0.8, -0.8);
    glVertex2f(-0.7, -0.8);
    glVertex2f(-0.7, -0.6);

    glColor3ub(130, 130, 130);
    glVertex2f(-0.2, -0.8);
    glVertex2f(-0.2, -1);
    glVertex2f(-0.1, -1);
    glVertex2f(-0.1, -0.8);

    glColor3ub(150, 150, 150);
    glVertex2f(0.3, -0.6);
    glVertex2f(0.3, -0.9);
    glVertex2f(0.4, -0.9);
    glVertex2f(0.4, -0.6);

    glColor3ub(130, 130, 130);
    glVertex2f(0.6, -0.6);
    glVertex2f(0.6, -0.8);
    glVertex2f(0.8, -0.8);
    glVertex2f(0.8, -0.6);

    glEnd();

}

void DrawSpaceboard(Figure& f) {
    glPushMatrix();
    glTranslatef(f.pos.x, f.pos.y, 0);

    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, +0.0);
    glVertex2f(-0.06, +0.4);
    glVertex2f(+0.06, +0.4);
    glVertex2f(+0.06, +0.028);
    glVertex2f(+0.06, -0.77);
    glVertex2f(+0.05, -0.8);
    glVertex2f(-0.05, -0.8);
    glVertex2f(-0.06, -0.77);
    glVertex2f(+0.06, +0.0);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, +0.4);
    glVertex2f(-0.04, +0.5);
    glVertex2f(-0.02, +0.54);
    glVertex2f(+0.02, +0.54);
    glVertex2f(+0.04, +0.5);
    glVertex2f(+0.06, +0.4);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(+0.0, +0.22);
    glVertex2f(+0.0, -0.8);
    glVertex2f(-0.06, +0.4);
    glVertex2f(+0.06, +0.4);
    glVertex2f(-0.06, +0.22);
    glVertex2f(+0.06, +0.22);
    glVertex2f(-0.06, +0.0);
    glVertex2f(+0.06, +0.0);
    glVertex2f(-0.06, -0.22);
    glVertex2f(+0.06, -0.22);
    glVertex2f(-0.06, -0.44);
    glVertex2f(+0.06, -0.44);
    glVertex2f(-0.06, -0.66);
    glVertex2f(+0.06, -0.66);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(+0.05, -0.8);
    glVertex2f(+0.06, -0.9);
    glVertex2f(-0.06, -0.9);
    glVertex2f(-0.05, -0.8);

    glEnd();


    glColor3ub(101, 99, 120);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.06, +0.22);
    glVertex2f(-0.15, -0.3);
    glVertex2f(-0.06, -0.3);
    glEnd();

    glColor3ub(101, 99, 120);
    glBegin(GL_POLYGON);
    glVertex2f(-0.06, -0.3);
    glVertex2f(-0.15, -0.3);
    glVertex2f(-0.25, -0.6);
    glVertex2f(-0.25, -0.67);
    glVertex2f(-0.06, -0.67);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.25, -0.6);
    glVertex2f(-0.1, -0.6);
    glVertex2f(-0.1, -0.4);

    glEnd();

    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON);
    glVertex2f(-0.18, -0.67);
    glVertex2f(-0.2, -0.75);
    glVertex2f(-0.11, -0.75);
    glVertex2f(-0.13, -0.67);

    glEnd();

    //
    glColor3ub(101, 99, 120);
    glBegin(GL_TRIANGLES);
    glVertex2f(+0.06, +0.22);
    glVertex2f(+0.15, -0.3);
    glVertex2f(+0.06, -0.3);
    glEnd();

    glColor3ub(101, 99, 120);
    glBegin(GL_POLYGON);
    glVertex2f(+0.06, -0.3);
    glVertex2f(+0.15, -0.3);
    glVertex2f(+0.25, -0.6);
    glVertex2f(+0.25, -0.67);
    glVertex2f(+0.06, -0.67);

    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(+0.25, -0.6);
    glVertex2f(+0.1, -0.6);
    glVertex2f(+0.1, -0.4);

    glEnd();

    glColor3ub(151, 178, 184);
    glBegin(GL_POLYGON);
    glVertex2f(+0.18, -0.67);
    glVertex2f(+0.2, -0.75);
    glVertex2f(+0.11, -0.75);
    glVertex2f(+0.13, -0.67);

    glEnd();
    glPopMatrix();
}

void drawSun(float radius, float x, float y) {
    const float PI = 3.14159265358979323846;
       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(255, 255, 0);
       glVertex2f(x, y);
       for (int i = 0; i <= 360; i++) {
           glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
       }
       glEnd();
   }

void drawZemlya(float radius, float x, float y) {
    const float PI = 3.14159265358979323846;
       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(0, 190, 210);
       glVertex2f(x, y);
       for (int i = 0; i <= 360; i++) {
           glVertex2f(x + (radius * cos(i * PI / 180.0)), y + (radius * sin(i * PI / 180.0)));
       }
       glEnd();
   }

void drawBurn(Figure& B) {
    float x, y;
    float cnt = 30;
    float l = 0.08;
    float a = M_PI * 2 / cnt;
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0, 0.2, 1);
    glTranslatef(B.pos.x, B.pos.y, 0);
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(245, 90, 0);
    glVertex2f(0.0, -0.9);
    for (int i = -1; i < cnt; i++) {
        x = sin(a * i) * l;
        y = cos(a * i) * l;
        glVertex2f(x + .0, y + (-1.1));
    }
    glEnd();

    float x1, y1;
    float cnt1 = 30;
    float l1 = 0.05;
    float a1 = M_PI * 2 / cnt1;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(217, 195, 2);
    glVertex2f(0.0, -0.9);
    for (int i = -1; i < cnt1; i++) {
        x1 = sin(a1 * i) * l1;
        y1 = cos(a1 * i) * l1;
        glVertex2f(x1 + 0, y1 + (-1.1));
    }
    glEnd();

    float x2, y2;
    float cnt2 = 30;
    float l2 = 0.02;
    float a2 = M_PI * 2 / cnt2;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(217, 2, 2);
    glVertex2f(0.0, -0.9);
    for (int i = -1; i < cnt2; i++) {
        x2 = sin(a2 * i) * l2;
        y2 = cos(a2 * i) * l2;
        glVertex2f(x2 + .0, y2 + (-1.1));
    }
    glEnd();
    glPopMatrix();
}

void drawRocket2(Figure& f){
    glPushMatrix();
        glLoadIdentity();
        glRotatef(45, 1, 1, 1);
        glScalef(0.4, 0.5, 1);
        glTranslatef(f.pos.x, f.pos.y, 0);

        glBegin(GL_TRIANGLES);  //Golova
        glColor3ub(191, 0, 0);
        glVertex2f(-0.2, 0.8);
        glVertex2f(0, 1.0);
        glVertex2f(0.2, 0.8);

        glColor3ub(105, 0, 0);  //Shadow Golova
        glVertex2f(0, 1.0);
        glVertex2f(0.2, 0.8);
        glVertex2f(0.13, 0.8);
        glEnd();

        glBegin(GL_QUADS);  //Korpus
        glColor3ub(178, 178, 178);
        glVertex2f(-0.2, 0.8);
        glVertex2f(0.2, 0.8);
        glVertex2f(0.2, 0.0);
        glVertex2f(-0.2, 0.0);

        //Levaya 1.0
        glColor3ub(178, 178, 178);
        glVertex2f(-0.2, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, -0.2);
        glVertex2f(-0.2, -0.4);

        //Levaya 2.0
        glColor3ub(191, 0, 0);
        glVertex2f(-0.2, 0);
        glVertex2f(-0.2, -0.4);
        glVertex2f(-0.3, -0.5);
        glVertex2f(-0.3, -0.2);

        //Pravaya 1.0
        glColor3ub(178, 178, 178);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, -0.2);
        glVertex2f(0.2, -0.4);

        //Pravaya 2.0
        glColor3ub(191, 0, 0);
        glVertex2f(0.2, 0.0);
        glVertex2f(0.2, -0.4);
        glVertex2f(0.3, -0.5);
        glVertex2f(0.3, -0.2);

        //Okno 1.0
        glColor3ub(0, 120, 160);
        glVertex2f(-0.1, 0.7);
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.1, 0.5);
        glVertex2f(0.1, 0.7);

        //Okno 2.0
        glColor3ub(0, 120, 160);
        glVertex2f(-0.1, 0.4);
        glVertex2f(-0.1, 0.2);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.1, 0.4);

        glColor3ub(105, 105, 105);//Shadow Korpus 1.1
        glVertex2f(0.2, 0.8);
        glVertex2f(0.13, 0.8);
        glVertex2f(0.13, 0);
        glVertex2f(0.2, -0.13);

        glColor3ub(105, 0, 0);//Shadow Pravaya 2.1
        glVertex2f(0.2, 0);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.23, -0.2);
        glVertex2f(0.2, -0.13);


        glColor3ub(105, 0, 0);//Shadow Pravaya 2.2
        glVertex2f(0.23, -0.2);
        glVertex2f(0.3, -0.2);
        glVertex2f(0.3, -0.5);
        glVertex2f(0.23, -0.43);
        glEnd();
        glPopMatrix();
}






