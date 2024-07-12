class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()); // most important thing
        int n = intervals.size();
    vector<vector<int>> ans;
        for(int i=0; i< n;i++){

            // for i=0, there is no comparison thats why also when there is only single array
            if(ans.empty()){
                ans.push_back(intervals[i]);
            }
            else{
                vector<int> &v = ans.back();
                int endingValue = v[1];
                // [1,4] [2,6]
                //overlapping case
             if(intervals[i][0] <= endingValue){
                v[1] = max(endingValue, intervals[i][1]);
             }
             
             //Non-overlapping case
             else{
                ans.push_back(intervals[i]);
             }

            }
        }
        return ans;
    }
};