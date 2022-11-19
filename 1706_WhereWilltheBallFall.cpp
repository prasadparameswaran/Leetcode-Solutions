//Approach: Follow each ball through its journey

class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> out;
        int i,j,m,n,prev,a;
        bool horizondal;
        m = grid.size();
        n = grid[i].size();
        for(int ball = 0; ball < n; ball++){
            i=0; j = ball; horizondal = false; prev = 2;
            while(i<m && j < n){
                a = grid[i][j];
                if(horizondal){
                    if(prev == a){
                        horizondal = false;
                        i++;
                        if(i >= m) out.push_back(j); 
                    }else{
                        out.push_back(-1);
                        break;
                    }
                }else{
                    horizondal = true;
                    j += a;
                    if( j <0 || j >= n){
                         out.push_back(-1); 
                         break;
                    }
                }
                prev = a;
            }

        }
        return out;
    }
};