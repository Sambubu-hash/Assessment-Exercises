#include <iostream>
using namespace std;

int main(){

    // Loop 1: From 0 to 50
    //i starts at 0, and goes to 50 
    for(int i = 0; i <= 50; i++){
        cout << i << endl;
    }

    cout << "-------------------" << endl;   // To make it easier to see

    // Loop 2: From 50 to 0
    // i starts at 50, and goes to 0
    for(int i = 50; i >= 0; i--){
        cout << i << endl;
    }

    cout << "-------------------" << endl;

    // Loop 3: From 30 to 50
    // i starts at 30 and goes to 50
    for(int i = 30; i <= 50; i++){
        cout << i << endl;
    }

    cout << "-------------------" << endl;

    // Loop 4: From 50 to 10 in 2 steps
    // i starts at 50, goes down to 10, and decreases by 2 each time
    for(int i = 50; i >= 10; i -= 2){
        cout << i << endl;
    }

    cout << "-------------------" << endl;

    // Loop 5: From 100 to 200 in increments of 5
    // i starts at 100, ends at 200, increases by 5 each time
    for(int i = 100; i <= 200; i += 5){
        cout << i << endl;
    }

    return 0;
}