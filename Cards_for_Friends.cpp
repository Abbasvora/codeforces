#include<iostream>
using namespace std;

int main(){
    // freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x, y, n, r = 1;
        cin >> x >> y >> n;
        while (x%2==0)
        {
           x/=2;
           r*=2;
        }
         while (y%2==0)
        {
           y/=2;
           r*=2;
        }
        cout << ( r>=n ? "YES\n": "NO\n");
    }
    return 0;
}