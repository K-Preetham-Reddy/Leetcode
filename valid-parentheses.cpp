class Solution {
    public boolean isValid(String s) {
        Stack<Character> opp=new Stack<>();
        Character c=null;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
                opp.push(')');
            }else if(s.charAt(i)=='{'){
                opp.push('}');
            }else if(s.charAt(i)=='['){
                opp.push(']');
            }else if(s.charAt(i)==')'&&( opp.size()==0 || opp.pop()!=')')){
                return false;
            }else if(s.charAt(i)=='}'&&( opp.size()==0 || opp.pop()!='}')){
                return false;
            }else if(s.charAt(i)==']'&&( opp.size()==0 || opp.pop()!=']')){
                return false;
            }
        }
        if(opp.size()==0){
                return true;
            }
            return false;
    }
}