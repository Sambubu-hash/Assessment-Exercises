#include <iostream>
#include <string>  // 
using namespace std;

int main (){
    string name;
    string hometown;
    int age;

    cout <<"Enter your full name: ";
    getline(cin, name);           //getline allows space
    
    cout<<"Enter your hometown: ";
    getline(cin, hometown);       //also allows spaces in town names

    cout <<"Enter your age: ";
    while(!(cin >> age)){         //validates input to ensure its a number
        cin.clear();              //clears the error flag if invalid input is entered
        cin.ignore(10000, '\n');  //discards incorrect input 
        cout <<"Please enter a valid number for age:";

    }


    cout<< "\nName: " <<name << "\n"      // Display all the information using a single cout 
        << "Hometown: "<<hometown<< "\n"
        << "Age: "<<age<< endl;

    return 0;

}