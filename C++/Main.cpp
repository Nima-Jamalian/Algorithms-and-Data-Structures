#include<iostream> //input and output
#include<vector>//array list
#include<unordered_map>//hash map
#include<algorithm>//algorithms like sorting
using namespace std; //importing standard library

bool cmp(pair<char,int> &a, pair<char,int> &b){
    return a.second > b.second;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    string message = "Hello, World!";
    unordered_map<char,int> map;
    for(int i=0; i<message.size();i++){
        map[message[i]]+=1;
        // cout << message[i] << "\n";
    }
    // for(auto i:map){
    //     cout << i.first << " "<< i.second << "\n";
    // }
    vector<pair<char,int>> mapToVec(map.begin(),map.end());
    sort(mapToVec.begin(),mapToVec.end(),cmp);

    for(auto &i:mapToVec){
        cout << i.first << " "<< i.second << "\n";
    }
    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << "You have entered: " << name << endl;
    /* code */
    return 0;
}
