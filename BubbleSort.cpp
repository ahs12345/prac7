#include "Sort.h"
#include "BubbleSort.h"
#include <utility>
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
int vectorSize = list.size();

    for (int i = 0; i < vectorSize-1; i++){
        for (int j = 0; j < vectorSize -1; j++){
            if (j != vectorSize-1){
                if (list[j+1] < list[j]){
                    swap(list[j], list[j + 1]);
                }
            }

        }
    }
    return list;
}