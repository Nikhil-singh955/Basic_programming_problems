#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "Not a Prime Number" << endl;
        
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            cout << "Not a Prime Number" << endl;
            
        }
    
    else{

    cout << "Prime Number" << endl;
    }
    }
}
