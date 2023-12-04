#include <iostream>
#include <stack>
#include <map>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stack;
using std::map;

void printVector(vector<char> &vector){
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

void swap(vector<int> &vector, int i, int j){
    int temp = vector[j];
    vector[j] = vector[i];
    vector[i] = temp;
}

int findKthPositive(vector<int> &vector, int k){
    int missingNumCount = 0;
    int diff = vector[0] - 1;
    int currentMaxValue = 1;
    
    for(int i=0; i<vector.size();i++){
        if(vector[i] - diff != currentMaxValue++){
            missingNumCount ++;
        }
        
        if(missingNumCount == k){
            return currentMaxValue;
        }
    }
    
    

    return  currentMaxValue;
}


int main(int argc, const char * argv[]) {
    vector<int> input = {2,3,4,7,11};
    int k = 1;
    
    int result = findKthPositive(input, k);
    cout << result << endl;
    
//    cout << "Input = ";
//    printVector(inputVector);
//    
//    
//    cout << "Result = ";
//    printVector(inputVector);
    return 0;
}
