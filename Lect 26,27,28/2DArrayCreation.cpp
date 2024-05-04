#include<iostream>
using namespace std;

int main(){

    int n;
    int m;
    cin>>n;
    cin>>m;
    //creating a 2d array of size n;
    int** arr = new int*[n];
    for(int i=0; i<n; i++){
       arr[i] = new int[m];
    }

    //taking input for the matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    //printing the array of matrices
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
       delete [] arr[i];
    }
    delete [] arr;

    // what we learn in this example 
    // 1. How to create a 2d array of size n;
    // 2. How to take input for the matrix;
    // 3. How to print the array of matrices;
    // 4. How to delete [] arr[i];
    // 5. How to delete [] arr;


    return 0;
}