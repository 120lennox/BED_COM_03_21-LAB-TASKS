#include "Shapes.H"

using namespace Shapes;

Triangle::Triangle(){
    length = 0;
    height = 0;
}

void Triangle::set_length(float l){
    length = l;
}

void Triangle::set_height(float h){
    height = h;
}

float Triangle::get_height(){
    return height;
}

float Triangle::get_length(){
    return length;
}