#include<iostream>

using namespace std;

int main(){
    string str;
    int n, count =0;
    cin >> n;
    cin >> str;
    for(int i = 0; i<n-1; i++){
        if(str[i] == str[i+1]){
            count +=1;
        }
    }
    cout<< count;
    return 0;
}