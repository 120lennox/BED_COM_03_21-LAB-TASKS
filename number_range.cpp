/**
 * @author: Lennox Mountain
*/
#include <iostream>
#include <string>
#include <type_traits>
using namespace std;

template <typename input>

void inputNum() {
    input num{};
    while (true){
        cout<<"Please enter a number between 5 and 10: ";
        cin>>num;

        if (std::is_same<input, string>::value){
            cout<<"Sorry, you entered an invalid number. Please try again."<<endl;
        }
        
        else if(std::is_same<input, int>::value){
            if(num >= 5 && num <=10){
                cout<<"Your input ("<<num<<") has been accepted."<<endl;
                break;
            }
            else{
                cout<<"You entered "<<num<<". Please enter a number between 5 and 10."<<endl;
            }
        }
        else{
            cout<<"Sorry, you entered an invalid number. Please try again."<<endl;
        }
    }
}

int main(){
    inputNum<int>();
    return 0;
}