#include "loadingScreen.hh"

using namespace std;

void delay(double secs) {
    this_thread::sleep_for(chrono::duration<double>(secs));
}

void loadingScreen(int times) {
    for(int i = 0; i < times; i++) {
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < j; k++){
                cout << '-';
            }
            cout << '*';
            for(int k = 0; k < 5 - (j + 1); k++){
                cout << '-';
            }
            cout << endl;
            delay(0.1);
            cout << "\033[A";
            cout << "\033[2K";
        }
        for(int j = 3; j > 0; j--){
            for(int k = 0; k < j; k++){
                cout << '-';
            }
            cout << '*';
            for(int k = 0; k < 5 - (j + 1); k++){
                cout << '-';
            }
            cout << endl;
            delay(0.2);
            cout << "\033[A";
            cout << "\033[2K";
        }
    }
}
