/**
 * @author: Lennox Mountain
 * int_alloc: dynamically allocates memory to int
 * str_alloc: dynamically allocates memory to string 
*/
#include <iostream>
#include <string>
using namespace std;

int* int_alloc(int &integer){
    return new int(integer);
}

string* str_alloc(string &String){
    return new string(String);
}

//program implementation

int main(){
    int number;
    string word;

    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter message: ";
    cin>>word;

    int* result1 = int_alloc(number);
    string* result2 = str_alloc(word);

    cout<<"Dynamically allocated int: "<<*result1<<endl;
    cout<<"Dynamically allocated string: "<<*result2<<endl;

    delete result1;
    result1 = nullptr;
    delete result2;
    result2 = nullptr;

    return 0;
}