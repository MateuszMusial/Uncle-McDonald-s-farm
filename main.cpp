/*
Coding Task "Uncle McDonald's Farm"
Mateusz Musial Solution
*/

#include <iostream>
#include <string>
using namespace std;

int max_area( int, int );                                 // declaration of function that calculate the max area of farm


int main() {

    string start_program;
    int length, segment_a, segment_b;                                // variables of fence length and fence's segments


    cout << "Hello! This program helps you to calculate the maximum area of your farm.\n"
            "If you want to start the program, please type in: RUN" << endl;                // Asking user for input


    do {
        cin >> start_program;

        if ( start_program != "RUN" ) {
            cout << "Error! If you want to start you need to type: RUN\n";
        }
    } while ( start_program != "RUN" );                                               // checking if user typed "RUN"
                                                                    //we should test numbers end other words as input


    while( length < 3 || !(cin.good()) ){                                       //asking for giving length of the fence
                                                                        //tested for negative numbers, letters, zero and float-point numbers

        cin.clear();
        cin.ignore(100,'\n');                                           // checking if user gave integer number

        cout << "Please enter the length of your fence. (The value should be greater than or equal to 3)." << endl;

        cin >> length;
    }

    // Rectangle has the biggest area when it's a square so the algorithms try to find values as close as possible to yourself

    if (length % 3 == 0) {
        segment_a = length / 3;
        segment_b = segment_a;

        cout << "Length of segment a = " << segment_a << endl;
        cout << "Length of segment b = " << segment_b << endl;

    } else if (length % 3 == 1) {
        segment_a = (length - 1) / 3;
        segment_b = segment_a + 1;

        cout << "Length of segment a = " << segment_a << endl;
        cout << "Length of segment b = " << segment_b << endl;

    } else if (length % 3 == 2) {
        segment_a = (length - 2) / 3;
        segment_b = segment_a + 2;

        cout << "Length of segment a = " << segment_a << endl;
        cout << "Length of segment b = " << segment_b << endl;
    }

    // at the end, program return maximum area of farm using function max_area

    cout <<"\nMaximum area of your farm is: " << max_area(segment_a, segment_b ) << " square meters.";

    return 0;
}

int max_area( int segment_a, int segment_b ) {
                                                                //function that calculate area based on segments a and b
    return segment_a * segment_b;

}
