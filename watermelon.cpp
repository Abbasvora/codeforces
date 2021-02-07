#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int x;
    cin >> x;
    if( x%2 == 0 && x != 2 ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    } 
    return 0;
}