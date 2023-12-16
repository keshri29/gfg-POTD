//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        if(!grid[0][0]) return 0;
        int mod = 1e9+7;
        vector<vector<int>>ans(n+1,vector<int>(m+1,0));
        ans[1][1]=1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1 and j==1) continue;
                if(grid[i-1][j-1]){
                    ans[i][j]=(ans[i-1][j]+ans[i][j-1])%mod;
                }
            }
            
        }
        return ans[n][m];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends