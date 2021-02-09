#include<iostream>

using namespace std;

int main(){
    int num, x;
    cin >> num >> x;
    for(int i=0; i<x; i++){
        if(num%10==0){
            num/=10;
        }        
        else{
            num-=1;
        }
    }
    cout << num;
    return 0;
}