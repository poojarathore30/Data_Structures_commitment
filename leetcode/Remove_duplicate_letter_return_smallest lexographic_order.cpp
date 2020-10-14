// Problem statement : Remove all the duplicate characters from the string in such a way that the returned string is the smallest possibly lexographically arranged 
// Example : Input :: "acbac"
//           Output :: "abc" and not ("acb","bac", "cab","bca","cba")

#pragma GCC "Ofast"
class Solution {
public:
    string removeDuplicateLetters(string s) {
        string str="";
        int len=s.length();
        map<char,bool> visited;
        map<char,int> last_index;
        for(int i=0;i<len;i++)   last_index[s[i]]= i;
        stack<char> stk;
        for(int i=0;i<len;i++)
        {
          if(visited[s[i]]==true) continue;
          else
          {
            if(stk.empty()) {stk.push(s[i]); visited[s[i]]=true;}
            else{
            // feed elements in stack in lexographical order and pop untill requirement not met 
                while(!stk.empty() && last_index[stk.top()]>i && s[i]<stk.top()  )
                    { 
                        visited[stk.top()]=false;  stk.pop();
                    }
                    stk.push(s[i]);
                    visited[s[i]]=true; 
            }
          }
        }
        while(!stk.empty())
        {   char ss=stk.top();
            str=ss+str;
            stk.pop();
        }
        
        return str; 
    }
};
