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

/**
 * capitalize_letter: capitalizes first letter of each word in string
*/
void capitalize_letter(string filedata){
    //output object. to print in a file
    ofstream output;
    string word;

    //opens file where string will be printed
    output.open("output.txt");

    //if file failes to open throw an error
    if(output.fail()) cout<<"Failed to create output!";

    //convert here
    else{

        //converts the whole string to string stream first
        istringstream ss(filedata);

        //convert each word separately
        while(ss>>word){
            word[0] = toupper(word[0]);
            output<<word<<endl;
        }
    }   
}

/**
 * check_int: checks if input option is really int
 * return: an int on success
*/
int check_int(string input){
    int num_converted;
    //converts the string input as string stream
    stringstream ss(input);

    //if string stream is not end of line, convert to int and if it convertible
    if (ss>>num_converted && ss.eof()){
        return num_converted;
    }
    else{
        cout<<"Invalid input!\n";
        return -1;
    }
}

/**
 * main: executes all functions defined
 * return: 0 on success
*/
int main(){
    //input objecting for reading files from external files
    ifstream input;

    //filedata stores the characters from external file
    string filedata;

    //opening external file
    input.open("fileData.txt");

    //if file does not exist throws an error
    if (input.fail()) cout<<"Error! file does not exist \n";

    //otherwise put the information in filedata string variable using getline function
    else{
        getline(input, filedata);
    }

    //defining menu 
    string opt;
    int option;
    while(option != 5){
        cout<<"1. Count vowels"<<endl;
        cout<<"2. Count words"<<endl;
        cout<<"3. Reverse sentence"<<endl;
        cout<<"4. Capitalize String"<<endl;
        cout<<"5. Exit"<<endl;
        getline(cin, opt);

        //checking for valid input
        option = check_int(opt);

        //defining selection
        if (option == 1){
            int vowel_count = calculate_vowels(filedata);
            cout<<vowel_count<<" vowels"<<endl;
        }

        else if(option == 2){
            int count_words = number_of_words(filedata);
            cout<<count_words<<" words"<<endl;
        }

        else if (option == 3){
            reverse_string(filedata);
            cout<<"check results in file! \n";
        }

        else if(option == 4) {
            capitalize_letter(filedata);
            cout<<"check results in file! \n";
        }

        else if(option == 5) cout<<"Exiting ... \n";
        else 
            {
                cout<<"invalid input \n";
            }

    }

}