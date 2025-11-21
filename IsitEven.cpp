#include <iostream>
using namespace std;

string checkEven( int number){                // This block of code is for checking if the number is even or odd 
    if (number % 2 == 0){
        return "This number is Even. ";
    }

    else{
        return "This number is Odd. ";

    }

}

int main(){                                   // This block of code receives the number from the user   

    int userNumber;                           // variable to store the user input

    cout << "Enter a number: ";               // Asks for the usey number 
    cin >> userNumber;

    string result = checkEven(userNumber);    // Calls the function and returns the result 
    cout << result << endl;                   // Prints the result

    return 0;
}