#include <iostream>
#include <numeric>
#include <vector>
#include<mpi.h>
double mean(const std::vector<double>& values) {
    return std::accumulate(values.begin(), values.end(), 0.0) / values.size();
}

int main() {
    const std::vector<double> temperatures{18.0, 20.0, 22.0, 26.0};
    std::cout << mean(temperatures) << '\n';
}