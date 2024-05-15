#include <iostream>
#include <string>
using namespace std;

class Rectangle{
    //default constructor
    Rectangle();

    //private members
    private:
        float width;
        float length;

    //public members
    public:
        void set_width(float w);
        void set_legnth(float l);
        float calculate_area(float width, float length);
    
    ~Rectangle();
};