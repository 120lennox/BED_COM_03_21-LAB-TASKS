/**
 * The program below dynamically allocates memory to integer and string
*/
#include <iostream>
#include <string>
using namespace std;

int int_alloc(int &integer){
    //allocate memory to integer
    int* number = new int;

    //gets address of parameter
    number = &integer;

    return *number;
}

string str_alloc(string &String){
    //allocate memory to integer
    string* message = new string;

    //gets address of parameter
    message = &String;

    return *message;
}

//program implementation

int main(){
    int number;
    string word;

    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter message: ";
    cin>>word;

    int result1 = int_alloc(number);
    string result2 = str_alloc(word);

    cout<<"Dynamically allocated int: "<<result1<<endl;
    cout<<"Dynamically allocated string: "<<result2<<endl;
}