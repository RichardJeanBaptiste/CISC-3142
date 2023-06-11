#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    ifstream inFile;
    ofstream outFile;
    string x;
    string firstName, lastName, department;
    double monthlyGross, bonus, taxes, distanceTraveled, travelingTime, coffeeCupsSold, costOfEachCup, taxDeduction, paycheck, averageSpeed, salesAmount;

    
    
    inFile.open("inData.txt");
    outFile.open("new.txt");

    inFile >> firstName >> lastName >> department >> monthlyGross >> bonus >> taxes >> distanceTraveled >> travelingTime >> coffeeCupsSold >> costOfEachCup;


    paycheck =  (monthlyGross + (monthlyGross * (bonus / 100)));
    taxDeduction = paycheck * (taxes / 100);

    paycheck = paycheck - taxDeduction;
    
    averageSpeed = distanceTraveled / travelingTime;
    
    salesAmount = coffeeCupsSold * costOfEachCup;

    cout << fixed;

    cout << "Name: " << firstName << " " << lastName << ", Department: " << department << "\n" << "MonthlyGrossSalary: $" << setprecision(2) << monthlyGross << ", MonthlyBonus: " << setprecision(2) << bonus << "%, Taxes: " << setprecision(2) << taxes << "%\n" <<"Paycheck: $" << paycheck << "\n"; 

    cout << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelingTime << " hours\nAverage Speed: " << averageSpeed << " miles per hour\n";

    cout << "Number of Coffee Cups Sold: " << coffeeCupsSold << ", Cost: $" << costOfEachCup << " per cup\nSales Amount = $" << salesAmount << "\n"; 

    inFile.close();
    outFile.close();

    return 0;
}