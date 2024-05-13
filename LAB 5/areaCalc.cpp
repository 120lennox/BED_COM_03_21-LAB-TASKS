/**
*@author: Lennox Mountain
* Program calculates the area of diferent shapes. given the correct input
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

double rectangle(double width, double length){
    return length * width;
}
double square(double length){
    return length * length;
}

double triangle(double base, double height){
    return (base * height) / 2;
}

/**
*function checks input if it is an integer
*/

int check_int(string input){
    int num_converted;
    stringstream ss(input);
    if (ss>>num_converted && ss.eof()){
        return num_converted;
    }
    else{
        cout<<"Invalid input!\n";
        return -1;
    }
}

double check_double(string input){
    double num_converted;
    stringstream ss(input);
    if (ss>>num_converted && ss.eof()){
        return num_converted;
    }
    else{
        cout<<"Invalid input!\n";
        return -1;
    }
}

int main(){
    string opt;
    int option;
    double result;
    string width;
    string length;
    string height;

    while(true){
        cout<<"Please select the area of the shape to calculate\n";
        cout<<"1. Square\n";
        cout<<"2. Rectangle\n";
        cout<<"3. Triangle\n";
        cout<<"4. Quit\n";
        getline(cin, opt);

        option = check_int(opt);

        if (option == 1){
            cout<<"Enter width: \n";
            getline(cin, width);
            double width_int = check_double(width);
            result = square(width_int);
            cout<<"Result:"<<result<<endl;
        }
        else if(option == 2){
            cout<<"Enter width: \n";
            getline(cin, width);
            cout<<"Enter length: \n";
            getline(cin, length);
            double width_int = check_double(width);
            double length_int = check_double(length);
            result = rectangle(width_int, length_int);
            cout<<"Result:"<<result<<endl;
        }

        else if(option == 3){
            cout<<"Enter height: \n";
            getline(cin, height);
            cout<<"Enter base: \n";
            getline(cin, length);
            double height_int = check_double(height);
            double length_int = check_double(length);
            result = triangle(height_int, length_int);
            cout<<"Result:"<<result<<endl;
        }

        else if(option == 4){
            break;
        }

        else{
            cout<<"Invalid input \n";
        }
    }
    
}