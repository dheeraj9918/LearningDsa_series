#include<iostream>
using namespace std;
int sumOfArrays(int arr1[],  int n){
    
    if(n== 0){
         return 0;
    }
    int sum = arr1[0];
    sum += sumOfArrays(arr1+1, n-1);
    
    return sum;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = sumOfArrays(arr, 10);
    cout<<sum<<endl;
    return 0;
}