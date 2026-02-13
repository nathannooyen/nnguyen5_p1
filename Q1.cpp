#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main(){
    cout << "Enter three x,y coordinates: ";

    //initialize variables as doubles
    double x_1, y_1, x_2, y_2, x_0, y_0;

    //user inputted variables inserted into variables
    cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_0 >> y_0;

    //calululate distance
    double distance = abs((x_2 - x_1)*(y_1 - y_0)- (x_1-x_0)*(y_2-y_1))/sqrt(pow(x_2-x_1, 2)+pow(y_2-y_1, 2));


    //output to terminal
    cout << "The shortest distance for (" << x_0 << ", " << y_0 << ") to the line composed of";
    cout << " (" << x_1 << ", " << y_1 << ") and (" << x_2 << ", " << y_2 << ") is ";
    std::cout << std::fixed << std::setprecision(2);

    cout << distance << endl;

    return 0; 

}
