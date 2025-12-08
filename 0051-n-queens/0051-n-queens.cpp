class Solution {
public:
    bool issafe(vector<string>&board,int row,int j,int n){
        //vertical check
        for(int i=0;i<n;i++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        //horizontal check 
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
                return false;
            }
        }
        //left upward diagonal

        for(int i=row, c=j;i>=0 && c>=0;i--,c--){
            if(board[i][c]=='Q'){
                return false;
            }
        }
        //right upward diagonal

        for(int i=row, c=j;i>=0 && c<n;i--,c++){
            if(board[i][c]=='Q'){
                return false;
            }
        }
        return true;
    }
    void nqueen(vector<string>&board,int n,int row,vector<vector<string>>&ans){
        //base case;
        if(row==n){
            ans.push_back({board});
            return ;
        }
    for(int i=0;i<n;i++){
        if(issafe(board,row,i,n)){
            board[row][i]='Q';
            nqueen(board,n,row+1,ans);
            board[row][i]='.';
        }
    }}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));

        nqueen(board,n,0,ans);
        return ans;
    }
};