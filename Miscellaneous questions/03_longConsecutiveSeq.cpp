#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        // Naive Approach
        if(arr.size() == 0) return 0;
        sort(arr.begin(), arr.end());
        int maxLen = 1;
        int count = 1;

        for(int i = 1; i < arr.size(); i++){
            if(arr[i-1] == arr[i]) continue; // skiping duplicates
            if(arr[i] == arr[i-1] + 1) count++;
            else count = 1;
            maxLen = max(maxLen, count);
        }
        return maxLen;
    }
};