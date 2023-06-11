#include <iostream>

using namespace std;

int main(){

    double cost_of_one_room, number_of_rooms_booked, number_of_days, sales_tax;

    int discount;

    double cost_after_discount, current_discount, total_cost, total_billing_amount;

    cout << "Enter: the cost of renting one room, the number of rooms booked, the number of days the rooms are booked and the sales tax(as a percent)\n";

    cin >> cost_of_one_room >> number_of_rooms_booked >> number_of_days >> sales_tax;

    if(number_of_days >= 3){
        discount += 5;
    }

    
    if(number_of_rooms_booked >= 30) {
        discount += 30;         
    }else if(number_of_rooms_booked >= 20){
        discount += 20;    
    }else if(number_of_rooms_booked >= 10){
        discount += 10;
    }

    current_discount = cost_of_one_room * (static_cast<double>(discount) / 100);
    cost_after_discount = cost_of_one_room - current_discount;

    
    total_cost = (cost_after_discount * number_of_rooms_booked) * number_of_days;

    double x = total_cost * (sales_tax / 100);

    total_billing_amount = total_cost + x;

    
    cout << "\nThe cost of renting one room: " << cost_after_discount << "\n" << "The discount on each room is: " << discount << "%\nRooms Booked: " << number_of_rooms_booked << "\nNumber of days booked: " << number_of_days << "\nTotal cost of the rooms: " << total_cost << "\nThe sales tax: " << sales_tax << "%\nTotal billing amount:$ " << total_billing_amount << "\n";

    
}