#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            int cnt = 0;
            int sum = 0;
            
            for(int i = 1; i*i <= num; i++){
                if(num % i == 0){
                    int d1 = i;
                    int d2 = num/ i;

                    sum += d1;
                    cnt++;

                    if(d1 != d2){
                        cnt++;
                        sum += d2;
                    }
                }

            }
             if(cnt == 4){
                    ans += sum;
                }
        }
        return ans;
    }
};