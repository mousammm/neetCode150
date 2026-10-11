#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:

  bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string> st;

    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        char c = board[i][j];
        if(c == '.') continue;

        string row = string(1, c) + "_ROW_" + to_string(i);
        string col = string(1, c) + "_COL_" + to_string(j);
        string box = string(1, c) + "_BOX_" + to_string(i/3) + to_string(j/3);

        if(st.find(row) != st.end() ||
           st.find(col) != st.end() ||
           st.find(box) != st.end()) return false;
        st.insert(row);
        st.insert(col);
        st.insert(box);
      }
    }

    return true;
  }
};

int main()
{
  Solution s;
  vector<vector<char>> board = {
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
  };

  cout << boolalpha << s.isValidSudoku(board) << '\n';

  return 0;
}
