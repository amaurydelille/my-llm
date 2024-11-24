#include "utils.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <unordered_map>

using namespace std;

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double random_uniform(double min, double max) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_real_distribution<> dis(min, max);
    return dis(gen);
}