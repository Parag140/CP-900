#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if((b-a) == (c-b)) {
            cout<< "YES" << endl;
            continue;
        }
        if((a+c)%(2*b) == 0) {
            cout << "YES" << endl;
            continue;
        } 
        if((2*b-a)>0){
            if((2*b-a)%c == 0) {
                cout << "YES" << endl;
                continue;
            } 
        }
        if(2*b-c>0){
            if((2*b-c)%a == 0) {
                cout << "YES" << endl;
                continue;
            } 
        }
        cout << "NO" << endl;
    }
    return 0;
}
