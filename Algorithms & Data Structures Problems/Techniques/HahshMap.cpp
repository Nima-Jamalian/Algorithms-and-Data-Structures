#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

bool cmp(pair<char,int> &a, pair<char,int> &b){
    return a.second > b.second;
}

int main()
{
    string message = "HelloWorld";
    unordered_map<char,int> map;
    for(int i=0; i<message.size(); i++){
        map[message[i]] += 1;
    }
    // for(auto &i: map){
    //     cout << i.first << " " << i.second << "\n";
    // }
    vector<pair<char,int>> mapToVec(map.begin(),map.end());
    sort(mapToVec.begin(),mapToVec.end(),cmp);
    for(auto &i: mapToVec){
        cout << i.first << " " << i.second << "\n";
    }
    /* code */
    return 0;
}
