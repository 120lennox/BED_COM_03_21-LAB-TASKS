#include <iostream>
using namespace std;

int main(){
    int rows;
    int columns;

    cout<<"Enter number of rows: ";
    cin>>rows;

    cout<<"Enter number of columns: ";
    cin>>columns;
    if (rows <= 3 && columns <= 3){
        double** arr = new double*[rows];
        for (int i = 0; i < rows; i++){
            arr[i] = new double[columns];
        }

        for (int i = 0; i < rows; i++){
            for(int j = 0; j < rows; j++){
                cout<<arr[i][j]<<" ";
            }
        }

        for (int i = 0; i < rows; i++) delete arr[i];
        delete[] arr;
    }
    else{
        cout<<"invalid inputs \n";
    }
}