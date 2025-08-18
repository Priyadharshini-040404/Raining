#include <iostream>
using namespace std;

// Function to get valid 'y' or 'n' input from user
char getYesNoInput(const string& prompt) {
    char input;
    while (true) {
        cout << prompt;
        cin >> input;

        // Check for valid input
        if (input == 'y' || input == 'Y' || input == 'n' || input == 'N') {
            return input;
        } else {
            cout << "Invalid input. Please enter 'y' or 'n'." << endl;
            cin.clear();               // Clear error flags
            cin.ignore(10000, '\n');   // Ignore invalid input
        }
    }
}

int main() {
    char raining, umbrella;
    bool programOn = true;

    cout << "=== Umbrella Finder Program ===" << endl;

    while (programOn) {
        raining = getYesNoInput("\nIs it raining? (y/n): ");

        if (raining == 'y' || raining == 'Y') {
            umbrella = getYesNoInput("Did you find an umbrella? (y/n): ");

            if (umbrella == 'y' || umbrella == 'Y') {
                cout << "Bring the umbrella." << endl;
                programOn = false; // End program
            } else {
                cout << "No umbrella found. Checking again..." << endl;
                // Loop continues → check rain again
            }
        }
        else {
            cout << "It is not raining. No umbrella needed." << endl;
            programOn = false; // End program
        }
    }

    cout << "\nProgram Closed." << endl;
    return 0;
}
