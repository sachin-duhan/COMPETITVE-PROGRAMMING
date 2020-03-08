#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][3];
    int ans = 0;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1)check++;
        }
        if(check >= 2)ans++;
        check = 0;
    }
    cout << ans << endl;
    return 0;
}