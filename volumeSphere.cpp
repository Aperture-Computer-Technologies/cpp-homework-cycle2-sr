// calc the volume of a sphere.
#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    float r, volume;
    cout << "Input the radius of the sphere." << endl;
    cin >> r;
    volume = 4.0/3 * M_PI * pow(r, 3);
    cout << "The volume of the sphere is " << volume << endl;
    return 0;
}
