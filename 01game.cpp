#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt0 = 0;
        int cnt1 = 0;
        for(char c:s){
            if(c == '0') cnt0++;
            else if(c == '1') cnt1++;
        }
        int moves = min(cnt0, cnt1)%2;
       if(moves == 1){
        cout<< "DA" << endl;
       }
         else{
          cout<< "NET" << endl;
         }
    }
}