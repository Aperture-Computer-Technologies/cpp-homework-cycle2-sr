//
// Created by massiveatoms on 11/22/18.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,s,area;
    cout << "Please input the length of all 3 sides seperated by a space" << endl;
    cin >> a >> b >> c;
    s = 0.5 * (a + b + c);
    area = sqrt(s
            * (s-a)
            * (s - b)
            * (s-c)
            );
    cout << "The area of a triangle with" << endl;
    cout << "Side 1: " << a << endl << "Side 2: " << b << endl << "Side 3: " << c << endl;
    cout << "is: " << area << endl;
    return 0;
}