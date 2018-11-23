//
// Created by massiveatoms on 11/22/18.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Input 2 values seperated by a space" << endl;
    int n1, n2, temp;
    cin >> n1 >> n2;
    cout << "n1: " << n1 << " n2: " << n2 << endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After exchanging \n" << "n1: " << n1 << " n2: " << n2 << endl;

}