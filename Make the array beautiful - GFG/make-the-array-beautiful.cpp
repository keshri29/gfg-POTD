//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n=arr.size();
        vector<int>l;
        for(int i=0; i<n; i++){
           if (l.size()!=0 &&
                    ((l[l.size()-1]<0 && arr[i]>=0) || (l[l.size()-1]>=0 && arr[i]<0))) {
                    l.pop_back();
        }
        else{
            l.push_back(arr[i]);
        }
    }
        return l;
        }
    };

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends