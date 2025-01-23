class Solution {
    public void setZeroes(int[][] matrix) {
        boolean firstRow=false;
        boolean firstColumn=false;
        for(int i=0;i<matrix.length;i++){
            if(matrix[i][0]==0){
                firstColumn=true;
                break;
            }
        }
        for(int i=0;i<matrix[0].length;i++){
            if(matrix[0][i]==0){
                firstRow=true;
                break;
            }
        }
        for(int i=1;i<matrix.length;i++){
            for(int j=1;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.length;i++){
            if(matrix[i][0]==0){
                Arrays.fill(matrix[i],0);
            }
        }
        for(int j=1;j<matrix[0].length;j++){
            if(matrix[0][j]==0){
                for(int k=1;k<matrix.length;k++){
                    matrix[k][j]=0;
                }
            }
        }
        if(firstRow==true){
            Arrays.fill(matrix[0],0);
        }
        if(firstColumn==true){
            for(int i=0;i<matrix.length;i++){
                matrix[i][0]=0;
            }
        }

    }
}