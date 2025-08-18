#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<"YES"<<endl;
            continue;
        }
        while(n!=1){
            if(n%2!=0){
                cout<<"YES"<<endl;
                break;
            }
            n/=2;
        }
        cout<<
    }
}