#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s){
    int i = 0;
    int n = s.size();
    int sign = 1;
    int ans = 0;

    // 1. removing extra white space
    while(i < n && s[i] == ' ') i++;

    // 2. find the sign
    while(i < n && s[i] == '+' || s[i] == '-'){
        sign = (sign == '-')? -1 : 1;
        i++;
    }

    // checking the number

    while(i < n && isdigit(s[i])){
        ans = ans * 10 + (s[i] - '0');

        if(sign == -1 && -ans < INT_MIN) return INT_MIN;
        if(sign == 1 && ans > INT_MAX) return INT_MAX;

        i++;
    }
    return ans;
}

int main(){
    string str = " -042";
    return  myAtoi(str);
}