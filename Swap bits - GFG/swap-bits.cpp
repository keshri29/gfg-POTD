//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        // Code Here
        int bitArr[32]={0};
        int idx=31;
        while(x!=1){
            bitArr[idx--]=x%2;
            x=x/2;
        }
        bitArr[idx]=1;
        int up1=31-p1;
        int up2=31-p2;
        for(int i=0; i<n; i++){
            swap(bitArr[up1],bitArr[up2]);
            up1--;
            up2--;
        }
        int ans=0;
        for(int i=31; i>=0; i--){
            ans=ans+(pow(2,31-i)*bitArr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}
// } Driver Code Ends