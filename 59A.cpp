#include<iostream>
#include<string>
#include<bits/stdc++.h> 

using namespace std;

int main(){
    int u=0, l=0;
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++){
        if(isupper(str[i])){
            u+=1;
        }
        if(islower(str[i])){
            l+=1;
        }
    }
    if(l>=u){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }
    else{        
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    }
    return 0;
}