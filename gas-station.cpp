class Solution {
    public boolean check(int[] gas, int[] cost,int index){
        if(gas[index]<cost[index]){
            return false;
        }
        int present=index;
        int capacity=gas[present];
        while(true){
            if(capacity>cost[present]){
                capacity-=cost[present];
                if(present==gas.length-1){
                    present=0;
                }else{
                    present+=1;  
                }
                capacity+=gas[present];
            }else if(capacity==cost[present]){
                if(present==gas.length-1){
                    if(index==0){
                        return true;
                    }
                }else{
                    if(index==present+1){
                        return true;
                    }
                }
                return false;
            }else{
                return false;
            }
            if(present==index){
                break;
            }
        }
        return true;
    }
    public int canCompleteCircuit(int[] gas, int[] cost) {
        for(int i=0;i<gas.length;i++){
            if(check(gas,cost,i)){
                return i;
            }
        }
        return -1;
    }
}