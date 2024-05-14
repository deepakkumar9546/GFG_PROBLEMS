//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
         int prod=1;
         int sum=0;
         int temp=n;
         while(temp!=0){
            int digit=temp%10;
            prod=digit*digit*digit;
            sum=sum+prod;
            temp=temp/10;
         }
         if(sum==n){
             return "Yes";
         }
         else{
             return "No";
         }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends