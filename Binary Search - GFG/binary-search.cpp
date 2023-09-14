//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        // int s=0;
        // int e=0;
        // int mid = (s+e)/2;
        // for(int i=0; i<n; i++){
        //     if(n==mid){
        //         return mid;
        //     }
        //     else if(n>=mid){
        //         mid++;
        //         return arr[i];
        //     }
        //     else{
        //         mid--;
        //         return arr[i];
        //     }
        // }
        
        for(int i=0; i<n; i++){
            if(arr[i]==k){
                return i;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends