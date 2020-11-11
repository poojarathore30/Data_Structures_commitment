// problem : count the number of one's in the bnary representation of the number between 0 and given number
// Input: 5
// Output: [0,1,1,2,1,2]
// right shift by n = num/2 , n times
// ex : right shift by one num>>1 = num/2
// Approach : num=even i.e LSB = 0 i.e after one right shift  set bit is NOT LOST
//            num=odd  i.e LSB = 1 i..e after one right shift one set bit LOST


 vector<int> countBits(int num)
 {
  vector<int> arr(num+1);
  arr[0]=0;
  for(int i=1;i<=num;i++)
  {
    if(i%2==0) v[i]=v[i/2];
    else v[i]=v[i/2]+1;
  }
   return arr;
 }
