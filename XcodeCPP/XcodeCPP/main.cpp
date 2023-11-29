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

//Time O(n) | Space O(1)
int linearSearch(vector<int> vector, int key){
    for(int i=0; i<vector.size(); i++){
        if(vector[i] == key){
            return i;
        }
    }
    return  -1;
}


int main(int argc, const char * argv[]) {
    vector<int> input = {2,3,1,5,6,10};
    int key = 5;
    int result = linearSearch(input, key);
    
    if(result == -1){
        cout << "Element is not present in vector" << endl;
    } else {
        cout << "Element is present at index " << result <<endl;
    }
    
//    cout << "Input = ";
//    printVector(inputVector);
//    
//    
//    cout << "Result = ";
//    printVector(inputVector);
    return 0;
}
