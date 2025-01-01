class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character> comp=new HashMap<>();
        for(int i=0;i<s.length();i++){
            if(!comp.containsKey(s.charAt(i)) && comp.containsValue(t.charAt(i))){
                return false;
            }
            String re=comp.putIfAbsent(s.charAt(i),t.charAt(i))+"";
            if(re.equals("null")){
                continue;
            }else{
                if (re.charAt(0)!=t.charAt(i)){
                    return false;
                }
            }
        }
        return true;
    }
}