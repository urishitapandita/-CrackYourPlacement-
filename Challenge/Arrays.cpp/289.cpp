#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        vector<pair<int, int>> live;
        vector<pair<int, int>> dead;
        int m = board.size();
        int n = board[0].size();
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int count = 0;
                count += (i - 1 >= 0 && board[i - 1][j] == 1 ? 1 : 0);
                count += (i - 1 >= 0 && j - 1 >= 0 && board[i - 1][j - 1] == 1 ? 1 : 0);
                count += (i - 1 >= 0 && j + 1 < n && board[i - 1][j + 1] == 1 ? 1 : 0);
                count += (j - 1 >= 0 && board[i][j - 1] == 1 ? 1 : 0);
                count += (j + 1 < n && board[i][j + 1] == 1 ? 1 : 0);
                count += (i + 1 < m && board[i + 1][j] == 1 ? 1 : 0);
                count += (i + 1 < m && j - 1 >= 0 && board[i + 1][j - 1] == 1 ? 1 : 0);
                count += (i + 1 < m && j + 1 < n && board[i + 1][j + 1] == 1 ? 1 : 0);
                if (board[i][j] == 0)
                {
                    if (count == 3)
                        live.push_back({i, j});
                }
                else
                {
                    if (count < 2 || count > 3)
                        dead.push_back({i, j});
                }
            }
        }
        for (auto itr : live)
            board[itr.first][itr.second] = 1;
        for (auto itr : dead)
            board[itr.first][itr.second] = 0;
    }
};