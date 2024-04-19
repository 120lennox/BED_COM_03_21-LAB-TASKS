/**
 * @author: Lennox Mountain
 * inputNum: The void function allows user to input data. then it checks the type of dataa
*/

#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

template <typename input>
void inputNum(){
    input num;
    cout << "Enter a number: ";
    cin >> num;
    while (true){
        if (is_same<input, int>num){
            if(num >=5 && num <=10){
                cout<<"Your input value("<<num<<") has been accepted"<<endl;
                break;
            else{
                cout<<"You entered "<<num<<". please enter a number between 5 and 10"<<endl;
            }
        }
        
        else{
            cout<<"Sorry you have entered an invalid number, please try again"<<endl;
        }
    }
    }
}