/**
 * @author: Lennox Mountain
 * This whole program deals with file management
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int calculate_vowels(string fileData){
    
}

int number_of_words(string filedata);
string reverse_string(string filedata);
string capitalize_letter(string filedata);
int main(){
    ifstream input;
    ofstream output;

    string filedata;

    input.open("fileData.txt");
    output.open("output.txt");

    if (input.fail()) cout<<"Error! file does not exist \n";
    else{
        getline(input, filedata);
        cout<<filedata;
    }

}