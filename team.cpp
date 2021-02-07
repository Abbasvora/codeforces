#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int x, count = 0;
    cin >> x;
    while (x>0)
    {
        /* code */
        int p,v,t;
        cin >> p >> v >> t;
        if (p + v + t >= 2){
            count+=1;
        }
        x -= 1;
    }
    cout << count << endl;
    return 0;
}