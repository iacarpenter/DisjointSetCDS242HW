#include <iostream>
#include "DisjointSet.h"

int main() {
    DisjointSet set1(10);
    std::cout << "Number of sets: " << set1.number_of_sets() << std::endl;
    std::cout << "Largest set size: " << set1.largest_set_size() << std::endl;
    std::cout << "Find 1: " << set1.find(1) << std::endl;
    std::cout << "Find 9: " << set1.find(9) << std::endl;

    set1.union_sets(1, 2);
    std::cout << "--- After union_sets(1, 2) ---" << std::endl;
    std::cout << "Number of sets: " << set1.number_of_sets() << std::endl;
    std::cout << "Largest set size: " << set1.largest_set_size() << std::endl;
    std::cout << "Find 1: " << set1.find(1) << std::endl;
    std::cout << "Find 2: " << set1.find(2) << std::endl;

    set1.union_sets(1, 3);
    std::cout << "--- After union_sets(1, 3) ---" << std::endl;
    std::cout << "Number of sets: " << set1.number_of_sets() << std::endl;
    std::cout << "Largest set size: " << set1.largest_set_size() << std::endl;
    std::cout << "Find 1: " << set1.find(1) << std::endl;
    std::cout << "Find 3: " << set1.find(3) << std::endl;

    set1.union_sets(2, 4);
    std::cout << "--- After union_sets(2, 4) ---" << std::endl;
    std::cout << "Number of sets: " << set1.number_of_sets() << std::endl;
    std::cout << "Largest set size: " << set1.largest_set_size() << std::endl;
    std::cout << "Find 2: " << set1.find(2) << std::endl;
    std::cout << "Find 4: " << set1.find(4) << std::endl;
}
