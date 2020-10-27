//problem : check if you can reach to any index with value 0 from given start value
//Input: arr = [4,2,3,0,3,1,2], start = 5
//Output: true
 
 bool reach(vector<int> &arr,int curr,int count)
    {
     if(curr>n-1) return false;
     if(curr<0) return false;
     if(count>2*n) return false;
      if(arr[curr]==0)
      {
          return true;
      }
     return reach(arr,curr+arr[curr],count+1)|| reach(arr,curr-arr[curr],count+1);
        
    }
    
    bool canReach(vector<int>& arr, int start) {
        n=arr.size();
        if(n==0) return false;
        return reach(arr,start,0);
    }
