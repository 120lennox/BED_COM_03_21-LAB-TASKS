/**
 * @author: Lennox Mountain
 * 
*/

#include <iostream>
#include <string>
using namespace std;

void input_num(){
    string num;
    int count = 0;
    while(count != 1){
        cout<<"Enter a value between 5 and 10: ";
        getline(cin, num);

        try
        {
            int number = stoi(num);
            if (number >= 5 && number <=10){
                cout<<"Your input("<<number<<") has been accepted"<<endl;
                count++;
            }

            else{
                cout<<"You entered "<<number<<". Please enter a value between 5 and 10 \n";
            }
        }
        catch(const std::exception& e)
        {
            std::cerr<<"Sorry you entered an invalid number. Please try again" << e.what() << '\n';
        }
    }
}

int main(){
    input_num();
}