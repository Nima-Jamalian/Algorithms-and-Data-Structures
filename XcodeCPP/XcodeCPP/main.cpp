#include <iostream>
#include <stack>
#include <map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stack;
using std::map;

void printVector(vector<int> &vector){
    for(int i=0; i<vector.size(); i++){
        if(i==0){
            cout << "[";
        }
        if(i== vector.size()-1){
            cout << vector[i] << "]" << endl;
        } else {
            cout << vector[i] << ",";
        }
    }
}

// Q1
// Time - O(n ^ 2) | Space - O(1)
std::vector<int> hybridSort(std::vector<int> array) { // Do not edit
    //Your Answer
    if (array.size() == 0) {    // Throws error if array is empty
        throw std::invalid_argument("The array is empty.");
    };

    // Bubble sort implementation
    bool swapped;
    for (int i = 0; i < array.size(); i++) {
        swapped = false;
        for (int j = 0; j < (array.size() - i - 1); j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                swapped = true;
            };
        };

        if (!swapped) { // If no swaps happen, then array is already sorted
            break;
        };

        // Finds the minimum value in the array
        int minIndex = i;
        for (int k = i + 1; k < array.size(); k++) {
            if (array[k] < array[minIndex]) {
                minIndex = k;
            };
        };

        // Selection Sort Implementation
        // Swaps minimum value with element in the correct position
        std::swap(array[i], array[minIndex]);
    };
    return array;
};



// Q2
// Time - O(K * N) | Space - O(1)
std::vector<int> organiserSort(std::vector<int> array, std::vector<int> order) {//Do not edit
    //Your Answer
    if (array.size() == 0) {    // Throws error if array is empty
        throw std::invalid_argument("The array is empty.");
    };

    for (int i = 0; i < order.size(); i++) {
        int unorderedArray = order[i];

        // Selection Sort for unorderedArray
        for (int j = 0; j < array.size() - 1; j++) {
            int minIndex = j;
            for (int k = j + 1; k < array.size(); k++) {
                if (array[k] == unorderedArray && array[k] < array[minIndex]) {
                    minIndex = k;
                };
            };

            // Swaps the smallest element with first element of the array
            if (minIndex != j) {
                std::swap(array[j], array[minIndex]);
            };
        };
    };

    return array;
};




//Q3
//Time - O(n + k) | Space - O(K) , where k is the range of values
std::vector<int> modifiedCountingSort(std::vector<int> array) {//Do not edit
    //Your Answer
    if (array.size() == 0) {    // Throws error if array is empty
        throw std::invalid_argument("The array is empty.");
    };

    // Get maximum and minimum input values
    int maximum = *max_element(array.begin(), array.end());
    int minimum = *min_element(array.begin(), array.end());
    int range = maximum - minimum + 1;

    // Builds arrays for mofified counting sort
    std::vector<int> count(range, 0);
    std::vector<int> output(array.size(), 0);

    // Populate count array
    for (int i = 0; i < array.size(); i++) {
        count[array[i] - minimum]++;
    };

    // Update count array with new count
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    };

    // Build output
    for (int i = array.size() - 1; i >= 0; i--) {
        output[count[array[i] - minimum] - 1] = array[i];
        count[array[i] - minimum]--;
    };

    // Copies sorted elements back
    std::copy(output.begin(), output.end(), array.begin());

    return array;
};




//Q4
// Time O(n + k) | Space O(n + k)
std::vector<int> mountainSort(std::vector<int> array) {//Do not edit
    //Your Answer
    if (array.size() == 0) {    // Throws error if array is empty
        throw std::invalid_argument("The array is empty.");
    }

    // Sorts array in ascending order
    std::sort(array.begin(), array.end());

    int middle = array.size() / 2;

    // Creates temo array to store sorted result
    std::vector<int> result(array.size());

    // Fills the left half from smallest to largest
    for (int i = 0; i < middle; ++i) {
        result[i] = array[i];
    }

    // Fills the right half from largest to smallest
    for (int i = middle, j = array.size() - 1; i < array.size(); ++i, --j) {
        result[i] = array[j];
    }

    // Takes result back ot the original array
    array = result;
    return array;
}

int main(int argc, const char * argv[]) {
////    vector<int> input = {2,3,4,7,11};
////    int k = 1;
////    
////    int result = findKthPositive(input, k);
////    cout << result << endl;
//    int x = 10;
//    int y = 1000;
//    // ref is a reference to x.
//    int& ref = x;
//    ref = y;
//    cout << "x = " << x << '\n';
//    cout << "ref = " << ref << '\n';
    
    
//    std::vector<int> example = {  1, 0, 0, -1, -1, 0, 1, 1 };
//    std::vector<int> order = { 0, 1, -1};
//    vector<int> result =organiserSort(example,order);
//    printVector(result);

    vector<int> example = { -2, -2, -4, -9, -1, -6, -1, -14, -3, -15, -12, -12, -2, -8, -9 };
    
    vector<int> result = mountainSort(example);
    printVector(result);
    
    return 0;
}
