#include <iostream>
#include <cstring>
using namespace std;

void b_stringPrint(){
    string word[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    cout<<"words with initial of 'B' include: \n";

    for (int i = 0; i < word->length(); i++){
        if (word[i].substr(0, 1) == "B"){
            cout<<word[i]<<endl;
        }
    }

}

int main(){
    b_stringPrint();
}