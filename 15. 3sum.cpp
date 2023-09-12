class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        set<vector<int>> pair;
        for(int i=0; i< (nums.size()-2);i++){
            //if(i>0 && nums[i]==nums[i-1]) continue;
            int first= i+1, second=(nums.size())-1;
            while(first<second){
                
                int sum= nums[i]+ nums[first]+ nums[second];
                //cout<<nums[i]<<','<<nums[first]<<','<<nums[second]<<',,' <<sum<<endl;
                if( sum<0 ) first++;
                else if(sum>0) second--;
                else if(sum==0) {
                    pair.insert({nums[i],nums[first],nums[second]});
                    //res.push_back({nums[i],nums[first],nums[second]});
                    first++;
                    second--;
                }
            }

        }
        for (auto it:pair) res.push_back(it);
        return res;
        
    }
};
