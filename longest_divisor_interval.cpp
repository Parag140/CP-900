#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll maxi = 0;
        ll count = 0;
        for(int i = 1 ; i <= 1000;i++){
            if(n%i == 0){
                count++;
                if(count>maxi){
                    maxi = count;
                }
            }
            else count = 0;
        }
        cout<<maxi<<endl;
    }
}