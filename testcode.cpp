#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string input;
    int number;
    cout<<"Number: ";
    getline(cin, input) ;

    stringstream ss(input);
    if (ss>>number && ss.eof()){
        cout<<input<<endl;
    }
    else{
        cout<<"Error"<<number<<"!!\n";
    }
}
