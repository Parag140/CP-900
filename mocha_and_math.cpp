#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = 0;
        for(int i = 31; i >= 0; i--){
            int cnt = (arr[0] >> i) & 1;   // only i-th bit
            for(int j = 1; j < n; j++){
                cnt &= (arr[j] >> i) & 1;
            }
            if(cnt) ans |= (1 << i);  // set this bit in answer
        }
        cout << ans << endl;
    }
}
