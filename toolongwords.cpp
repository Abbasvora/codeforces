#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int x;
    cin >> x;
    while (x>0){
    string test;
    cin >> test;
    if (test.size() > 10){
        cout << test[0]<< test.size()-2 << test[test.size()-1] << endl;
    }
    else{
        std::cout << test << std::endl;
    }
    x-=1;
    }
    return 0;
}