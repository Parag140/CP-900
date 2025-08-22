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
        int count = 0;
        bool flag = false;

        for(int i = n - 1; i >= 0; i--){
            if(flag && i + 1 < n){
                while(arr[i] >= arr[i + 1]){
                    if(arr[i] == 0){  // cannot reduce anymore
                        count = -1;
                        break;
                    }
                    arr[i] = arr[i] / 2;
                    count++;
                }
            }
            if(count == -1) break; // exit early if impossible

            if(i - 1 >= 0 && arr[i] > arr[i - 1]){
                flag = false;
                continue;
            } else if(i - 1 >= 0 && arr[i] <= arr[i - 1]){
                flag = true;
            }
        }
        cout << count << endl;
    }
}


// 2 8 7 5
// step 1: check 5. now flag is true
//step 2: check 7 and flag is true from past //count = 1 7->3 flag set to true count = 1
//step 3: check 8 and flag is true from past count  = 3 // 8->4->2 flag set to true
// step 4 : check 2 flag was set to true from past // count = 4 // 2->1 i-1<0 so over
// total count = 4