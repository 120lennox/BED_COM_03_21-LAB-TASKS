#include "Area.H"
#include "Shapes.H"

float Area::calculateArea_Triangle(Shapes::Triangle triangle){
    float base = triangle.getHeight();
    float height = triangle.getLength();

    return 0.5 * (base * height);
}

float Area::calculateArea_Square(Shapes::Square square){
    float side = square.getLength();
    return side * side;
}

float Area::calculateArea_circle(Shapes::Circle circle){
    float radius = circle.getRadius();
    
    return 3.14159 * (radius * radius);
}