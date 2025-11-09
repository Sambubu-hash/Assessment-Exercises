#include <iostream>
#include <string>
using namespace std;

int main() {

    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    string searchTerm;                                                 // Basically you don't put the Sam here
    bool found = false;

    
    cout << "Enter a name to search for: ";                            // Ask the user for a name to search for
    cin >> searchTerm;

    for (int i = 0; i < 6; i++) {                                      // Loop through the array and compare each name
        if (names[i] == searchTerm) {
            cout << searchTerm << " was found in the list!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << searchTerm << " was NOT found in the list." << endl;
    }

    return 0;
}
