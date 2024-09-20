// #include<iostream>
// using namespace std;
// int main(){
//     int n, rev = 0, rem;
//     cout << "Enter the number : " ;
//     cin >> n;
//     while(n!= 0){
//        rem = n % 10;
//        rev = rev*10 + rem;
//        n = n / 10;
//     };
//     cout << "The reverse of given number is :" << rev ;
//     return 0;
// }


// using function 

#include<iostream>
using namespace std;
int reverseNumber(int n){
    int rev = 0;
   while(n!= 0){
      int rem = n % 10;
       rev = rev*10 + rem;
       n = n / 10;
    }
    return rev;
    
}
int main(){
    int n;
    cout << "Enter the Number " ;
    cin >> n;
    int rev = reverseNumber( n);
    cout << "The reversed Number is : " << rev ;

}