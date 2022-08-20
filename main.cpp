#include <iostream>
#include "Flashcard.h"

using namespace std;

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    Flashcard flashcard("hi", "there", 0);
    cout << "Welcome to C-Flashcard\n\n";
    while (true) {
        string input;
        cout << "Please choice from this menu\n"
                "1. Study\n"
                "2. Add New Flashcard\n"
                "3. Remove Flashcard\n"
                "4. Check Statistics\n"
                "5. Import Flashcard Set\n"
                "6. Export Flashcard Set\n";
        cin >> input;
        if (input == "exit") {
            return;
        }
    }
}