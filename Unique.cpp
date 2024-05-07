#include <iostream>
using namespace std;

void unique(int array[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                for (int k = j; k < n; k++) {
                    array[k] = array[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    cout << "\nNew Array: [";

    for (int i = 0; i < n; i++) {
        cout << " " << array[i];
    }

    cout << " ]\n\n";
}

int main() {

    int n = 9;

    int I[9] = {7, 4, 5, 7, 2, 3, 2, 1, 8};

    cout << "\nOriginal Array: [";

    for (int i = 0; i < n; i++) {
        cout << " " << I[i];
    }

    cout << " ]\n\n";

    unique(I, n);
   
    return(0);
}