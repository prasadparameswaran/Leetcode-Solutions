//Greedy approach is used. Sort the trees based on grow time 
typedef struct node{
            int growtime;
            int planttime;
        } Node;

class Solution {
public:
    static bool sortfun(Node i, Node j){
        return (i.growtime > j.growtime);
            
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int out = 0; 
        int n = plantTime.size(); int endtime;
        Node seeds[n];

        for(int i = 0; i < n; i++){
            seeds[i].planttime = plantTime[i];
            seeds[i].growtime = growTime[i];
        }
        
        sort(seeds, seeds + n, sortfun);

        out = 0;
        int startdate =0;
        for(int i = 0; i < n; i++){
            endtime = startdate +seeds[i].planttime+seeds[i].growtime;
            startdate += seeds[i].planttime;
            if(endtime>out) out = endtime;
        }

        return out;
    }
};