#include<bits/stdc++.h>
using namespace std;
struct trie{
  int we;
  char data;
  trie* child[26];
  trie()
  {
    memset(child, 0, 26);
    we=0;
  }
} *rt;
void insert(string str)
{
  struct trie *curr=rt;
  int ix;
  for( char ch:str)
  {  ix=ch-'a';
    if(!curr->child[ix])
     {
      curr->child[ix]=new trie;
      curr->child[ix]->data=ch;
      }
      curr=curr->child[ix];
  }
  curr->we=1;
}
bool search(string str)
{
  struct trie *curr=rt;
  int ix;
  for( char ch:str)
  {  ix=ch-'a';
    if(!curr->child[ix])
     {
      return false;
      }
      curr=curr->child[ix];
  }
  return curr->we==1;
}
void del(string str)
{
  struct trie *curr=rt;
  int ix;
  for( char ch:str)
  {  ix=ch-'a';
    if(!curr->child[ix])
     {
      cout<<str<<" does not exists , hence cannot get deleted"<<endl;
      return ;
      }
      curr=curr->child[ix];
  }
  curr->we=0;
  cout<<"Deleted successfully"<<endl;
}
int main()
{
  int n;
  freopen("input.txt","r",stdin);

  string str;
  rt=new trie;
  cout<<"enter no of strings to insert into trie"<<endl;
    cin>>n;
  cout<<"enter the strings"<<endl;
  while(n--)
  {
    cin>>str;
    insert(str);
  }
  cin>>n;
  while(n--)
  {
    cin>>str;
    cout<<search(str)<<endl;
  }
  cout<<"enter a string to delete from trie"<<endl;
  cin>>str;
  del(str);
  return 0;
}