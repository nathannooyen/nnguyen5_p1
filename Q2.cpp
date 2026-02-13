#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main(){

    std::cout << std::fixed << std::setprecision(2);

    //declare variables
    float amount, tax_rate;
    int tip_level, tip_on_post_tax;
    float tip_percent;


    //get user inputs
    cout << "Enter the original bill amount: ";
    cin >> amount;

    
    cout << "Enter the tax rate %: ";
    cin >> tax_rate;

    //verify user input from 1-4
    do{
        cout << "Enter tip level (1=10%, 2=15%, 3=20%, 4=25%): ";
        cin >> tip_level;

        if (1 > tip_level || tip_level > 4){
            cout << "Invalid Input, Try Again!\n";
        }

    }while(1 > tip_level || tip_level > 4);

    //verify user input from 1-2
    do{
        cout << "Tip on post-tax amount? (1=yes, 2=no): ";
        cin >> tip_on_post_tax;

        if (1 > tip_on_post_tax || tip_on_post_tax > 2){
            cout << "Invalid Input, Try Again!\n";
        }

    }while(1 > tip_on_post_tax || tip_on_post_tax > 2);
    
    //switch! for tip percent
    switch(tip_level){
        case 1: 
            tip_percent = 0.1;
            break;
        case 2:
            tip_percent = 0.15;
            break;
        case 3:
            tip_percent = 0.2;
            break;
        case 4:
            tip_percent = 0.25; 
            break; 
    }

    //calculations
    float pre_tip_bill = amount + amount*tax_rate/100;
    float total_tip;

    if(tip_on_post_tax == 1){
        total_tip = pre_tip_bill * tip_percent;
    }
    else{
        total_tip = amount * tip_percent;
    }

    float final_bill = pre_tip_bill + total_tip;
    
    //output to console
    cout << "The total bill pre-tip is: $" << pre_tip_bill;
    cout << "\nThe total tip is: $" << total_tip;
    cout << "\nThe total bill post-tip is: $" << final_bill;
    
    return 0;
}