#include<iostream>
using namespace std;
int main(){
    int t, even=0, odd=0, e=0, o=0;
    cin >> t;
    for(int i=0; i<t; i++){
        int x;
        cin >> x;
        if(x%2==0){
            even+=1;
            e = i;
        }
        else{
            odd+=1;
            o = i;
        }
    }
    if(even>odd){
        cout << o+1;
    }
    else{
        cout << e+1;
    }
    return 0;
}
