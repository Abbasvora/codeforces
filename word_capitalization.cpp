#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string str;
    cin >> str;
    str[0] = toupper(str[0]);
    cout << str << endl;
    return 0;
}
