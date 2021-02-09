#include<iostream>

using namespace std;

int main(){
    int l, b,count=1;
    cin >> l >> b;
    while(1){
        l = l * 3;
        b = b * 2;
        if(l>b){
            cout << count;
            return 0;
        }
        count+=1;
    }
    return 0;
}