#include<iostream>
using namespace std;
int main(){
    int year;
    cin >> year;
//     if(year%400 == 0){
//         cout << year << " is a leap year ";
//     }
    
//     // All in one
//     // if(year % 400 ==0 || (year % 4 == 0 && year % 100!= 0))


//     else if(year % 4 == 0 && year % 100 != 0){
//         cout << year << " is a leap year ";
//     }
//     else {
//         cout << year << " is not a leap year ";
//     }
// }


// ternary operator

int val = (year%400 == 0) || (year % 4 == 0 && year % 100!=0) ? true: false;
if( val == true){                                             // 1 : 0
    cout << year << " is a leap year ";
}
else{
    cout << year << " is not a leap year ";
}
}