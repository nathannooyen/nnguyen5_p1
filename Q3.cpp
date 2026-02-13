#include <iostream>
#include <iomanip>

using namespace std;
//function to verify user input
bool verify_input(int lower, int upper, int value){
    if(lower <= value && value <= upper)
    {
        return true;
    }
    cout << "Invalid Input, Try Again! ";
    return false;
    
}

int main(){

    int num1, num2;
    int distance = 0;

    cout << "Enter two numbers between 0-100: ";
//get and verify user input
    do{
        cin >> num1;
    }while(!verify_input(0, 100, num1));

    do{
        cin >> num2;
    }while(!verify_input(0, 100, num2));


    cout << "Hamming distance between " << num1 << " and " << num2;

    //calculation for hamming distance

    while(num1 != 0 || num2 != 0){
        if(num1 % 3 != num2 % 3)
        {
            distance++;
        }
        num1 /= 3;
        num2 /= 3;
    }

    cout << " when numbers are in ternary format is: " << distance;

    return 0;

}