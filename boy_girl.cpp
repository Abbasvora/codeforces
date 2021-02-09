#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
using namespace std;

int main(){
    vector<char> v;
    string str;
    cin >> str;
    for(int i=0; i<str.size(); i++){
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end());
    auto temp = unique(v.begin(), v.end());
    v.erase(temp, v.end());
    cout << ((v.size()%2!=0) ? "IGNORE HIM!": "CHAT WITH HER!");
    return 0;
}