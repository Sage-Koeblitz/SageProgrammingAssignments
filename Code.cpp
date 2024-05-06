#include <iostream>
using namespace std;

int main() {

    float first;
    float second;
    float third;
    float average;

    cout << "Please enter three numbers";
    cin >> first;
    cin >> second;
    cin >> third;

    average = first + second + third;
    average = average/3;

    cout << "Your answer is " << average << endl;
}