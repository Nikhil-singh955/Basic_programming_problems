#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the Number : " ;
    cin >> number;
    // if (number % 2 == 0)
    //     cout << number << " : Even";
    // else
    //     cout << number << " : Odd";

    // Bitwise Operator

    if((number)&1 == 1){
        cout << "odd Number ";
    }
    else{
        cout << " Even Number";
    }
}