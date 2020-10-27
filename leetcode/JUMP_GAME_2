// cal min jumps needed to reach the end of array
// solution : Greedy Approach 
// input :  [2,3,1,1,4]
// Possible answers : 2->1->1->4 = 3 , 2->3->4 = 2 
// return 2 as it is minimum


int jump(vector<int>& nums) {
        int n=nums.size();
        
        // if starting steps is zero we cannot move further hence return 0
        // if number of elements in array are 1 we are already at the end : No jumps needed
        if(n==1|| nums[0]==0) return 0;
        
        // making the first move 
        int jumps_need=1;
        int curr_pos=nums[0];
        int farthest=nums[0];
        
        for(int i=1;i<n;i++)
        {
           if(i==n-1) return jumps_need;
           
           // reaching the farthest point possible before updating the curr pos 
           farthest=max(farthest,i+nums[i]);
           
           if(i==curr_pos)
           {
               jumps_need++;
               curr_pos=farthest;
           }
        }
        return jumps_need;
        
    }
