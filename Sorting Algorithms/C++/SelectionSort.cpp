#include <iostream>

void printVector(std::vector<int> &vector){
    for(int i=0; i<vector.size(); i++){
        if(i==0){
            std::cout << "[";
        }
        if(i== vector.size()-1){
            std::cout << vector[i] << "]" << std::endl;
        } else {
            std::cout << vector[i] << ",";
        }
    }
}

void swap(std::vector<int> &vector, int i, int j){
    int temp = vector[j];
    vector[j] = vector[i];
    vector[i] = temp;
}

/*
Time O(n^2) | Space O(1)
Not Stable
Not Adaptive
*/
std::vector<int> selectionSort(std::vector<int> &vector){
    for(int i=0; i<vector.size(); i++){
        int minIdx = i;
        for(int j=i; j<vector.size(); j++){
            if(vector[j] < vector[minIdx]){
                minIdx = j;
            }
        }
//        swap(vector,i,minIdx);
//        std::cout << "Pass " << i << " = ";
        printVector(vector);
    }
    return vector;
}


int main(int argc, const char * argv[]) {
    std::vector<int> testCase = {1,2,5,-2,10};
    std::cout << "Input = ";
    printVector(testCase);

    std::vector<int> result = selectionSort(testCase);
    std::cout << "Result = ";
    printVector(result);

    return 0;
}
