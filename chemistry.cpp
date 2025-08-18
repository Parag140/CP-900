#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }
        int oddCount = 0;
        for (auto pair : freq)
        {
            if (pair.second % 2 != 0)
            {
                oddCount++;
            }
        }
        if (oddCount > k + 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
