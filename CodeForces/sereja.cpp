#include<iostream>
#include<vector>
using namespace std;
#define loop(i,a,n) for(auto i=a;i<n;i++)
int input(){int n;cin >> n;return n;}

bool check(int num,int *arr,int i,int size){
    loop(i,0,size)
        if(arr[i] == num)return false;
    return true;
}

int main(){
    int n=input(),m=input();
    int arr[n];
    loop(i,0,n) arr[i] = input();
    vector<int> ans(n,0);
    int nums[n];
    loop(i,0,m){
        int a,count = 0;
        cin >> a;
        loop(i,a,n){
            if(!check(arr[i],nums,i,n)){
                ans.push_back(nums[i]);
                count += ans[i] + 1;
            }
        }
    }
    return 0;
}