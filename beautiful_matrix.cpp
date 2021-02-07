#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> vect;
    int x,y, count=0;
    for (int i=0; i<5; i++){
        vector<int> temp;
        for (int j=0; j<5; j++){
            int k;
            cin >> k;
            temp.push_back(k);
        }
    vect.push_back(temp);
    }
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++){
            if (vect[i][j]==1){
                x=i;
                y=j;
            }
        }
    }    
    if (x>2){
        count += x-2;
    }
    else if (x<2){
        count+= 2-x;
    }
    if (y>2){
        count += y-2;
    }
    else if (y<2){
        count+= 2-y;
    }
    cout << count;
    return 0;
}
