#include <iostream>
using namespace std;

int main(){
    int month;   // To store the variable number for month

    cout << "Enter the munber of a month (between 1-12): ";      // To ask the user to enter a month number
    cin >> month;
    
    
    switch (month){         // Switch statement that checks which month the user entered 
        case 1: 
            cout << "January has 31 days. " << endl;
            break;

        case 2 :
            cout << "Febuary has 28 or 29 if it is a leap year. " << endl;
            break;

        case 3:
            cout << "March has 31 days. " << endl;
            break;

        case 4:
            cout << "April has 30 days. " << endl;
            break;

        case 5:
            cout << "May has 31 days. " << endl;
            break;

        case 6:
            cout << "June has 30 days. " << endl;
            break; 
            
        case 7:
            cout << "July has 31 days. " << endl;
            break;

        case 8:
            cout << "August has 31 days. " << endl;
            break;

        case 9:
            cout << "September has 30 days. " << endl;
            break;

        case 10:
            cout << "October has 31 days. " << endl;
            break;

        case 11:
            cout << "November has 30 days. " << endl;
            break;
        
        case 12:
            cout << "December has 31 days. ";
            break;

        default:
            cout << "Invaild month number. " << endl;     // This is in case the user enters a number that is not between 1-12
            break;

    }

    return 0;

}