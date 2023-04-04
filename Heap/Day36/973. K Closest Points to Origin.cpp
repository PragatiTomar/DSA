class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0;i<points.size();i++)
        {
            int dis=pow(points[i][0],2)+pow(points[i][1],2);//[[9997,9997],[9996,9998]] sqrt of both 
            pq.push({dis,{points[i][0],points[i][1]}});//vector is almost same.since origin is fixed
            if(pq.size()>k) // therefore we can just find distance without square root.
            {             
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            vector<int>temp;
            temp.push_back(pq.top().second.first);
            temp.push_back(pq.top().second.second);
            ans.push_back(temp);
            pq.pop();
        }
        return ans;
        
    }
};
