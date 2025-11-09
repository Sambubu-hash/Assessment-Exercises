#include <iostream>
#include <string>
using namespace std;

int main(){

    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};         // This Array stores the names for searching

     string searchTerm = "Sam";                                            // The value we are searching for

     bool found = false;                                                   // This variable will help us track if we found the correct name

     for(int i = 0; i < 6; i++){                                           // Loop for the Array, i starts at 0 and goes up to 5

        if(names[i] == searchTerm){                                        // Checks if the name maches the search  
            cout << searchTerm << " Was found in the list!! " << endl;      
            found = true;                                                  // mark that we found the name  
            break;                                                         // For stopping the search
        }

     }

     if(!found){                                                           // This is for, if the name is not found  
        cout << searchTerm << "Was NOT found in the list. " << endl;

     }

     return 0;
}

