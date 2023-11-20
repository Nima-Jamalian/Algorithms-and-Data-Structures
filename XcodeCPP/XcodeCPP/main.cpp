#include <iostream>
#include <map>
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


int main(int argc, const char * argv[]) {
    std::map<std::string, int> map;
    map["Nima"] = 28;
    map["Jack"] = 28;
    if(map.find("Jack") == map.end()){
        std::cout << "Jack was not in map" << std::endl;
    }
    
    std::cout << "Nima -> "  << map["Nima"] << std::endl;
    std::cout << "Jack -> "  << map["Jack"] << std::endl;
    return 0;
}
