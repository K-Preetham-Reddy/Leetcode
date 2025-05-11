class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result=new ArrayList<>();
        String temp="";
        para(n,n,result,temp);
        return result;
    }
    public void para(int left,int right,List<String> result,String temp){
        if(left==0 && right==0){
            result.add(new String(temp));
            return;
        }
        if(left<right){
            temp=temp.concat(")");
            para(left,right-1,result,temp);
            temp=temp.substring(0,temp.length()-1);
        }
        if(left!=0){
            temp=temp.concat("(");
            para(left-1,right,result,temp);
        }
        return;

    }
    
}