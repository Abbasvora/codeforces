#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    // freopen("in.txt", "r", stdin);
    int k=0;
    string lst;
    cin >> lst;
    vector<char> temp;
    for (int i=0; i<lst.size(); i++){
        if (lst[i] != '+'){
            temp.push_back(lst[i]);
            k++;
        }
    }
    sort(temp.begin(), temp.end());
    for (int i = 0;i < k;i++)
	{
		if (i == k - 1) {
            cout << temp[i] << endl;
        }
		else {
            cout << temp[i] << "+";
        }
	}
    return 0;
}