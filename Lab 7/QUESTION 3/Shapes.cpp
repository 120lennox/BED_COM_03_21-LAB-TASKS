#include "Shapes.H"

using namespace Shapes;

// Triangle definition
Triangle::Triangle(){
    length = 0;
    height = 0;
}

Triangle::Triangle(float l, float h){
    length = l;
    height = h;
}

void Triangle::setLength(float l){
    length = l;
}

void Triangle::setHeight(float h){
    height = h;
}

float Triangle::getHeight(){
    return height;
}

float Triangle::getLength(){
    return length;
}

Triangle::~Triangle(){

}

//class implementation for sqaure

Square::Square(){
    length = 0;
}

Square::Square(float l){
    length = l;
}

void Square::set_length(float l){
    length = l;
}

float Square::getLength(){
    return length;
}

Square::~Square(){

}

//circle class implementation
Circle::Circle(){
    radius = 0;
}

Circle::Circle(float r){
    radius = r;
}

void Circle::setRadius(float r){
    radius = r;
}

float Circle::getRadius(){
    return radius;
}

Circle::~Circle(){

}


