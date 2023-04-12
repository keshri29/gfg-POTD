//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
    //     int j=n/2;
    //     for(int i=0; i<n/2; i++){
    //             if( 0<=i<n/2, n/2<=j<n, arr[i]>=5*arr[j]){
    //             return arr[i];
    //         }
    //     }
    // }  
    
    int i=n/2;
    int s=i-1,e=n-1;
    int res=0;
    sort(arr.begin(),arr.begin()+n/2);
    sort(arr.begin()+n/2,arr.end());
    while(s>=0 && e>=i){
        if(arr[s]>=arr[e]*5){
            res+=e-i+1;
            s--;
        }
        else{
            e--;
        }
    }
    return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends