#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y, i, j;
        cin >> x >> y >> i >> j;

        vector<pair<int,int>> pp = {{x,1}, {x,y}, {1,y}};
        pair<int,int> maxi = {1,1};

        for(int k = 0; k < 3; k++) { 
            if(abs(i - pp[k].first) + abs(j - pp[k].second) > abs(i - maxi.first) + abs(j - maxi.second)) {
                maxi = pp[k]; 
            }
        }

        int newx = 0, newy = 0;
        if(maxi.first > 1) newx = 1;
        else newx = x;
        if(maxi.second > 1) newy = 1;
        else newy = y;

        cout << newx << " " << newy << " " << maxi.first << " " << maxi.second << endl;
    }
}
