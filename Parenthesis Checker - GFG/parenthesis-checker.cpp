//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    unordered_map<char,int>sy={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
{
    stack<char> st;

    for (char bracket : x) {
        if (sy[bracket] < 0) {
            st.push(bracket);
        } 
        else {
            if (st.empty()) {
                return false; 
            }
            char top = st.top();
            if (sy[top] + sy[bracket] != 0) {
                return false; 
            }
            st.pop(); 
        }
    }
    return st.empty();
}


};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends