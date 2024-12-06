class Solution {
    public int maxProfit(int[] pr) {
        int re=0;
        int ln=pr.length;
        int min=10000;
        for(int i=0;i<ln;i++){
            if(pr[i]<min){
                min=pr[i];
            }else if(pr[i]>min && pr[i]>pr[i-1]){
                re+=pr[i]-pr[i-1];
            }else if(pr[i]>min && pr[i]<pr[i-1]){
                min=pr[i];
            }
        }
        return re;
        

        
    }
}