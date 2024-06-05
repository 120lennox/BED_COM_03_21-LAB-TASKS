#ifndef AREA_H
#define AREA_H
#include <iostream>
#include "Shapes.H"
using namespace std;

class Area{
    public:
        static float calculateArea_Triangle(Shapes::Triangle);
        static float calculateArea_Square(Shapes::Square);
        static float calculateArea_circle(Shapes::Circle circle);
};
#endif // AREA_H