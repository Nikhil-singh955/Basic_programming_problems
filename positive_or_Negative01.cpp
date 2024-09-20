#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // if(n > 0){
    //     cout << "Positive Number" << endl;
    // }
    // else if(n == 0) {
    //     cout << "Neutral Number" << endl;
    // }
    // else{
    //     cout << "Negative Number "<< endl;
    // }

    // using ternary operator

    if(n == 0)
    cout << " Number is Zero" ; else(n>0)? cout << " Number is positive": cout << "Number is Negative";



    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int min  = (a<b)?a:b;
    
    int num;
    cin >> num;
    string result = (num%2 == 0)? "Even":"odd";
    cout << result << endl;
    cout<< "The minimum value" << min << endl;
    return 0;

}