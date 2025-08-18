#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++) cin >> arr[i];

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        sort(arr.begin(), arr.end());
        ll maxi = 1, count = 1;

        for(ll i = 1; i < n; i++) {
            if(arr[i] - arr[i-1] <= k) {
                count++;
                maxi = max(maxi, count);
            } else {
                count = 1;
            }
        }

        cout << n - maxi << endl;
    }
}
