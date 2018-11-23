/*
A bus covers a distance of 20 km /liter of diesel. The cost
of diesel is Rs 50.00 per liter. Write Algorithm and
Program to calculate the cost of diesel to travel 90km
*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int mileage = 20;
    float diesel_cost = 50.00;
    int distance = 90;
    float totalcost = distance / mileage * diesel_cost;
    cout << "The total money needed to travel 90km with this car is" << totalcost << endl;
    return 0;
}
