#include <iostream>
#include <cstring>
using namespace std;

// the algorithm works but it is not memory efficient. 

void b_stringPrint(){
    string word[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    //the size variable has been given type long to avoid overflow. 
    long size = sizeof(word) / sizeof(word[0]);
    cout<<"words with initial of 'B' include: \n";

    //the variable i has been given type long because comparison of int and long can lead to incorrect results. 
    for (long i = 0; i < size; i++){
        if (word[i].substr(0, 1) == "B"){
            cout<<word[i]<<endl;
        }
    }

}

int main(){
    b_stringPrint();
}