#include "Sort.h"
#include "QuickSort.h"
#include <utility>
using namespace std;

vector<int> QuickSort::sort(vector<int> list){
        if (list.size() <= 1){
        return list;
    }
    int pivot;
    if (list.size() >= 3){
        pivot = list[2];
        list.erase(list.begin() + 2);
    }
    else{
        pivot = list[0];
        list.erase(list.begin());
    }
    vector<int> lesser;
    vector<int> greater;

    for (int i = 0; i < list.size()-1; i++)
    {
        if (list[i] <= pivot){
            lesser.push_back(list[i]);
            list.erase(list.begin() + i);
        }

            if (list[i] > pivot){
            greater.push_back(list[i]);
            list.erase(list.begin() + i);
        }
    }


    lesser.push_back(pivot);
    //return(lesser.insert((lesser.end()), (greater.begin()), (greater.end())));
    return lesser;



}
