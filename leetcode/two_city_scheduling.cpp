//problem : given 2n people and 2 cities 
// we have to divide them into two sets that will be sent to city A and city B resp.
// constraint : Minimize the cost of sending them

// solution : 1) send al the people to city A 
  //          2) now check for the cost of sending them to B . 
  //             Look for the largest N differences and send them to B.
  // if their is profit in sending them to B send them if loss then don't
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
     int sum=0;
        vector<int> v;
       //send all the candidates to city A
        for(auto it =0;it<costs.size();it++)
        {
                sum+=costs[it][0];
             v.push_back(costs[it][0]-costs[it][1]);
        }
        sort(v.begin(),v.end());
        auto i=v.begin();
        int res;
        for(i=i+v.size()/2;i!=v.end();i++)
        {
            res=*i;
            sum-=res;
        }
      
        //now remove the costs of max difference
        return sum;
    }
};