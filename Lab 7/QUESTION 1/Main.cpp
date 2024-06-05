#include <iostream>
#include "Rectangle.cpp"
#include <string>
#include <sstream>
using namespace std;

/**
 * @author: Lennox Mountain
 * Return: 0 on success
*/

//this function checks if you have entered the right values to compute the area
//takes the input form user as string then converts it to float. if it fails, it not the correct type 
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

    //rectangle object
    Rectangle rectangle1;

    string width;
    string length;

    cout<<"Width: ";
    getline(cin, width);

    float new_width = check_float_input(width);

    cout<<"Length: ";
    getline(cin, length);

    float new_length = check_float_input(length);

    //setting inputs with accessor methods
    rectangle1.set_width(new_width);
    rectangle1.set_length(new_length);

    float result = rectangle1.calculate_area(new_width, new_length);
    cout<<"Result: "<<result<<endl;

    return 0;
}