#include "Flashcard.h"

using namespace std;

Flashcard::Flashcard(string term, string definition) {
    this->term = term;
    this->definition = definition;
}

Flashcard::Flashcard(string term, string definition, int errors) {
    Flashcard(term, definition);
    this->errors = errors;
}

string Flashcard::getTerm() {
    return term;
}

string Flashcard::getDefinition() {
    return definition;
}

int Flashcard::getErrors() {
    return errors;
}

void Flashcard::addError() {
    errors++;
}

void Flashcard::resetErrors() {
    errors = 0;
}

string Flashcard::toString() {
    return term + "/n";
}

