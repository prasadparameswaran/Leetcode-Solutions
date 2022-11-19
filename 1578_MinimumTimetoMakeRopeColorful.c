int minCost(char * colors, int* neededTime, int neededTimeSize){
    int t,i;
    t = 0;

    for (i = 0; i < (strlen(colors))-1 ; i++){
        if (colors[i]==colors[i+1]){
            if(neededTime[i] <= neededTime[i+1]){
                t += neededTime[i];
            } else{
                t += neededTime[i+1];
                //int temp = neededTime[i+1];
                neededTime[i+1] = neededTime[i];
                //neededTime[i] = temp;
            }
        }
    }
    return t;
}