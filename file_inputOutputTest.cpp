#include <iostream>
#include <fstream>
using namespace std;

/**
 * function outputs texts in external file
*/
void output_text(){
    //declaring an ofstream object from fstream class. 
    ofstream write;

    //opening external file called file (it is a relative name meaning it does not contain file path ?? because it saved in the same directory as the code)
    write.open("file.txt");

    //inserting text in file
    write<<"Happy"<<" coding!"<<endl;
    write.close();
    cout<<"successful! \n";
}

void check_file_exist(){
    ofstream output;
    output.open("score.txt");

    if (output.fail()){
        cout<<"file does not exist \n";
    }
    else{
        cout<<"file opened \n";
    }
}

/**
 * file inputs text from external file
*/
void input_text(){
    //declaring ifstream object
    ifstream input;

    //declaring variables that will hold words contained in the file we will be using
    string first_word;
    string second_word;

    input.open("file.txt");

    input>>first_word>>second_word;
    cout<<first_word<<second_word<<endl;
    input.close();

    //this way works! but it is not efficient for large files. you dont have to know the number of words you have in your file so that you declare variables for each of them. 
    //more tips in upcoming functions. 

    
}

//generate numbers 
void generate_numbers(){
    ofstream output;
    output.open("numbers.txt");

    for (int i = 1; i <= 30; i++){
        output<<i<<" ";
        if (i % 10 == 0) output<<"\n";
    }
    cout<<"done \n";
}

//but this particular code is buggy why? the last number is being read twice and we have tpo fic that
void testEnd_of_file(){
    ifstream input;
    input.open("numbers.txt");

    int number;
    int sum = 0;
    while(!input.eof()){
        input>>number;
        cout<<number<<" ";
        sum += number;
    }

    cout<<"sum: "<<sum<<"\n";
}


//solution 1
void fixes_testEnd_of_file(){
    ifstream input;
    input.open("number.txt");

    int number;
    int sum = 0;

    while(input>>number){
        
    }
}

/**
 * @author: Lennox Mountain
 * main: pacticing writing input and output files. 
 * return: returns 0 on successful
*/

int main(){
    // output_text();
    // input_text();
    //check_file_exist();
    //generate_numbers();
    testEnd_of_file();
    return 0;
}