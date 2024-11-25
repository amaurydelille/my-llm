#include "models.h"
#include "../utils/utils.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <unordered_map>

using namespace std;

class SkipGram {

private:
    int vocab_size;
    int embedding_dim;
    double learning_rate;

    vector<vector<double>> input_embeddings;
    vector<vector<double>> output_embeddings;

    void initialize_embeddings() {
        input_embeddings.resize(vocab_size, vector<double>(embedding_dim));
        output_embeddings.resize(vocab_size, vector<double>(embedding_dim));

        for (size_t i = 0; i < vocab_size; i++) {
            for (size_t j = 0; j < embedding_dim; j++) {
                input_embeddings[i][j] = random_uniform(-0.01, 0.01);
                output_embeddings[i][j] = random_uniform(-0.01, 0.01);
            }
        }
    }

public:
    SkipGram(int vocab_size, int embedding_dim, double learning_rate)
        : vocab_size(vocab_size), embedding_dim(embedding_dim), learning_rate(learning_rate) {
        initialize_embeddings();
    }

    void train(const vector<int>& tokens, int context_window, int negative_samples, int epochs) {
        random_device rd;
    }
}