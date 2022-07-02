class Solution {
    public boolean exist(char[][] board, String word) {
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[i].length;j++){
                if((board[i][j] == word.charAt(0) && dfs(board,i,j,0,word))){
                    return true;
                }
            }
        }
        return false;
    }
    public static boolean dfs(char[][] arr,int i,int j,int count,String word){
        if(count == word.length()){
            return true;
        }
        if(i == -1 || i == arr.length || j == -1 || j == arr[0].length || arr[i][j] != word.charAt(count)){
            return false;
        }
        char temp_St = arr[i][j];
        arr[i][j] = '*';
        boolean ans = dfs(arr,i+1,j,count+1,word) || 
                      dfs(arr,i-1,j,count+1,word) ||
                      dfs(arr,i,j+1,count+1,word) ||
                      dfs(arr,i,j-1,count+1,word);
        arr[i][j] = temp_St;
        return ans;
    }
}