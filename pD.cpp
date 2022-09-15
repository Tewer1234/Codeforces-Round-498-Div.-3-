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
int cnt[50005][200];
vector <char> v;
vector <int> amount;
int main(){
  int n,ans=0;
  string a,b;
  cin>>n;
  cin>>a>>b;
  
  
  for (int i=0;i<n/2;i++){
    map <char,int> mp;
    mp[a[i]]++,mp[a[n-i-1]]++;
    mp[b[i]]++,mp[b[n-i-1]]++;
    
    if (mp.size()==4) ans+=2;
    else if (mp.size()==3){
      ans++;
      if (a[i]==a[n-i-1]) ans++;
    }else{
      if (mp.size()==2){
        if (mp[a[i]]!=2) ans++;
      }
    }
  }
  if (n%2!=0 and a[n/2]!=b[n/2]) ans++;
  cout<<ans;
  
  return 0;
}
