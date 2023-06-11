#include <iostream>

using namespace std;

int main() {

    int num;
    char x;
    cout << "Input an integer between 0 and 35.\n";

    cin >> num;

    if(num <= 9){
        cout << num << "\n";
    } else {
        x = num + 55;
        cout << x << "\n";
    }

    
}