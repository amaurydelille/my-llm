#ifndef TOKENIZER_H
#define TOKENIZER_H

#include <string>
#include <cctype>
#include <vector>
#include <string>

using namespace std;

class Tokenizer {
    private:
        vector<string> split(string& str);
        vector<float> skipGram(vector<string> tokens);

    public:
        vector<string> tokenize(string &text);
};

#endif