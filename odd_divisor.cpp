#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        //we have to check wheter the last bit is on or off
        // agar kuch 2 ki power me nahi hoga to uska odd divisor exist karega hi
        int count = 0;
        for(int i = 0 ; i < 32 ; i++){
            if(n<<i == 1) count++;
        }
        if(count == 1) {
            cout << "NO" << endl; // only one bit is set, means it's a power of 2
        } else {
            cout << "YES" << endl; // more than one bit is set, odd divisors exist
        }
    }
}