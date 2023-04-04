class Solution {
public:
    int subarraySum(vector<int>& arr, int sum) {
        unordered_map<int,int> mp;
        int count=0;
        int pre=0;
        for(int i=0; i<arr.size(); i++){
            pre+=arr[i];
            if(pre==sum){
                count++;
            }
            if(mp.find(pre-sum)!=mp.end()){
                count+=mp[pre-sum];
            }
            mp[pre]++;
        }
        return count;
    }
};
