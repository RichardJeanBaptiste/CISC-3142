#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    char ch;


    // input - 78 86 18 #42 & 

    cout << "Enter: " << endl;
    
    // cin >> x >> y >> z >> ch; //a 78, 86, 18, 
   
   // cin >> ch >> x >> y >> z; // 7, 8, 86, 18

    /*
    cin >> x;
    cin.get(ch);
    cin >> y >> z; // 78, 86 ,18
    */
    
    /*
    cin >> x >> ch >> y >> z; // 78, 6, 18, " "
 	cin.get(ch);
    */
    
    
    cin >> x >> y >> z; // 78, 86, 18
    

    cout << x << " " << y << " " << z <<  " " << ch << " " << endl;

    return 0;
}