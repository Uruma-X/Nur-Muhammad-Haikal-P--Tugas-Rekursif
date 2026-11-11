#include <iostream>
using namespace std;

int rekursif(int n) {
    if (n <= 1) {
        return 1;
    }
    
    if (n % 2 == 0) {
        return (n / 2) * rekursif(n - 1);
    }
    else {
        return n * rekursif(n - 1);
    }
}

int main() {
    int n1;
    cout << "masukkan n: ";
    cin >> n1;
    cout << "f(" << n1 << ") = " << rekursif(n1) << endl; 
    return 0;
}

