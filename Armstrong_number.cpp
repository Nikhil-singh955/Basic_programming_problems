#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    int sum = 0;
    int originaln = n;
    while(n > 0){
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit; // Manually compute the cube
        n = n/10;
    }
    if(sum == originaln){
        cout << "Armstrong Number " << endl;
    }
    else{
        cout << "Not Armstrong Number " << endl;
    }
    return 0;
}