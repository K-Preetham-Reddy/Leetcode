class Solution {
    public String convert(String s, int numRows) {
        if(s.length()<=numRows|| numRows==1){
            return s;
        }
        List<Character>[] str= new ArrayList[numRows];
        for(int i=0;i<numRows;i++){
            str[i]= new ArrayList<>();
        }
        int index=0,next=1;
        for(char c:s.toCharArray()){
            str[index].add(c);
            if(index==0){
                next=1;
            }else if(index==numRows-1){
                next=-1;
            }
            index+=next;
        }
        StringBuffer result = new StringBuffer();
        for(List<Character> row: str){
            for(char c: row){
                result.append(c);
            }
        }
        return result.toString();
        
        
    }
}