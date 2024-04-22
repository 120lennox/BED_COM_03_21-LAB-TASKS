#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int rectangle(int width, int length){
    return length * width;
}
int square(int length){
    return length * length;
}

int triangle(int base, int height){
    return (base * height) / 2;
}

int check_int(string input){
    int num_converted;
    stringstream ss(input);
    if (ss>>num_converted && ss.eof()){
        return num_converted;
    }
    else{
        return -1;
    }
}

int main(){
    string opt;
    int option;
    int result;
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

        int option = check_int(opt);

        if (option == 1){
            cout<<"Enter width: \n";
            getline(cin, width);
            int width_int = check_int(width);
            result = square(width_int);
            cout<<"Result:"<<result<<endl;
        }
        else if(option == 2){
            cout<<"Enter width: \n";
            getline(cin, width);
            cout<<"Enter length: \n";
            getline(cin, length);
            int width_int = check_int(width);
            int length_int = check_int(length);
            result = rectangle(width_int, length_int);
            cout<<"Result:"<<result<<endl;
        }

        else if(option == 3){
            cout<<"Enter height: \n";
            getline(cin, height);
            cout<<"Enter base: \n";
            getline(cin, length);
            int height_int = check_int(height);
            int length_int = check_int(length);
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