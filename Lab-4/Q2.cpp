#include <iostream>

using namespace std;

int main(){

    
    int range;
    int prev = 0;
    int current = 1;
    
    cout << "Enter a range: \n";
    cin >> range;

    cout << prev << "," << current;
    
    for(int i = 0; i <= range; i++){
        int nextNum = prev + current;

        prev = current;
        current = nextNum;

        cout << ","<< current; 
    }

}