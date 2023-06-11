#include <iostream>

using namespace std;

int main() {

    double popA, popB, popA_growth_rate, popB_growth_rate;

    int counter = 0;

    cout << "Enter population then growth rate: \n";
    cin >> popA >> popA_growth_rate >> popB >> popB_growth_rate; 

    popA_growth_rate = popA_growth_rate / 100;
    popB_growth_rate = popB_growth_rate / 100;

    while (popB >= popA) {
        double x = popA * popA_growth_rate;
        popA = popA + x;

        double y = popB * popB_growth_rate;
        popB = popB + y;

        counter++;
    }

    cout << "It will take " << counter << " years for population A to overtake population B." << "\n";
}