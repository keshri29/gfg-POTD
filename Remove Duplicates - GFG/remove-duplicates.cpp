//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    unordered_map<char,int>mp;
        string ans="";
        for(int i=0;i<S.length();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==1)
             {
                 ans=ans+s[i];
             }
        }
    return ans;
	    
	    
	    
	    
	    
	    
	   // sort(S.begin(),S.end());
	   // string ans=" ";
	   // int n=S.size();
	   // int i=0;
	   // int j=i+1;
	   // while(i<n){
	   //      ans+=S[i];
	         
	   //     while(j<n && S[i]==S[j]){
	   //         j++;
	   //     }
	   //     i=j;
	   // }
	   //  return ans;
	   
	   
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends