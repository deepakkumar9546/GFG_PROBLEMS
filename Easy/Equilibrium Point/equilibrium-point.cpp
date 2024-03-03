//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    int equilibriumPoint(long long a[], int n) {
    
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        long long left=0;
        for(int i=0;i<n;i++){
            left+=a[i];
            sum=sum-a[i];
            if((left-a[i])==sum)
            return i+1;
        }
        return -1;
        
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends