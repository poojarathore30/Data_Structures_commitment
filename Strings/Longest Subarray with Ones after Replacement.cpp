// Problem Statement # Array contains 0s and 1s,Replace no more than ‘k’ 0s with 1s, find the length of the longest contiguous subarray having all 1s.
// Time complexity : O(n)
// Space complexity : O(1)
// solution : sliding window concept
int findLength(const vector<int>& arr, int k) 
{
    int mx=0;
    int count=0;
    int st=0;
    for(int i=0;i<n;i++)
    {
    if(arr[i]==1) count++:
    
    //shrink window
    if(i-st+1-count>k)
    {
    if(arr[st]==1) count--;
    st++;
    }
    mx=max(mx,e-st+1);
    }
    return mx;
}
