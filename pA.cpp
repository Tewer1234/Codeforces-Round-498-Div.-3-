#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
#include <bits/stdc++.h>
#include <iomanip>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#define ll long long int 
#define pb push_back
#define inf 0x3f3f3f3f
#define SIZE 400005
using namespace std;
typedef pair<int,int> pp;
int ary[1000000];
int dp[2005][2005];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n,k,cnt=0;
  map <int,int> mp;
  cin>>n;
  for (int i=1;i<=n;i++){ cin>>ary[i];if (ary[i]%2==0) ary[i]--;}
  
  for (int i=1;i<=n;i++) cout<<ary[i]<<" ";
  return 0; 
}
