#include <iostream>
#include <fstream>
using namespace std;

/**
 * @author: Lennox Mountain
 * main: pacticing writing input and output files. 
 * return: returns 0 on successful
*/

int main(){
    //declaring an ofstream object from fstream class. 
    ofstream write;

    //opening external file called file (it is a relative name meaning it does not contain file path ?? because it saved in the same directory as the code)
    write.open("file.txt");

    //inserting text in file
    write<<"Happy"<<" coding!"<<endl;
    cout<<"successful! \n";
    return 0;
}