// to return indexes of two ele that sum upto a given val in sorted array
// problem :  find a pair in the array whose sum is equal to the given target.
// Input: [1, 2, 3, 4, 6], target=6
// Output: [1, 3]

// approach 1 : O(n) time complexity ,O(1) space complexity
static pair<int, int> search(const vector<int>& arr, int targetSum,int n) 
{
    int st=0;
    int end=n-1;
    while(st<end)
    {   int sum=arr[st]+arr[end];
        if(sum==targetSum) return make_pair(st,end);
        else if(sum>targetSum) end--;
        else st++;
    }
    return make_pair(-1,-1);
}

// approach 2 : O(n) time complexity ,O(n) space complexity
static pair<int, int> search(const vector<int>& arr, int targetSum,int n) 
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]=i;
    for(in ti=0;i<n;i++)
    {
        int curr=arr[i];
        if(m.find(targetSum-curr)!=m.end()) return make_pair(i,m[targetSum-curr]);
    }
    return make_pair(-1,-1);
}

// approach 3 : O(n^2) time complexity ,O(1) space complexity
static pair<int, int> search(const vector<int>& arr, int targetSum,int n) 
{
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]+arr[j]==targetSum) return make_pair(i,j);
       }
   }
   return make_pair(-1,-1);
}