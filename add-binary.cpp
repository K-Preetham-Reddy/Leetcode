class Solution {
    public String addBinary(String a, String b) {
        char[] arr1= a.toCharArray();
        char[] arr2=b.toCharArray();
        int len1=arr1.length-1;
        int len2=arr2.length-1;
        int carry=0;
        StringBuffer result=new StringBuffer();
        while(len1>=0|| len2>=0 || carry>0){
            int a1= len1>=0?arr1[len1]-'0':0;
            int b1= len2>=0?arr2[len2]-'0':0;
            int sum=a1+b1+carry;
            int digit=sum%2;
            carry=sum/2;
            len1--;
            len2--;
            result.append((char)(digit+'0'));
        }
        return result.reverse().toString();
    }
}