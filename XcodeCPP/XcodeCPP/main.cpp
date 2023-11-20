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

/*
 Time O(n+k) | Space O(k)
 Stable
 Not adaptive
 */
std::vector<int> countingSort(std::vector<int> vector){
    //get the maximum element
    int max = *std::max_element(vector.begin(),vector.end());
    
    //create count vector
    std::vector<int> count(max + 1);
    
    //populate count vector
    for(int i=0; i<vector.size(); i++){
        count[vector[i]]++;
    }
    
    //sort vector
    int vectorIdx = 0;
    for(int i=0; i<count.size(); i++){
        while(count[i] != 0){
            vector[vectorIdx] = i;
            count[i] -=1;
            vectorIdx++;
        }
    }
    return vector;
}


int main(int argc, const char * argv[]) {
    std::vector<int> testCase = {5,1,4,2,8};
    std::cout << "Input = ";
    printVector(testCase);
    
    
    std::vector<int> result = countingSort(testCase);
    std::cout << "Result = ";
    printVector(result);
    return 0;
}
