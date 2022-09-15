#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#define ll long long int
#define pb push_back
using namespace std;
typedef pair <int,int> pp;
int ary[1000000];
int res[1000000],pos[1000000];
bool comp(int a,int b){
  return a>b;
}
int main(){
  int n,k;
  map <int,int> mp;
  cin>>n>>k;
  for (int i=1;i<=n;i++) cin>>ary[i],res[i]=ary[i];
  
  sort(ary+1,ary+n+1,comp);
  int ans=0;
  for (int i=1;i<=k;i++){
    ans+=ary[i];
    mp[ary[i]]++;
    int temp=1;
    for (int j=1;j<=n;j++){
      if (res[j]==ary[i]){
        if (temp==mp[ary[i]]){
          pos[i]=j;
          break;
        }else{
          temp++;
        }
      }
    }
  }
  
  sort(pos+1,pos+k+1);
  cout<<ans<<"\n";
  pos[k]=n;
  for (int i=1;i<=k;i++) cout<<pos[i]-pos[i-1]<<" ";
  return 0;
}
