#include<iostream>
using namespace std;

int  factorial(int n){
    if(n==0) return 1;
    int biggest = n*factorial(n-1);
    return biggest;
}

int main(){
    int n;
    cin>>n;
    int ans = 0;
   ans = factorial(n);
   cout<<ans<<endl;
    return 0;
}