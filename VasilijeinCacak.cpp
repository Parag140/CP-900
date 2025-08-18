#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long sumk = k * (k + 1) / 2;
        long long totalSum = n * (n + 1) / 2;
        long long remainingSum = totalSum - (n-k+1) * (n-k) / 2;
        if(x<= remainingSum && x >= sumk){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}