class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        HashMap<Character,Integer> ran=new HashMap<>();
        for(int i=0;i<ransomNote.length();i++){
            char temp=ransomNote.charAt(i);
            ran.putIfAbsent(temp,0);
            ran.put(temp,ran.get(temp)+1);
        }
        for(int i=0;i<magazine.length();i++){
            char temp=magazine.charAt(i);
            if(ran.containsKey(temp)){
                if(ran.get(temp)>0){
                    ran.put(temp,ran.get(temp)-1);
                }
                if(ran.get(temp)==0){
                    ran.remove(temp);
                }
            }
        }
        if(ran.isEmpty()){
            return true;
        }
        return false;
        
    }
}