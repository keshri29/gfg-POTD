//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
   
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	    string result = "";  

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U') {
            continue; 
        }
        else {
            result += s[i];  
        }
    }

    return result;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends