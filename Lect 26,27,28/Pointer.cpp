#include <iostream>
using namespace std;

int update (int **p){
    // p = p +1;
    // above code any chnge or not
//   *p = *p + 1;
  // above code any change or not
  **p = **p + 1;

}

int main() {
    // int n = 4;
    // int *p = &n;
    // int **q = &p;
    // int *p2;
    
    // cout <<"address of n " <<  p << endl;
    // cout<< "value of n " << *p <<endl << endl;
    // cout<< "address of p " << q << endl;
    // cout << "address of p " << *q <<endl << endl;
    // cout<<  "value of n  " << **q <<endl;

    // cout<< "adddress of p@" << p2 << endl;
    // char c[5]  = "abck";
    // char *p = &c[0];
    // cout << "address of c "<< sizeof(*p) << endl;
   

   // array 
//    int *ptr = NULL;
//    cout<< "address of ptr  " << ptr << endl;

//    int arr[5] = {10,20,30,40,50};
//    int *p = &arr[0];
//    p = p +1;
//    cout << "address of arr "<< p<< endl;
//    cout<< "address of arr  "<< arr << endl;
//    cout<< "address of arr  " << p+1 << endl;
//    cout<< "adddress of arr " << (arr + 2) << endl;
//    cout<< "address of arr = *(arr + 1)  =" << *(arr + 4) <<endl << endl;

 int i = 5; 
 int *p = &i;
 int **q = &p;
 cout <<"before function call"<< endl;
 cout << "address of i " << p << endl;
 cout << "address of p " << *q <<endl;
 cout <<"value of i " << **q <<endl;

 cout << "after function call"<< endl;
 update(q);
 cout << "address of i " << *q << endl;
 cout << "address of p " << p <<endl;
 cout <<"value of i " << **q <<endl;

 return 0;
 






    return 0;
}
