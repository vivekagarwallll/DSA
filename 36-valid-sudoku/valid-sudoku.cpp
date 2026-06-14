class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>stt;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]=='.'){
                continue;
            }
            else{
string row=string(1,board[i][j])+"_row_"+to_string(i);
string colm=string(1,board[i][j])+"_colm_"+to_string(j);
string box=string(1,board[i][j])+"_row_"+to_string(i/3)+"_colm_"+to_string(j/3);

if(stt.find(row)!=stt.end() ||stt.find(colm)!=stt.end()||stt.find(box)!=stt.end()){
return false;
}
else{
    stt.insert(row);
    stt.insert(colm);
    stt.insert(box);
}
            }
        }
    }
    return true;
    }
};