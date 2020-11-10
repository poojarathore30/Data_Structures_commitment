// num represented as a string, remove k digits from the number so that the new number is the smallest possible.
// Input: num = "1432219", k = 3
// Output: "1219"
//solution : Using stack to make the graph as flattened as possible 
// approach : pop the top element out of stack if curr ele is smaller and k>0 to fir only the smallest possible into the stack

string removeKdigits(string num, int k) {
 stack<char,int> s;
 
 //inserting the samlllest possible number
 for(auto i:nums) {
 while(s.empty() && k>0 && s.top()>i) 
 { s.pop(); k--; }
 s.push(c);
 }
 
 // removing ele if not fully
 while(k>0)
 { s.pop();  k--; }
 
 // fetching the obtained number
 string str="";
 while(!s.empty())
 { str=s.top()+str; s.pop(); }
 
 //removing leading zeros
int start=0;
while(str[start]=='0') start++;
 
string res=str.substr(start,str.length());
 return res;
 }
