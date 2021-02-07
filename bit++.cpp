#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    while (n>0)
    {
        /* code */
        string lst;
        cin >> lst;
        if (lst[1] == '+'){
            count+=1;
        }
        else{
            count-=1;
        }
        n= n-1;
     }
    cout << count;
    return 0;
}