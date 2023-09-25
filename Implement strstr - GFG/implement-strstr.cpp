//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
    //  int n=s.size();
    //  for(int i=0; i<n; i++){
    //      for(int j=0; j<x.size(); j++){
    //      if(s[i]==x[j]){
    //          return i;
    //      }

    //     }
    //  }
    
    return s.find(x);
    
    
}