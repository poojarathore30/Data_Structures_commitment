//Problem sttaement : given array of int return the largets possible time according to a digital clock that can be formed using the elements of array 
class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
    
        int n=arr.size();
        //return empty string if time is not possible edge case
        
        string res="";
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
              for(int k=0;k<n;k++)
              {
               if(i==j || j==k || i==k) continue;
                  string hh=to_atring(arr[i])+to_string(arr[j]);
                  string mm=to_atring(arr[k])+to_string(arr[6-i-j-k]);
                  string time=hh+":"+mm;
                  //check if time is genuine
                  if(hh<"24"&& mm<"60" )
                  { //update res if new time is largest
                    if(time>res) res=time;  
                  }
               } 
           }
       }
        return res;
    }
};
