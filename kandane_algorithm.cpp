#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector < int > & nums, vector < int > & subarray) {
    int msf = INT_MIN, meh = 0;
    int s = 0;
    for (int i = 0; i < nums.size(); i++) {
        meh += nums[i];
        if (meh > msf) {
            subarray.clear();
            msf = meh;
            subarray.push_back(s);
            subarray.push_back(i);

        }
        if (meh < 0) {
            meh = 0;
            s = i + 1;
        }
    }

    return msf;
}

int main() {
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    vector < int > subarray;
    int lon = maxSubArray(arr, subarray);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    cout << "The subarray is " << endl;
    for (int i = subarray[0]; i <= subarray[1]; i++) {
        cout << arr[i] << " ";
    }

}
