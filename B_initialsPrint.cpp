#include <iostream>
#include <cstring>
using namespace std;

void b_stringPrint(){
    string word[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    long size = sizeof(word) / sizeof(word[0]);
    cout<<"words with initial of 'B' include: \n";

    for (long i = 0; i < size; i++){
        if (word[i].substr(0, 1) == "B"){
            cout<<word<<endl;
        }
    }

}

int main(){
    b_stringPrint();
}