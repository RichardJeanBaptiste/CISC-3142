#include <iostream>

using namespace std;

int main() {

    double elapsed_time;
    double hours, minutes, seconds;

    cout << "Input the elapsed time in seconds: \n";
    cin >> elapsed_time;

    hours = elapsed_time / 3600;

    minutes = (hours - static_cast<int>(hours)) * 60;

    seconds = (minutes - static_cast<int>(minutes)) * 60;

    cout << static_cast<int>(hours) << ":" << static_cast<int>(minutes) << ":" << static_cast<int>(seconds);
    
    
    return 0;
}