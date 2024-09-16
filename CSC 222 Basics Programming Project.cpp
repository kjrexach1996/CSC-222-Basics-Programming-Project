//This program calculates and displays the total number of miles a car with
//20 gallons of gas can travel on one tank of gas in town and in highway, respectively.

#include <iostream>
using namespace std;

int main()
{
    // Initializes variables
    int gallons_in_car = 20;
    double distance_per_gallon_town = 23.5, distance_per_gallon_highway = 28.9;

    // Calculates total distances car can travel
    double total_distance_town = gallons_in_car * distance_per_gallon_town;
    double total_ditance_highway = gallons_in_car * distance_per_gallon_highway;

    //Displays total distances
    cout << "The car can travel " << total_distance_town << " miles in town on one tank of gas." << endl;
    cout << "The car can travel " << total_ditance_highway << " miles on the highway on one tank of gas." << endl;
    return 0;
}


