#include "Rectangle.H"

//class instantiation
Rectangle::Rectangle(){
    width = 0;
    length = 0;
}

//overloaded constructor instantiation
Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
}

void Rectangle::set_length(float l){
    length = l;
}

void Rectangle::set_width(float w){
    width = w;
}

float Rectangle::getWidth(){
    return width;
}

float Rectangle::getLength(){
    return length;
}

float Rectangle::calculate_area(float w, float l){
    return w * l;
}

Rectangle::~Rectangle(){};