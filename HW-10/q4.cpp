#include <iostream>
using namespace std;

int main() {

    int X[8];
    int Y[8];
    int Z[8];
    int num;
    int count;

    cout << "Please enter 8 numbers" << endl;
    cin >> X[8];

    cout << "Please enter how many units you want moved" << endl;
    cin >> count;

    for (num = 0; num < 8; num ++) {

        Y[8] = X[num + count];

        if (X[num + count] < X[num.length()]) {X[num + count] = Y[0 ++]}
    
    }

    cout << Y[8];
}