#include<bits/stdc++.h>
using namespace std;



class Solution {
    // Function to find the leaders in the array.
    // TLE
    // private:
    // int rightMostMax(int start, int end, vector<int>&arr){
    //     int maxi = *max_element(arr.begin() + start, arr.end());
    //     return maxi;
    // }
  public:
    vector<int> leaders(vector<int>& arr) {
        // // Code here
        // vector<int>ans;
        // for(int i = 0; i < arr.size(); i++){
        //     if(arr[i] >= rightMostMax(i, arr.size(), arr)){
        //         ans.push_back(arr[i]);
        //     }
        // }
        // return ans;
        
        vector<int>ans;
        int n = arr.size();
        
        int maxi = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] >= maxi){
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};