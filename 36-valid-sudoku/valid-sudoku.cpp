class Solution {
public:
        bool checkbox(vector<vector<char>>& board,int x,int y){
unordered_set<int>stt;
    for(int i=x;i<=x+2;i++){
        for(int j=y;j<=y+2;j++){
            if(board[i][j]=='.'){
                continue;
                }
            else if(stt.find(board[i][j])!=stt.end()){
                return false;
            }
            else{
                stt.insert(board[i][j]);
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows;
        for(int i=0;i<9;i++){
        unordered_set<int>mppr;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                   continue; 
                }
                else if(mppr.find(board[i][j])==mppr.end()){
                    mppr.insert(board[i][j]);
                }
                else{
                    return false;
                }
            }
        }
                //check cols;
        for(int i=0;i<9;i++){
        unordered_set<int>mppr;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                   continue; 
                }
                else if(mppr.find(board[j][i])==mppr.end()){
                    mppr.insert(board[j][i]);
                }
                else{
                    return false;
                }
            }
        }
        //check boxx
        for(int i=0;i<9;i=i+3){
            for(int j=0;j<9;j=j+3){
        bool result = checkbox(board,i,j);
        if (result==false){
            return false;
        }
            }
        }
    
        return true;
        }
};