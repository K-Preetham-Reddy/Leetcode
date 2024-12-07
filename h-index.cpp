import java.util.Arrays;
class Solution {
    public int hIndex(int[] cit) {
        Arrays.sort(cit);
        int ln=cit.length;
        int res=1;
        for(int i=ln-1;i>=0;i--){
            if(res<=cit[i]){
                res+=1;
            }else{
                break;
            }

        }
        return res-1;
    }
}