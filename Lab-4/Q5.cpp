#include <iostream>

using namespace std;

int main() {

    int n;
    float sum = 2;
    
    cout << "Enter a integer n: ";

    cin >> n;

    for(int i = 2; i <= n; i++) {

        float denom = 0;
        
        for(int j = 0; j <= i; j++){
            denom += j;
        }

        sum += (1/denom);
    }

    cout << "The sum is: " << sum << "\n";
}