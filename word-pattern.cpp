class Solution {
    public boolean wordPattern(String pattern, String s) {
         String[] words= s.split(" ");
         HashMap<Character,String> map=new HashMap<>();
         if(pattern.length()!=words.length){
            return false;
         }
         for(int i=0;i<pattern.length();i++){
            if(map.containsKey(pattern.charAt(i))){
                if(!map.get(pattern.charAt(i)).equals(words[i])){
                    return false;
                }
            }else if(map.containsValue(words[i])){
                return false;
            }else{
                map.put(pattern.charAt(i),words[i]);
            }
         }
         return true;
    }
}