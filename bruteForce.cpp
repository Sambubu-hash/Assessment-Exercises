#include <iostream>
using namespace std;

int main (){

    const int correct_password = 12345;       // correct password
    const int max_attempts = 5;               // maximum attempts allowed

    int attempts = 0;                         // how many attempts the user has used
    int inputPassword;                        // stores the usres curreny attempt 
    bool unlocked = false;                    // ste true if correct password is used 


    while(attempts < max_attempts){           // ask for the password if they still have attempts left
        cout << "Enter password: ";

        if(!(cin >> inputPassword)){          // Reads the user's input.If they enter something that's not a number,treat it as a failed attempt but prevent the program from crashing.
            cin.clear();                      // clear error flag
            cin.ignore(10000, '\n');          // discard bad input
            attempts++;                       // count this as a failed attempt 
            cout << "Are you Hacker? Only a few tries left. " << (max_attempts - attempts) << endl;
            continue;                         // go to next loop iteration
        }

        if( inputPassword == correct_password){                                       // Check the entered password

            cout << "Okay you are not a Hacker. Welcome valued Client. " << endl;     // if correct
            unlocked = true;
            break;                                                                    // stop asking 

        } else {
            attempts++;                                                               // if wrong, increase attempts and show remaining  
            if(attempts < max_attempts){
                cout << "Please don't be a Hacker! Attempts remaining: " << (max_attempts - attempts) << endl;

            }
        }
    }

    if(!unlocked){                                                                      // If we exit the loop without unlocking, the user used up all attempts
        cout << "Yap, definirely a Hacker. Your are done, the Police is outside your home. Good luck!! " << endl;
    }


    return 0;

}