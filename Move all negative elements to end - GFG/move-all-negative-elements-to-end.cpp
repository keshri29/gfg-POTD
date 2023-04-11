//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
// Your code goes here and this is the native approach to solve means brootforce method
/*  function to seggregate negative
    elements from the given array
    and moving them to the end  */
        vector<int> temp;
            /*  in the starting only copy the
        non-negative elements   */
        for(int i=0;i<n;i++)
        {
        if(arr[i]>=0) temp.push_back(arr[i]);
    }
     /* copy the negative elements
        to the end of dummy array   */
     for(int i=0;i<n;i++)
     {
        if(arr[i]<0) temp.push_back(arr[i]);
    }
     // copy the dummy array to the original array
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    return;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends