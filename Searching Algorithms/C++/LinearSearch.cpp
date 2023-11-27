#include <iostream>
using std::cout;
using std::endl;
using std::vector;

//Time O(n) | Space O(1)
int linearSearch(vector<int> vector, int key){
    for(int i=0; i<vector.size(); i++){
        if(vector[i] == key){
            return i;
        }
    }
    return  -1;
}

int main(int argc, char const *argv[])
{
    vector<int> input = {2,3,1,5,6,10};
    int key = 5;
    int result = linearSearch(input, key);
    
    if(result == -1){
        cout << "Element is not present in vector" << endl;
    } else {
        cout << "Element is present at index " << result <<endl;
    }
    return 0;
}
