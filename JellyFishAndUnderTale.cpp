#include<iostream>

using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        int i = 0;
        while(i<n){
            cin>>arr[i];
            i++;
        }
        ll count = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[j]>=a){
                count+=a-1;
            }
            else{
                count+=arr[j];
            }
        }
        cout<<count+b<<endl;
    }
}