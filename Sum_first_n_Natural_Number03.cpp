#include<iostream>
using namespace std;
// int main(){
//     int number;
//     cout << "Enter the Number : " ;
//     cin >> number;
    // int sum = 0;
    // for(int i = 1; i<=number ; i++)
    //         sum+=i;

    //     cout << sum;

    // using formula


    // cout << (number*(number+1))/2;

    // using recursion 

int sumofNaturalNumber(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + sumofNaturalNumber(n-1);
    }
    
}
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    cout << "The Sum of First " << n << " Natural Number is :" << sumofNaturalNumber(n) << endl; 
}