// edit distance Dynamic programming solution 

#include <bits/stdc++.h>

using namespace std;

int edit_distance(const string &str1, const string &str2) {
  //write your code here
  int m=str1.length();
  int n=str2.length();
  int arr[m+1][n+1];
  for(int i=0;i<=m;i++) arr[i][0]=i;
  for(int i=0;i<=n;i++) arr[0][i]=i;
  int c1,c2,c3,mm;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=n;j++)
    {
      if(str1[i-1]==str2[j-1])
       arr[i][j]=arr[i-1][j-1];
      else{
        c1=arr[i-1][j];
        c2=arr[i][j-1];
        c3=arr[i-1][j-1];
        mm=min(c1,c2);
        mm=min(mm,c3);
        arr[i][j]=mm+1;
      }
    }
  }
  return arr[m][n];
}

int main() {
  string str1;
  string str2;
cin >> str1 >> str2;
cout << edit_distance(str1, str2) << endl;
  return 0;
}
