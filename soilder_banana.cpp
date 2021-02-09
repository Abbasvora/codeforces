#include<iostream>
using namespace std;
int main(){
    int p, m, n;
    cin >> p >> m >> n;
    int sum=0;
    for(int i=1; i<=n; i++){
        sum = sum + (i*p);
    }
    if(m>=sum){
        cout << 0;
        return 0;
    }
    else{
        cout << sum-m;
    }
    return 0;
}