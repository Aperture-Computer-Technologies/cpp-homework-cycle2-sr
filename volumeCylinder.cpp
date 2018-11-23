// Algorithm and Program to find the volume of a cylinder
#include<iostream>
#include<math.h>


using namespace std;

int main() {
    float h, r, volume;
    cout << "Please specify the height and radius respectively seperated by a space" << endl;
    cin >> h >> r;
    volume = M_PI * r * r * h;
    cout << "The volume of the cylinder is " << volume << endl;
    cin.get();
    return 0;
}