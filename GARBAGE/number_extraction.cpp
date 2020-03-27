#include<iostream>
using namespace std;
int main(){
int n = 1219;
int temp = n,len = 0;
while(temp>0){len++; temp/=10;}
cout << "number is" << n << endl;
for(int i=0;i<len;i++){
cout << n%10 << endl;
n/=10;
}
return 0;
}
