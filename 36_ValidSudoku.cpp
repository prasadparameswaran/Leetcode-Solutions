// solution using hash map; 3 maps are used i.e for row colums and grids.Observe how unique key values are generated. 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,bool> rowMap;
        unordered_map<int,bool> clmMap;
        unordered_map<int,bool> gridMap;

        int i,j,num,rowkey,clmkey,gridkey;

        for(i = 0; i < 9 ;i++){
            for(j = 0; j < 9; j++)
            if(isdigit(board[i][j])){
                num = int(board[i][j]-'0');
                rowkey = i*10 + num;
                clmkey = j*10 + num;
                gridkey = 10*(3*(i/3)+ j/3) + num;
                if(rowMap[rowkey]) return false;
                if(clmMap[clmkey]) return false;
                if(gridMap[gridkey]) return false;
                rowMap[rowkey] = true;
                clmMap[clmkey] = true;
                gridMap[gridkey] = true;
            } 
        }
        return true;
    }
};