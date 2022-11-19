// solved using dynamic programing. If  face of one of the dice is fixed then remaining sum = sum-face to be obtained  from n-1 dice. 

int numRollsToTarget(int n, int k, int target){
    int **p;
    int i,j,f,ans;
    p = malloc((n+1)*sizeof(int *));
    for (i = 0; i <= n;i++){
        p[i] = malloc((target+1)*sizeof(int));
    }

    for (i = 0; i<=n; i++){
        for(j=0; j<= target; j++){
            p[i][j] = 0;
        }
    }


    p[0][0] = 1;

    for (i = 1; i <= n; i++){

        for(j = 1; j <= target; j++){
            for (f = 1; f<=k; f++){
                if((j-f)>=0){
                    p[i][j] = (p[i][j]+p[i-1][j-f])%1000000007;                 
                }
            }
        }
    }
    ans = p[n][target];
    free(p);
    return ans;
}