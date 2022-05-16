#include "RecursiveBinarySearch.h"

using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int x){
    return helperSearch(list, 0, list.size()-1, x);
}
bool RecursiveBinarySearch::helperSearch(std::vector<int> list, int left, int right, int x){
    if (left <= right && right > list.size()){
        int mid = (list.size()/2)-1;

        if (list[mid] == x) {
            return true;
        }

        if (list[mid] < x){
                return helperSearch(list, mid + 1, right, x);
        }

            return helperSearch(list, left, mid - 1, x);
    }
    return false;
}