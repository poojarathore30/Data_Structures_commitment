//Problem Statement : Replace no more than ‘k’ letters with any letter, find the length of the longest substring having the same letters after replacement.
//Sliding window concept : Shrinking window size and updating max as the no of diff characters exceed K
// space complexity : O(26)=O(1)
// Time complexity : O(N) ,n=length of string

int LOngestLength(string str,int k)
{
   int maxRepeating=0;
   int maxLen=0;
   //window begin pointer
   int st=0;
   //hashmap to store frequency of repetition
   map<char,int> m;
   //window end pointer
   for(int e=0;e<n;e++)
   {
       m[str[e]]++;
       //updating maxrepeating to max frequency
       maxRepeating=max(maxRepeating,m[str[e]]);
       //if diff characters exceed K shrink window from beginning
       if(e-st+1-maxRepeating>k)
       {
           m[str[st]]--;
           st++;
       }
       maxLen=max(maxLen,e-st+1);
   }
 return maxLen;
}


