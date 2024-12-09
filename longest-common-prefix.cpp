class Solution {
    public String longestCommonPrefix(String[] strs){
        for(int i=0;i<=200;i++){
            if(check(i,strs)){
                continue;
            }else{
                return strs[0].substring(0,i-1);
            }

        }
        return strs[0];
    }
    public boolean check(int index,String[] strs){
        try{
            String temp=strs[0].substring(0,index);
            for(String str:strs){
                if(!str.substring(0,index).equals(temp)){
                    return false;
                }
            }
            return true;
        }catch(StringIndexOutOfBoundsException e){
            return false;
        }
        
    }
}