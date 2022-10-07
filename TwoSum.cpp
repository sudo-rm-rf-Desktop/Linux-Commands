#include<bits/stdc++.h>

using namespace std;

//two pointer solution
vector<int> twoSum(vector<int>& nums, int target) {
    int front = 0, rear = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while(front < rear) {
      int sum = nums[front] + nums[rear];
      if (sum == target)
        break;
      else if (sum > target)
        rear--;
      else
        front++;
    }
    return {front, rear};
};

//brute force solution
vector<int> twoSum(vector<int>& nums, int target) {
    int len = nums.size();
    for(int i = 0; i < len; i++) {
        for(int j = i + 1; j < len; j++) {
            if(nums[j] == target - nums[i])
                return { i, j };
        }
    }
    return {-1, -1};
};
// hash map solution
vector<int> twoSum(vector<int>& nums, int target) {
      map<int, int> map;
      vector<int> pairs;
      for(int i = 0; i < nums.size(); i++) {
          int complement = target - nums[i];
          if(map.find(complement) != map.end()) {
              pairs.push_back(map.find(complement)->second);
              pairs.push_back(i);
              break;
          }
          map.insert(pair<int, int>(nums[i], i));
      }
      return pairs;
};

int main() {
  vector<int>nums = {1,4,3,6,5,8};
  vector<int>pair = twoSum(nums,4);
  cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
  return 0;
}
