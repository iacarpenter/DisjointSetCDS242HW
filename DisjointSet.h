// Write a complete implementation of the DisjointSet class.
// Requires the union_sets and find operations, using union by size.
// Include path compression. Include functions to return the number of sets and the size of the largest set.

#ifndef DISJOINT_SET_H
#define DISJOINT_SET_H

#include <vector>

class DisjointSet {
public:
    DisjointSet(int sz);
    int find(int i);
    void union_sets(int item1, int item2);
    int number_of_sets();
    int largest_set_size();
private:
    std::vector<int> sets;
};

#endif // DISJOINT_SET_H