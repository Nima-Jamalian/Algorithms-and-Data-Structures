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
Stable
Adaptive
*/
std::vector<int> bubbleSort(std::vector<int> &vector){
    bool hasSwapped = false;
    for(int i=0; i<vector.size(); i++){
        hasSwapped = true;
        for(int j=0; j<vector.size()-1-i;j++){
            if(vector[j]>vector[j+1]){
                swap(vector,j,j+1);
                hasSwapped = true;
            }
        }
//        std::cout << "Pass " << i << " = ";
//        printVector(vector);
        if(hasSwapped == false){
            return vector;
        }
    }
    return vector;
}

int main(int argc, char const *argv[])
{
    std::vector<int> testCase = {1,2,5,-2,10};
    std::cout << "Input = ";
    printVector(testCase);

    std::vector<int> result = bubbleSort(testCase);
    std::cout << "Result = ";
    printVector(result);

    return 0;
}

