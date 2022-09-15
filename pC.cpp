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
ll ary[1000000];
ll psum[1000000];
int main(){
  int n;
  cin>>n;
  for (int i=1;i<=n;i++) cin>>ary[i];
  for (int i=1;i<=n;i++) psum[i]=psum[i-1]+ary[i];
  
  ll ans=0;
  for (int i=1;i<=n;i++){
    ll a=psum[i],temp=0;
    ll total=psum[n];
    int l=i+1,r=n,mid;
    ll dif;
    while (l<=r){
      mid=(l+r)/2;
      dif=total-a-(psum[mid]-a);
      if (dif==a){
        temp=mid;
        break;
      }else if (dif>a) l=mid+1;
      else r=mid-1;
    }
    
    if (temp>=1) temp=a;
    if (a==total-a) temp=max(temp,a);
    
    ans=max(ans,temp);
  }
  cout<<ans;
  return 0;
}
