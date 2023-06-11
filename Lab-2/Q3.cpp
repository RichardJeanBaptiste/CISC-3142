#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double weight_in_kilos;

    cout << "Enter your weight in kilos: " << endl;

    cin >> weight_in_kilos;

    cout << fixed;

    cout << setprecision(2) << weight_in_kilos * 2.2 << endl;
    
    
}