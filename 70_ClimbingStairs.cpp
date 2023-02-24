// The below solution is based on dynamic programing. Approach is similar to fibonacci series T(n) = O(n). S(n) = O(n) 

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        int DP[n];
        DP[0]=DP[1] = 1;
        for(int i = 2; i < n; i++)
            DP[i] = DP[i-1] + DP[i-2]; 
        return DP[n-1] + DP[n-2];
    }
};

// The below solution is based on breadth first search. Start from 0 and explore all possibilites to reach n. Is exponential in time
/*
class Solution {
public:
    int climbStairs(int n) {
        queue<int> q;
        int currentStep,ans;
        q.push(0);
        ans = 0;
        while(!q.empty()){
            currentStep = q.front();
            q.pop();
            if(currentStep == n){
                ans++;
                continue;
            }
            if(currentStep+1 <= n) q.push(currentStep+1);
            if(currentStep+2 <= n) q.push(currentStep+2);
        }
        return ans;
    }
};
*/