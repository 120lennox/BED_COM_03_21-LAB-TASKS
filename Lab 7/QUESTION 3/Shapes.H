#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

namespace Shapes{
    class Triangle{
        
        private:
            float length;
            float height;
        
        public:
            Triangle();
            Triangle(float l, float h);
            ~Triangle();
            void setLength(float l);
            void setHeight(float h);
            float getLength();
            float getHeight();
    };

    class Square{
        private:
            double length;
        public:
            Square();
            Square(float l);
            ~Square();
            void set_length(float l);
            float getLength();
           

    };

    class Circle{
        private:
            double radius;
        public:
            Circle();
            Circle(float r);
            ~Circle();
            void setRadius(float r);
            float getRadius();

    };
}
#endif