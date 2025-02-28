class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> result=new ArrayList<>();
        comb(k,n,result,new ArrayList<>(),0);
        return result;
    }
    public void comb(int k,int n,List<List<Integer>>result,List<Integer> temp,int start){
        if(k==0 && n==0){
            result.add(new ArrayList<>(temp));
            return;
        }
        if(k<0 || n==0){
            return;
        }
        for(int i=start+1;i<=9;i++){
            temp.add(i);
            comb(k-1,n-i,result,temp,i);
            temp.remove(temp.size()-1);
        }
        return;
    }
}