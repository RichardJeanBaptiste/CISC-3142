#include <iostream>

using namespace std;

int main() {

    double single_milk_carton = 3.78;
    double milk_produced;
    int milk_cartons_needed;
    double cost_of_production = 0.38;
    double profit_of_carton = 0.27;
    

    cout << "Enter the amount of milk produced: \n";

    cin >> milk_produced;

    milk_cartons_needed = milk_produced / single_milk_carton;

    cout << milk_cartons_needed << "\n";

    cout << "Cost of producing milk: " << (single_milk_carton * cost_of_production) * milk_cartons_needed << "\n";

    cout << "The profit for producing milk: " << milk_cartons_needed * 0.27 << "\n";

    return 0;
}