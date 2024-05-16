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
        void set_width(float w);
        void set_length(float l);
        float calculate_area(float width, float length);
    
        ~Rectangle();
};