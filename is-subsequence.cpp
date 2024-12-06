class Solution {
    public boolean isSubsequence(String s, String t) {
        int ln=s.length();
        int count=-1;
        for(int i=0;i<ln;i++){
            count=t.indexOf(s.charAt(i),count+1);
            if(count==-1){
                return false;
            }
        }
        return true;
        
    }
 }