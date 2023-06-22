//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   bool lemonadeChange(int N, vector<int> &bills) {
        // code here
        if(bills[0]!=5)
        return false;
        int val5=0;
        int val10=0;
        for(int i=0;i<N;i++)
        {
            if(bills[i]==5)
            val5++;
            else if(bills[i]==10)
            {
                if(val5==0)
                return false;
                val10++;
                val5--;
            }
            else
            {
                if(val5==0 || (val10==0 && val5<3))
                return false;
                if(val10>0)
                {
                    val10--;
                    val5--;
                }
                else
                {
                    val5=val5-3;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends