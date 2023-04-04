class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int  result = 0;
        int sum=0;
    
        unordered_map<int, int> mp;
        
        mp[0]=1;
        for(int i=0; i<nums.size(); i++){
          sum+=nums[i];
          int r=sum%k;
          if(r<0){
            r+=k;
          }
          if(mp.find(r)!=mp.end()){
              result+=mp[r];
          }
          mp[r]++;

        }
      
        
        
return result;
    }  
};
