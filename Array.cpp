#include <iostream>
using namespace std;

// int main(){

//     string vehicles[5] = {"Car", "Train", "Tractor", "Skiff", "Tank"};

//     // for (int i = 0; i < 6; i++){
//     //     cout << vehicles[i] << endl;
//     // }

//     cout << vehicles[3] << endl;
//     cout << vehicles[0] << endl;
//     cout << vehicles[2] << " " << vehicles[4] << endl;
//     cout << vehicles[0] << " " << vehicles[3] << " " << vehicles[1] << endl;

    

//     return 0;


// }


int main(){
    
    char funnyFace [5] [6] ={

        {'-', '-', '-', '-'},
        {'-', '0', '-', '0', '-', '\0'},
        {'-', '-', '@', '-', '-', '\0'},
        {'-', '^', '^', '^', '-', '\0'},
        {'-', 'v', 'v', 'v', '-', '\0'}


    };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 6; j++){
            cout << funnyFace[i] [j];
        }
        
        cout << endl;
    }




} 