#include<iostream>
using namespace std;
int main(){
    int a[5]= {2,5,7,4,9};
    int max = -1;
    int secondMax = -1;
    int thirdMax = -1;

    for(int i =0; i<5; i++){
        if(a[i]>max){
            thirdMax = secondMax;
            secondMax = max;
            max = a[i];
        }
        else if(a[i]> secondMax && a[i]< max){
            thirdMax = secondMax;
            secondMax = max;
        }
        else if(a[i]> thirdMax && a[i]<secondMax){
            thirdMax = a[i];
        }
    }
    cout<<"thirdMax: "<<thirdMax<<endl;
    cout<<"secondMax "<<secondMax<<endl;
    cout<<"max " << max<<endl;
}