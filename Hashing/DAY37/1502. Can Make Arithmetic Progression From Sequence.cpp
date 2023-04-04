class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n=arr.size();
         int &a = *min_element(arr.begin(), arr.end());
        int &an = *max_element(arr.begin(), arr.end());
        
        unordered_map<int,int> map;
        for(int i = 0 ; i <n; i++) map[arr[i]]++;
        
        int d = (an - a)/(n-1);
        
        for(int i=0 ; i< n; i++)
            if(map.find(a+ (i*d))==map.end()) return false;
            else{ map[a+ (i*d)]--;
            if(map[a+ (i*d)]==0) map.erase(a+ (i*d));
            }
        return true;
    }
};
