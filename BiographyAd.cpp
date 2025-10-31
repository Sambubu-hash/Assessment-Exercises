#include <iostream>
#include <string>  // 
using namespace std;

int main (){
    string name;
    string hometown;
    int age;

    cout <<"Enter your full name: ";
    getline(cin, name); 
    
    cout<<"Enter your hometown: ";
    getline(cin, hometown);

    cout <<"Enter your age: ";
    while(!(cin >> age)){
        cin.clear();
        cin.ignore(100, '\n');
        cout <<"Please enter a valid number for age:";

    }


    cout<< "\nName: " <<name << "\n"
        << "Hometown: "<<hometown<< "\n"
        << "Age: "<<age<< endl;

    return 0;

}