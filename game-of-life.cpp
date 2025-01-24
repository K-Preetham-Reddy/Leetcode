class Solution {
    public void gameOfLife(int[][] board) {
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                int che=check(i,j,board);
                if(board[i][j]==0 && che==3) board[i][j]=15;
                if(board[i][j]==1 && (che!=3 && che!=2) ) board[i][j]=31; 
            }
        }
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                if(board[i][j]==15) board[i][j]=1;
                else if(board[i][j]==31) board[i][j]=0;
            }
        }
    }
    public int check(int r,int c,int[][] board){
        int sum=0;
        boolean b_r=false;
        boolean b_c=false;
        boolean a_r=false;
        boolean a_c=false;
        if(r-1>=0) b_r=true;
        if(c-1>=0) b_c=true;
        if(r+1<board.length) a_r=true;
        if(c+1<board[0].length) a_c=true;
        
        if(b_r==true && b_c==true){
            sum+=board[r-1][c-1];
        }
        if(b_r==true){
            sum+=board[r-1][c];
        }
        if(b_c==true){
            sum+=board[r][c-1];
        }
        if(b_r==true && a_c==true){
            sum+=board[r-1][c+1];
        }if(a_r==true && a_c==true){
            sum+=board[r+1][c+1];
        }if(a_r==true && b_c==true){
            sum+=board[r+1][c-1];
        }
        if(a_r==true){
            sum+=board[r+1][c];
        }if(a_c==true){
            sum+=board[r][c+1];
        }
        return (int)(sum%15);

    }
}