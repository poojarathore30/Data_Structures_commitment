//dynamic programming solution to coin chnage problem 
#include <bits/stdc++.h>
using namespace std;
map<int,bool> visited;
int dp_change(int m,int dp[])
{
  if(m==0) return 0;
  if(m<0) return 10;
  if(visited[m]) return dp[m];
  int c1,c2,c3,best=INT_MAX;
  c1=1+dp_change(m-1,dp);
  c2=1+dp_change(m-3,dp);
  c3=1+dp_change(m-4,dp);
  best=min(c1,c2);
  best=min(best,c3);
  dp[m]=best;
  visited[m]=true;
  return best;
}
int get_change(int m) {
  //write your code here
  int dp[m];
  dp[1]=1;
  dp[3]=1;
  dp[4]=1;
  return dp_change(m,dp);
}
int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
