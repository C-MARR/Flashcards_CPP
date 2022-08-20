//
// Created by c-em on 8/20/2022.
//

#ifndef FLASHCARD_FLASHCARD_H
#define FLASHCARD_FLASHCARD_H
#include <iostream>

using namespace std;

class Flashcard {
private:
    string term;
    string definition;
    int errors;

public:
    Flashcard(string term, string definition);

    Flashcard(string term, string definition, int errors);

    string getTerm();

    string getDefinition();

    int getErrors();

    void addError();

    void resetErrors();

    string toString();
};


#endif //FLASHCARD_FLASHCARD_H
