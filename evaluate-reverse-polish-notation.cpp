class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> st=new Stack<>();
        int first=0;
        int second=0;
        for(String c: tokens){
            if(c.equals("+")){
                st.push(st.pop()+st.pop());
            }else if(c.equals("-")){
                second=st.pop();
                first=st.pop();
                st.push(first-second);
            }else if(c.equals("*")){
                st.push(st.pop()*st.pop());
            }else if(c.equals("/")){
                second=st.pop();
                first=st.pop();
                st.push(first/second);
            }else{
                st.push(Integer.parseInt(c));
            }
        }
        return st.peek();

    }
}