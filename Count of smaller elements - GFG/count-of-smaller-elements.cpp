//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends


int countOfElements(int arr[], int n, int x) 
{
    // int count=0;
    // int i=0;
    // while(n>=i){
    //     if(arr[i]<x){
    //         count++;
    //         i++;
    //     }
    // }
    // return count;
    
     long count =0;
     long i=0;
    for(i=0; i<n; i++){
        if(arr[i]<=x){
            count++;
        }
    }
    return count;
}