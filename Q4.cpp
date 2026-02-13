#include <iostream>
#include <iomanip>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       

using namespace std;


bool verify_input(int lower, int upper, int value){
    if(lower <= value && value <= upper)
    {
        return true;
    }

    cout << "Invalid Input, Try Again! ";
    return false;
    
}


int main(){
    int user_choice;

    cout << "Choose Fire (0), Water(1), or Grass (2): ";

    do{
        cin >> user_choice;
    }while(!verify_input(0, 2, user_choice));

    

    /* initialize random seed: */
    srand (time(0));

    int computer_number = rand() % 3;

    //print computer choice
    cout << "Computer chooses: ";
    switch(computer_number){
        case 0:
            cout << "Fire\n";
            break;
        case 1:
            cout << "Water\n";
            break;
        case 2:
            cout << "Grass\n";
            break;
    }


    //winning logic

    cout << "You ";
    switch(computer_number){
        case 0:
            switch(user_choice){
                case 0:
                    cout << "tie!";
                    break;
                case 1:
                    cout << "win!";
                    break;
                case 2:
                    cout << "lose!";
                    break;
            }
            break;
        case 1:
            switch(user_choice){
                case 0:
                    cout << "lose!";
                    break;
                case 1:
                    cout << "tie!";
                    break;
                case 2:
                    cout << "win!";
                    break;
            }
            break;
        case 2: 
            switch(user_choice){
                case 0:
                    cout << "win!";
                    break;
                case 1:
                    cout << "lose!";
                    break;
                case 2:
                    cout << "tie!";
                    break;
            }
            break;
    }
    cout << endl;
    return 0;
    
}
