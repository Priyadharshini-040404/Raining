#include <iostream>
using namespace std;
 
int main() {
    char raining, umbrella;
    bool programOn = true;
 
    cout << "=== Umbrella Finder Program ===" << endl;
 
    while (programOn) {
        cout << "\nIs it raining? (y/n): ";
        cin >> raining;
 
        if (raining == 'y' || raining == 'Y') {
            cout << "Did you find an umbrella? (y/n): ";
            cin >> umbrella;
            if (umbrella == 'y' || umbrella == 'Y') {
                cout << "Bring the umbrella." << endl;
                programOn = false; // End program
            } else {
                cout << "No umbrella found. Checking again..." << endl;
                // Loop continues → check rain again
            }
        }
    }
    cout << "\nProgram Closed." << endl;
    return 0;
}