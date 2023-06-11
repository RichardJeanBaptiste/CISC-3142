#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double length, radius, requiredSpace, areaOfTree;
    
    
    cout << "Enter: length, radius, requiredSpace" << "\n";

    cin >> length >> radius >> requiredSpace;


    float treeDiameter = 2 * radius;
    float treeSpace = treeDiameter + requiredSpace;

    int numTrees = length / treeSpace;
    float totalSpace = numTrees * treeSpace;

    cout << "Number of trees that can be planted: " << numTrees << "\n";
    cout << "Total space occupied by fully grown trees: " << totalSpace << "\n";
    
    
    
}