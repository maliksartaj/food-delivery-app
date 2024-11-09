#include <iostream>
#include <algorithm>  
#include <vector>   
using namespace std; 

int main() {
    
    int array1[] = {3, 1, 7, 5};
    int array2[] = {2, 6, 4, 8};

   
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

   
    vector<int> mergedArray;

    
    mergedArray.insert(mergedArray.end(), array1, array1 + size1);

   
    mergedArray.insert(mergedArray.end(), array2, array2 + size2);

    
    sort(mergedArray.begin(), mergedArray.end());

   
   cout << "Sorted merged array: ";
    for (int i = 0; i < mergedArray.size(); ++i) {
       cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
