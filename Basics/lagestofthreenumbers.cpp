#include<iostream>
using namespace std;

int main() {
    cout << "Input the number a\n";
    int a;
    cin >> a;

    cout << "Input the number b\n";
    int b;
    cin >> b;

    cout << "Input the number c\n";
    int c;
    cin >> c;

    if (a > b && a > c) {
        cout << "a is largest";
    } else if (b > c) { 
        cout << "b is largest";
    } else {
        cout << "c is largest";
    }

    return 0;
}
