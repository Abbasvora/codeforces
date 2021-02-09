#include<iostream>
#include<string>
using namespace std;

int main(){
   string v;
   int n, t;
   cin >> n >> t;
   if(n==1){
       char k;
       cin >> k;
       cout << k;
       return 0;
   }
   cin >> v;
   while (t--)
   {
       /* code */
       for(int i=0; i< v.size(); i++){
        if(v[i+1] > v[i]){
            v[i] = 'G';
            v[i+1] = 'B';
            i++;
       }
      }
   }
   
   for(int i=0; i<v.size(); i++){
       cout << v[i];
   }
   return 0;
}