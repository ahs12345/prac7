#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>

using namespace std;

int main() {
   vector<int> myVector;
   string input;
   getline(cin, input);
   stringstream ss(input);
   int currentVal;
   while (ss >> currentVal)
   {
       myVector.push_back(currentVal);
   }

    RecursiveBinarySearch myBinary;
    BubbleSort myBubble;
    QuickSort myQuick;

    if (myBinary.search(myVector, 1)){
        cout << "true ";
    }
    else {
        cout << "false ";
    }
    vector <int> sortedVector = myBubble.sort(myVector);

    for (int i = 0; i < sortedVector.size(); i++){
        cout << sortedVector[i] << " ";
    }
    


return 0;
}
