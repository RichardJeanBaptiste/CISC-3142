#include <iostream>

using namespace std;

int main() {
    string gender;
    double body_weight, wrist_measurement, waist_measurement,hip_measurement, forearm_measurement;

    double A1,A2,A3,A4,A5,B, Body_Fat, Body_Fat_Percentage;

    cout << "Enter your Gender, body weight, wrist measurement, waist measurement, hip measurement, forearm measurement\n";

    cin >> gender >> body_weight >> wrist_measurement >> waist_measurement >> hip_measurement >> forearm_measurement;

    if(gender == "woman") {
        A1 = (body_weight * 0.732) + 8.987;
        A2 = wrist_measurement / 3.140;
        A3 = waist_measurement * 0.157;
        A4 = hip_measurement * 0.249;
        A5 = forearm_measurement * 0.434;
        B = A1 + A2 - A3 - A4 + A5;
        Body_Fat = body_weight - B;
        Body_Fat_Percentage = (Body_Fat * 100)/body_weight;

        cout << Body_Fat_Percentage << "\n";

        return 0;

    }else {
        A1 = (body_weight * 1.082) + 94.42;
        A2 = waist_measurement * 4.15;
        B = A1 - A2;
        Body_Fat = body_weight - B;
        Body_Fat_Percentage = (Body_Fat * 100)/body_weight;

        cout << Body_Fat_Percentage << "\n";

        return 0;
    }
}