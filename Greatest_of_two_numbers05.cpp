#include<iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int b;
    cin >> b; 
    // int largest;   ----> use in Ternary operator method

    // if( a > b){
    //     cout << a << " is greater" ;
    // }
    // if( a == b){
    //     cout << a << " and " << b << " are equal ";
    // }
    // else  { 
    //     cout << b << " is greater" ;
    // }


    // ternary operator

    // if(a == b)
    //     cout << " Both are equal\n"; else {  largest = a>b? a : b;
    //     cout << largest << " is largest";
    //     }

  if( a == b){
    cout << "Both are equal" ;
  }
  else {
    int num = max(a, b);
    cout << num << " is greatest Number " ;
  }

    
}