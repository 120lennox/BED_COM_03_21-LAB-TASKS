/**
 * @author: Lennox Mountain
 * This whole program deals with file management
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int calculate_vowels(string fileData){
    int count = 0;
    for(char c: fileData){
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
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
string reverse_string(string filedata){
    reverse(filedata.begin(), filedata.end());

    return filedata;
}

void capitalize_letter(string filedata){
    ofstream output;
    string word;

    output.open("output.txt");
    if(output.fail()) cout<<"Failed to create output!";
    else{
        istringstream ss(filedata);
        while(ss>>word){
            word[0] = toupper(word[0]);
            output<<word<<endl;
        }
    }
    
}

/**
 * main: executes all functions defined
 * return: 0 on success
*/
int main(){
    //input objecting for reading files from external files
    ifstream input;

    string filedata;

    input.open("fileData.txt");

    if (input.fail()) cout<<"Error! file does not exist \n";
    else{
        getline(input, filedata);
    }


    // int vowel_count = calculate_vowels(filedata);
    // cout<<vowel_count<<" vowels"<<endl;

    int count_words = number_of_words(filedata);
    cout<<count_words<<" words"<<endl;

}