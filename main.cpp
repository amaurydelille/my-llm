#include <iostream>

#include "tokenizer/tokenizer.h"

using namespace std;

void printVector(vector<string> vect) {
    for (size_t i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
    }
}

int main(int argc, char* argv[]) {
    
    std::string text;

    for (int i = 1; i < argc; ++i) {
        text += argv[i];
        if (i < argc - 1) {
            text += " ";
        }
    }

    cout << text << endl;
    Tokenizer *tokenizer = new Tokenizer();

    vector<string> words_vector = tokenizer->tokenize(text);

    printVector(words_vector);

    return 0;
}