class Solution {
 public:
 vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    unordered_map<int, int> m;
    sort(nums.begin(), nums.end());    
    
    int n = nums.size();
    
    if (n < 3) return {}; 
    if (nums[0] > 0) return {}; 
    
    for (int i = 0; i < n; i++)
        m[nums[i]] = i;
    
    for (int i = 0; i < n - 2; i++) {
        if (i != 0 && nums[i] == nums[i - 1]) continue;
        if (nums[i] > 0) return ans;
        
        for (int j = i + 1; j < n - 1; j++) {
            
            if (j != i + 1 && nums[j] == nums[j - 1]) continue; // update j to avoid duplicate triplets
            
            int key = -(nums[i] + nums[j]);
            if (m.find(key) != m.end() && m[key] > j) // check the index of key > j, so we dont count any duplicate element
                ans.push_back({nums[i], nums[j], key});
        }
    }
    return ans;
}
