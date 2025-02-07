// //{ Driver Code Starts

// Input: n = 4, m = 8
// Output: lesser
// Explanation: 4 < 8 so print 'lesser'.

// Input: n = 8, m = 8
// Output: equal
// Explanation: 8 = 8 so print 'equal'.

// Input: n = 8, m = 4
// Output: greater
// Explanation: 8 > 4 so print 'greater'.

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    string compareNM(int n, int m){
        // code here
        if(n==m)
        {
            return "equal";
        }
        else
        {
            return (n>m)? "greater" : "lesser";
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    
    cout << "~" << "\n";
    return 0;
}
// } Driver Code Ends
