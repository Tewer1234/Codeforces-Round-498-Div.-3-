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
int val[1000000];
int in[1000000],out[1000000];
int cur;
vector <int> nodes[1000000];
void dfs(int n){
  int nxt;
  cur++;
  in[n]=cur;
  for (int i=0;i<nodes[n].size();i++){
    nxt=nodes[n][i];
    dfs(nxt);
  }
  out[n]=cur+1;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,q,u,par,k;
  cin>>n>>q;
  for (int i=2;i<=n;i++){
    cin>>u;
    nodes[u].pb(i);
  }
  
  dfs(1);
  // for (int i=1;i<=n;i++) cout<<i<<": "<<"[ "<<in[i]<<" , "<<out[i]<<" )"<<"\n";
  for (int i=1;i<=n;i++) val[in[i]]=i;
  
  // for (int i=1;i<=n;i++) cout<<i<<": "<<val[i]<<"\n";
  for (int i=1;i<=q;i++){
    cin>>par>>k;
    int check=out[par]-in[par];
    if (check<k) cout<<-1<<"\n";
    else{
      int ans=val[in[par]+k-1];
      // cout<<i<<": "<<val[par+k-1]<<"\n";
      cout<<ans<<"\n";
    }
  }
  return 0;
}
