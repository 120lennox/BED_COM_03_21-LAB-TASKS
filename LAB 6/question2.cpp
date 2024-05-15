#include <iostream>
using namespace std;

int main(){
    int row = 3;
    int column = 2;

    double** arr = new double*[row];

    for (int i = 0; i < row; i++){
        arr[i] = new double[column];
    }
}