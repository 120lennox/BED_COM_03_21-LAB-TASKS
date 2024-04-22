/**
 * @author: Lennox Mountain
 * 
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void input_num(){
    string num;
    int number;
    while(true){
        cout<<"Enter a value between 5 and 10: ";
        getline(cin, num);

        stringstream ss(num);
        if (ss>>number && ss.eof()){
            if (number >= 5 && number <= 10){
                cout<<"Your input ("<<number<<") has been accepted\n";
                break;
            }
            else{
                cout<<"You entered "<<number<<". Please enter a value between 5 and 10\n";
            }
        }

        else{
            cout<<"Sorry you entered an invalid value. Please try again\n";
        }

    }
}

int main(){
    input_num();
}