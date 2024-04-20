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

        else if(std::is_same<input, double>::value || std::is_same<input, float>::value){
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

void num_range(){
    int num;
    while (true){
        try
        {
            cout<<"Please enter a number between 5 and 10: ";
            cin>>num;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}

int main(){
    inputNum<int>();
    return 0;
}