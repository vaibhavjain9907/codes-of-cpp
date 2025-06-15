class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans = 0;
        for(int i = 0 ; i<size ; i++){
            ans = ans^arr[i];
        }
    
    }
    return ans;
    
};