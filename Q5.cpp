#include <iostream>

using namespace std;

bool verify_input(int lower, int upper, int value){
    if(lower <= value && value <= upper)
    {
        return true;
    }
    return false;
    
}

int main(){
    char user_letter;
    int number;

    cout << "Enter a letter: ";

    cin >> user_letter;

    number = (int) user_letter;

    int new_number;

    bool valid = true;


    if(verify_input(65, 90, number) == true){
        new_number = number - 65;
    }
    else if(verify_input(97, 122, number) == true){
        new_number = number - 97;

    }
    else{
        cout << "YOU DID NOT ENTER A LETTER";
        valid = false;
    }
    
    if(valid){
        new_number = (new_number + 1) % 26 + 65;
        char new_char = (char) new_number;

        cout << "CRYPTO: " << new_char;

    }


}
