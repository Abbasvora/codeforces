#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v;
    int t, pass=0;
    cin >> t;
    for(int i=0; i<t; i++){
        int x,y;
        cin >> x >> y;
        pass-=x;
        pass+=y;
        v.push_back(pass);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0];
    return 0;
}