#include <iostream>
#include <fstream>
#include <regex>
#include <vector>

#include "Flashcard.h"

using namespace std;

vector<Flashcard> flashcardPack;

void menu();
void study();
void createFlashcard();
void deleteFlashcard();
void checkStats();
void importFlashcards();
void exportFlashcards();

int main() {
    menu();
    return 0;
}

void menu() {
    cout << "\nWelcome to C-Flashcard\n\n";
    while (true) {
        string input;
        cout << "Please select an option from this menu...\n\n"
                "1. Study\n"
                "2. Add New Flashcard\n"
                "3. Remove Flashcard\n"
                "4. Check Statistics\n"
                "5. Import Flashcard Set\n"
                "6. Export Flashcard Set\n\n"
                "0. Exit Program\n";
        getline(cin, input);
        regex valid("[0-6]");
        if (!regex_match(input, valid)) {
            continue;
        }
        int option = stoi(input);
        switch (option) {
            case 1:
                study();
                break;
            case 2:
                createFlashcard();
                break;
            case 3:
                deleteFlashcard();
                break;
            case 4:
                checkStats();
                break;
            case 5:
                importFlashcards();
                break;
            case 6:
                exportFlashcards();
                break;
            case 0:
                cout << "\nBYE!!\n";
                return;
        }
    }
}

void study() {
    //TODO
}

void createFlashcard() {
    cout << "Enter the term(Front) of the card\n";
    string term;
    getline(cin, term);
    if (term.empty()) {
        cout << "The term cannot be blank\n";
        return;
    }
    vector<Flashcard>::iterator itr;
    for (itr = flashcardPack.begin(); itr != flashcardPack.end(); itr++) {
        Flashcard card = *itr;
        if (term == card.getTerm()) {
            cout << "This flashcard term already exists\n";
            return;
        }
    }
    cout << "Enter the definition(Back) of the card\n";
    string definition;
    getline(cin, definition);
    flashcardPack.emplace_back(term, definition, 0);
}

void exportFlashcards() {
    //TODO
}

void importFlashcards() {
    //TODO
}

void checkStats() {
    //TODO
}

void deleteFlashcard() {
    cout << "Enter the term of the card that you would like to remove\n";
    string cardToRemove;
    getline(cin, cardToRemove);
    for (int i = 0; i < flashcardPack.size(); i++) {
        if (flashcardPack[i].getTerm() == cardToRemove) {
            cout << "This card has been removed\n\n";
            flashcardPack.erase(flashcardPack.begin() + i, flashcardPack.begin() + i + 1);
            return;
        }
    }
    cout << "This flashcard doesn't exist\n\n";
}
