class Solution {
    public void rotate(int[][] matrix) {
        int len=matrix[0].length;
        int top=0;
        int bottom=len-1;
        int temp=0;
        while(top<bottom){
            for(int i=0;i<len;i++){
                temp=matrix[top][i];
                matrix[top][i]=matrix[bottom][i];
                matrix[bottom][i]=temp;
            }
            top++;
            bottom--;
        }
        for(int row=0;row<len;row++){
            for(int col=row+1;col<len;col++){
                temp=matrix[row][col];
                matrix[row][col]=matrix[col][row];
                matrix[col][row]=temp;
            }
        }

        
    }
}