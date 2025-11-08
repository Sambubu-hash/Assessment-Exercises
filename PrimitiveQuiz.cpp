#include <iostream>
#include <string> 

using namespace std;

int main(){

    string answer;      //variable to store user's response

    cout << "What is the Capital of France? ";
    getline(cin, answer);    // For the user to type their answer 

    if (answer == "Paris"){
        cout << "Your answer is correct !! Smart Man." << endl;

    } else{
        cout << "Your answer is incorrect !?! Not Smart Man. " << endl;

    }

    return 0;
}
