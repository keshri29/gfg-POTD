//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes 
        reverse(str.begin(), str.end());
        return str;
        // int i=0; 
        // int n=str.length()-1;
        // while(i<n){
        //     swap(str[i],str[n-1]);
        // }
        // for(int i=0; i<n; i++){
        //     for(int j=n-1; j<n; j++){
        //          swap(str[i],str[j]);
        //          i++;
        //          j--;
        //     }
        // }
    }
    
    
    
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends