#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >>a >> b >> c;

    // if((a >= b) && (a>=c)){
    //     cout << a << " is the greatest ";
    // }
    // else if((b>=a) && (b>=c)){
    //     cout << b << " is the greatest ";
    // }
    // else{
    //     cout << c << " is the greatest ";
    // }
 
    // Ternary operator Method 

    // int temp = a > b ? a:b;
    // int result = temp > c ? temp:c;
    // cout << result << " is the greatest number " ;

    int val = max(a, max(b,c));
    cout << val << " is the largest " ;
    
}