#ifndef RECRUSIVEBINARYSEARCH_H
#define RECRUSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
    public:
    bool search(std::vector<int> list, int x);
    bool helperSearch(std::vector<int> list, int left, int right, int x);
};
#endif