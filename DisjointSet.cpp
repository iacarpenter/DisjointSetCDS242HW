#include "DisjointSet.h"

DisjointSet::DisjointSet(int sz) {
    sets = std::vector<int>(sz, -1);
}

int DisjointSet::find(int i) {
    if (sets[i] < 0)
        return i;
    sets[i] = find(sets[i]);
    return sets[i];
}

void DisjointSet::union_sets(int item1, int item2) {
    int set1 = find(item1);
    int set2 = find(item2);
    if (set1 != set2) {
        if (sets[set1] < sets[set2]) {
            int added_size = sets[set1];
            sets[set1] = set2;
            sets[set2] += added_size;
        }
        else {
            int added_size = sets[set2];
            sets[set2] = set1;
            sets[set1] += added_size;
        }
    }
}

int DisjointSet::number_of_sets() {
    int number = 0;
    for (int i : sets) {
        if (i < 0)
            ++number;
    }
    return number;
}

int DisjointSet::largest_set_size() {
    int largest = -1;
    for (int i : sets) {
        if (i < largest)
            largest = i;
    }
    return -1 * largest;
}