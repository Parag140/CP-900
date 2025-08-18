#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};

        set<pair<int,int>> positions;

        // Generate all possible knight positions
        for (int i = 0; i < 8; i++)
            positions.insert({xk + dx[i], yk + dy[i]});
        for (int i = 0; i < 8; i++)
            positions.insert({xq + dx[i], yq + dy[i]});

        int count = 0;
        for (auto [x, y] : positions) {
            if (
                ((x + a == xk && y + b == yk) || 
                 (x + b == xk && y + a == yk) || 
                 (x - a == xk && y - b == yk) || 
                 (x - b == xk && y - a == yk) ||
                 (x + a == xk && y - b == yk) || 
                 (x - a == xk && y + b == yk) || 
                 (x + b == xk && y - a == yk) || 
                 (x - b == xk && y + a == yk))
                &&
                ((x + a == xq && y + b == yq) || 
                 (x + b == xq && y + a == yq) || 
                 (x - a == xq && y - b == yq) || 
                 (x - b == xq && y - a == yq) ||
                 (x + a == xq && y - b == yq) || 
                 (x - a == xq && y + b == yq) || 
                 (x + b == xq && y - a == yq) || 
                 (x - b == xq && y + a == yq))
            ) {
                count++;
            }
        }

        cout << count << endl;
    }
}
