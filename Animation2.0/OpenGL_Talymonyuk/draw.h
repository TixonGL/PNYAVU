#ifndef DRAW_H
#define DRAW_H
#include <GL/glut.h>
#include <cmath>
#include <array>
#include <ctime>

struct Position
{
    float x, y;
};
struct Figure
{
    Position pos;
};

void renderScene();
void drawRocket(Figure& f);
void drawEarth();
void drawBackground(Figure& fb);
void drawStars();
void drawMoon();
void drawSun(float radius, float x, float y);
void drawZemlya(float radius, float x, float y);
void SecondBackground(Figure& f2);
void ThirdBackground(Figure& f);
void FourthBackground(Figure& f4);
void FifthBackground(Figure& f5);
void drawRocket2(Figure& f);
#endif // DRAW_H
