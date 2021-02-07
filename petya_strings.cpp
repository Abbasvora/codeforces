#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int solve(string x, string y){
    int out;
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    transform(y.begin(), y.end(), y.begin(), ::tolower);
    out = (x>y) ? 1:((x<y)?-1:0);
    return out;
}

int main(){
    string x, y;
    cin >> x >> y;
    cout << solve(x, y);
    return 0;
}