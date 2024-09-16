//This program takes a number of surveyed customers and calculates the number of customers
//that purchase at least one energy drink a week and the number the customers who prefer 
//citrus flavor of those who purchase at least one drink a week.

#include <iostream>
using namespace std;

int main()
{
    //Initializes variables and calculates different numbers of customers
    int customers_surveyed = 16500;
    double customers_who_purchase_drinks = customers_surveyed * .15;
    double customers_who_prefer_citrus = customers_who_purchase_drinks * .58;

    // Displays information
    cout << "The number of customers who purchase at least one energy drink a week is " << customers_who_purchase_drinks << "." << endl;
    cout << "The number of customers that purchase energy drinks and prefer citrus flavor is " << customers_who_prefer_citrus << "." << endl;


}


