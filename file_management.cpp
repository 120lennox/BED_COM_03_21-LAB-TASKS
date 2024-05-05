/**
 * @author: Lennox Mountain
 * This whole program deals with file management
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int calculate_vowels(string fileData){
    int count = 0;
    for(char c: fileData){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }

    return count;
}

int number_of_words(string filedata){
    string word;
    int count = 0;

    istringstream ss(filedata);

    while(ss>>word) count++;
    
    return count;

}
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
    }

    int vowel_count = calculate_vowels(filedata);
    cout<<vowel_count<<" vowels"<<endl;

}