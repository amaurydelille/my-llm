#include "tokenizer.h"

#include <iostream>
#include <string.h>
#include <vector>
#include <cctype>
#include <cmath>
#include <random>
#include <unordered_map>

using namespace std;

bool isDelimiter(char c) {
    return (c == ',' || c == ';' || c == ':' || c == '.' || c == '!' || c == '?');
}

string toLower(string& str) {
    size_t n = str.size();
    
    for (size_t i = 0; i < n; i++)
        str[i] = tolower(str[i]);

    return str;
}

bool isStopWord(string word) {
    return (word == "the" || word == "of" || word == "a" || word == "an");
}

// very basic stemmer, aint gonna lie im too lazy to improve it.
// string stemmer(string& str) {
//     size_t n = str.size();
//     vector<string> suffix = { "ous", "ing", "ful", "ness", "tive", "tion" }
//     TODO
// }

// splits a string using spaces, semicolumns, comas, etc...
// as delimiters, into a vector of words.
vector<string> Tokenizer::split(string& str) {
    str = toLower(str);
    vector<string> tokens;
    size_t n = str.size();
    size_t i = 0;
    string current_token = "";

    while (i < n) {
        char c = str[i];
        
        if (isspace(c) || isDelimiter(c)) {
            if (!current_token.empty()) {
                if (!isStopWord(current_token))
                    tokens.push_back(current_token);
                current_token = "";
            }
        }
        else
            current_token += c;

        i++;
    }

    if (!current_token.empty())
        tokens.push_back(current_token);

    return tokens;
}

vector<string> Tokenizer::tokenize(string &text) {
    return split(text);
}
        
