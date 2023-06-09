//
// Created by Liao Song on 2023/6/9.
//
#include "omp.h"

#include <iostream>
#include <chrono>
#include <cmath>

int main()
{
    double sum = 0;
    bool parallel_for = true;
    
    auto start = std::chrono::high_resolution_clock::now();
    
    #pragma omp parallel for reduction( + : sum ) if(parallel_for) default(none)
    for (auto i = 1; i<1000000; ++i) {
        sum += log(i);
    }

    auto end = std::chrono::high_resolution_clock::now();

    auto duration = duration_cast<std::chrono::microseconds>(end-start);
    std::cout << duration.count() << std::endl;

    std::cout << sum << std::endl;
}