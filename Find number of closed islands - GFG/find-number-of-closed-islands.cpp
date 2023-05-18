//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int count = 0;
        vector<vector<int>> visit(N, vector<int> (M, 0));

        int row[] = {1, -1, 0, 0};
        int col[] = {0, 0, -1, 1};

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (matrix[i][j] == 0 or visit[i][j] == 1)
                    continue;

                queue<pair<int, int>> que;
                que.push({i, j});
                bool isvalid = true;

                while(!que.empty())
                {
                    auto front = que.front();
                    que.pop();
                    int r = front.first;
                    int c = front.second;

                    for (int k = 0; k < 4; k++)
                    {
                        int next_row = r + row[k];
                        int next_col = c + col[k];

                        if (next_row < 0 or next_row >= N or next_col >= M or next_col < 0)
                        {
                            isvalid = false;
                            continue;
                        }
                        if (matrix[next_row][next_col] == 0 or visit[next_row][next_col] == 1)
                            continue;
                        visit[next_row][next_col] = 1;
                        que.push({next_row, next_col});
                    }
                }
                if (isvalid == true)
                    count++;
                
            }
        }

        return count;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends