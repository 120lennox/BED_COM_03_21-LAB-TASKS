#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    //default constructor
    

    //private members
    private:
        float width;
        float length;

    //public members
    public:
        Rectangle();
        //overloaded constructor
        Rectangle(float width, float length);
        void set_width(float w);
        void set_length(float l);
        float getWidth();
        float getLength();
        float calculate_area(float width, float length);
    
        ~Rectangle();
};
#endif