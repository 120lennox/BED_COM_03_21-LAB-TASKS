#include <iostream>
#include "Area.H"
#include "Shapes.H"
#include <string>
#include <sstream>

using namespace std;

float check_float_input(string input){

    float num_converted;
    stringstream ss(input);

    if (ss>>num_converted && ss.eof()){
        return num_converted;
    }

    //if conversion fails returns -1 and some text
    else{
        cout<<"Invalid input!\n";
        return -1;
    }
}

int main(){
    while(true){
        string option;
        string length;
        string width;

        cout<<"1. Calculate the area of a square"<<endl;
        cout<<"2. Calculate the area of triangle"<<endl;
        cout<<"3. Calculate the area of a circle"<<endl;
        cout<<"4. Quit"<<endl;
        cout<<"Choose an option: ";
        getline(cin, option);

        //check for valid input
        float new_option = check_float_input(option);

        if (new_option == 1){
            Shapes::Square sqaure;
            cout << "Enter the length of the side: ";
            getline(cin, length);

            float new_length = check_float_input(length);

            sqaure.set_length(new_length);

            Area area;
            
            float square_area = area.calculateArea_Square(sqaure);
            cout<<"Area: "<<square_area<<endl; 
        }

        else if (new_option == 2){
            string base;
            string height;

            Shapes::Triangle triangle;
            Area area;

            cout << "Enter the length of the base: ";
            getline(cin, base);

            cout<<"Enter the length of the height: ";
            getline(cin, height);

            float new_base = check_float_input(base);
            float new_height = check_float_input(height);

            triangle.setLength(new_base);
            triangle.setHeight(new_height);

            float triangle_area = area.calculateArea_Triangle(triangle);
            cout<<"Area of triangle: "<<triangle_area<<endl;
        }

        else if (new_option == 3){
            string radius;

            Shapes::Circle circle;
            Area area;

            cout << "Enter the length of the radius: ";
            getline(cin, radius);

            float new_radius = check_float_input(radius);

            circle.setRadius(new_radius);

            float radius_area = area.calculateArea_circle(new_radius);
            cout<<"Area of triangle: "<<radius_area<<endl;
        }
    }
}