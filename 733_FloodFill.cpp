//Approach BFS time = O(n), space = O(n)
// DFS can also be applied
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        queue<pair<int,int>> Q;
        
        set<pair<int,int>> visited;
        Q.push(make_pair(sr,sc));
        int val = image[sr][sc];
        
        image[sr][sc] = color;
        while(!Q.empty()){
            pair<int,int> p = Q.front();
            Q.pop();
            auto it = visited.find(p);
            if( it == visited.end()){
                visited.insert(p);
                if(p.first - 1 >-1 && image[p.first-1][p.second] == val){
                    Q.push(make_pair(p.first-1,p.second));
                    image[p.first-1][p.second] = color;
                }
                if(p.first + 1 < image.size() && image[p.first+1][p.second] == val){
                    Q.push(make_pair(p.first+1,p.second));
                    image[p.first+1][p.second] = color;
                }
                if(p.second - 1 >-1 && image[p.first][p.second-1] == val){
                    Q.push(make_pair(p.first,p.second-1));
                    image[p.first][p.second-1] = color;
                }
                if(p.second +1 < image[1].size() && image[p.first][p.second+1] == val){
                    Q.push(make_pair(p.first,p.second+1));
                    image[p.first][p.second+1] = color;
                }
            }
        }
        return image;
    }
};