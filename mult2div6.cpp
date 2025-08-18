#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        if(n == 1){
            cout << "1" << endl;
            continue;
        }
        while(n!=1){
            if(n%6 == 0) n = n/6;
            else{
                n*=2;
            }
            if
            count++;
        }
        cout << count << endl;
    }
}