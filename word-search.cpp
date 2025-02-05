class Solution {
    public boolean exist(char[][] board, String word) {
        int rn=board.length;
        int cn=board[0].length;
        boolean[][] visited=new boolean[rn][cn];
        for(int i=0;i<rn;i++){
            for(int j=0;j<cn;j++){
                if(check(0,board,word,i,j,visited)){
                    return true;
                }
            }
        } 
        return false;
    }
    public boolean check(int index,char[][] board, String word, int x,int y, boolean[][] visited){
        if(index==word.length()){
            return true;
        }
        if(x<0 || y<0 || x==board.length || y==board[0].length || visited[x][y]==true || board[x][y]!=word.charAt(index)){
            return false;
        }
        visited[x][y]=true;
        boolean result=check(index+1,board,word,x+1,y,visited )||check(index+1,board,word,x,y+1,visited )||check(index+1,board,word,x-1,y,visited )||check(index+1,board,word,x,y-1,visited );
        visited[x][y]=false;
        return result;

    }
}