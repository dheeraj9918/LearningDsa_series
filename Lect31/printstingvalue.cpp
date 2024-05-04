#include<iostream>
using namespace std;
void prinString(int n, string s[]){
     int digit=0;
    
    if(n==0){
        return;
    }
    digit = n%10;
    n = n/10;
    cout << digit<<" "<< s[digit]<<endl;
    prinString(n,s);
    
    cout<<s[digit]<< " ";
    
}

int main(){
    int n;
    cin>>n;
    string s[10]={"zero","one","two","three","four","five","six","seven","eight"};
    prinString(n,s);
    return 0;
}