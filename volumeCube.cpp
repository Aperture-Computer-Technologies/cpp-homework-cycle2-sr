/*
calc the volume of a cube
*/

#include<iostream>

using namespace std;

int main(){
    float n, volume;
    cout << "Input the size of 1 side." << endl;
    cin >> n;
    volume = n * n * n;
    cout << "The volume is " << volume << endl;
    cin.get();
    return 0;
}