//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int N, vector<int> &A) {
        /* code here
        int right=0;
        int left=0;
        int low,high;
        int mid=(low + high)/2;
        for(int i=1; i<A[mid]; i++){
            left+=A[i];
            return left;
                 for(int j=mid+1; j<A.size();j++){
                           right +=A[j] ;
                           return right;
                            // right+=A[i];
        }
        }
        
        if(left == right){
            return A[mid];
        }
        else{
            return -1;
        } 
    }*/
    
   long long sum = accumulate(begin(A), end(A), 0);
        int ans = -1;
        long long leftsum = A[0];
        sum -= A[0];
        if(sum == 0)
            return 1;
        for(int i = 1; i < N - 1; i++){
            sum -= A[i];
            if(leftsum == sum){
                ans = i + 1;
                break;
            }
            leftsum += A[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends