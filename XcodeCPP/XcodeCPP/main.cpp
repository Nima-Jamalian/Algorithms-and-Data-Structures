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

//bool isBalance(string s){
//    if(s.length() % 2 != 0){
//        return false;
//    } else {
//        stack<char> stack;
//        for(int i=0; i<s.length(); i++){
//            if(s.at(i) == '{'){
//                stack.push('}');
//            } else if (s.at(i) == '['){
//                stack.push(']');
//            } else if (s.at(i) == '('){
//                stack.push(')');
//            } else {
//                if(stack.empty() || stack.top() != s.at(i)){
//                    return false;
//                }
//                stack.pop();
//            }
//        }
//        return stack.empty();
//    }
//}
//
//bool isBalance(string s){
//    if(s.length() % 2 != 0){
//        return false;
//    } else {
//        vector<char> vector;
//        for(int i=0; i<s.length(); i++){
//            char value = s.at(i);
//            if(value == '{'){
//                vector.push_back('}');
//            } else if (value == '['){
//                vector.push_back(']');
//            } else if (value == '('){
//                vector.push_back(')');
//            } else {
//                if(vector.empty() || vector.back() != value){
//                    return false;
//                }
//                vector.pop_back();
//            }
//        }
//        return vector.empty();
//    }
//}

bool isBalance(string s){
    if(s.length() % 2 != 0){
        return false;
    } else {
        vector<char> vector;
        for(int i=0; i<s.length(); i++){
            char value = s.at(i);
            switch (value) {
                case '{':
                    vector.push_back('}');
                    break;
                case '[':
                    vector.push_back(']');
                    break;
                case '(':
                    vector.push_back(')');
                    break;
                default:
                    if(vector.empty() || vector.back() != value){
                        return false;
                    }
                    vector.pop_back();
                    break;
            }
        }
        return vector.empty();
    }
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
