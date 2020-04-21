#include<bits/stdc++.h>
using namespace std;
#define n 256
char NonrepeatingCharacter(string str) {
  pair<int,int> v[n];
  for(int i=0;i < str.length();i++){
    (v[str[i]].first)++;
    if(v[str[i]].first == 1) v[str[i]].second = i;
  }
  int index = INT_MAX;
  for(auto itr : v){
    if(itr.first == 1){
      index = min(index,itr.second);
    }
  }
  return str[index];
}

int main(void) { 
  cout << NonrepeatingCharacter("aabc");
  return 0;
}