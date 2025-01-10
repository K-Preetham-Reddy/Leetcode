class Solution {
    public int num(char c){
        if(c=='I') return 1;
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    public int romanToInt(String s) {
        int value=0;
        int int1=0;
        int int2=0;
        int i=0;
        if(s.length()==1){
            return num(s.charAt(0));
        }
        while(i<s.length()){
            int1=num(s.charAt(i));
            int2=num(s.charAt(i+1));
            if(int2>int1){
                value+=(int2-int1);
                i++;
            }else{
                value+=int1;
            }
            i++;
            if(i==s.length()-1){
                value+=num(s.charAt(i));
                i++;
            }  
        }
        return value;
    }
}