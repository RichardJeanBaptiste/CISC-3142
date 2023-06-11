#include <iostream>

using namespace std;

int main() {
    
    int num, sum = 0;
    cout << "Enter whole numbers: \n";

    while(cin >> num){
        sum += num;
    }

    cout << "The sum is " << sum << "\n";
}