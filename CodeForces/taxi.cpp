#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0, i = 0;
    sort(arr,arr + n);
    // while(i < n) {
    //     int curr = 0;
    //     bool is_counted = false;
    //     while(curr <= 4 && i < n){
    //         if(curr + arr[i] > 4) break;
    //         if(curr + arr[i] < 4) {curr+=arr[i]; i++;}
    //         else if(curr == 4) {ans++; is_counted = true; break;}
    //     }
    //     if(!is_counted) { ans++; i++;}
    // }
    
    cout << ans << endl;
    return 0;
}