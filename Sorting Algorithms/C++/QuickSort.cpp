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

int partition(std::vector<int> &vector, int start, int end){
    int pivot = vector[end];//pivot element
    int i = (start - 1);
    
    for(int j = start; j <= end - 1; j++){
        //if current element is smaller than the pivot
        if(vector[j] < pivot){
            i++;//increment index of smaller element
            swap(vector,i,j);
        }
    }
    i++;
    swap(vector, i,end);
    return i;
}

 /*
 Time O(n*logn) | Space O(log n)
 Not stable
 Not adaptive
 */
void quickSort(std::vector<int> &vector, int start, int end){
    if(start < end){
        int p = partition(vector, start, end); //p is partitioning index
        quickSort(vector, start, p-1);
        quickSort(vector, p+1, end);
    }
}


int main(int argc, const char * argv[]) {
    std::vector<int> testCase = {5,1,4,2,8};
    std::cout << "Input = ";
    printVector(testCase);
    
    
    quickSort(testCase,0, static_cast<int>(testCase.size() - 1));
    std::cout << "Result = ";
    printVector(testCase);
    return 0;
}
