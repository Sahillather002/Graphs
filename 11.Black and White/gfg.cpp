//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
    int mod=1e9+7;
    long long total=N*M;
    total%=mod;
    int dx[]={-2,-2,-1,1,2,2,1,-1};
    int dy[]={-1,1,2,2,1,-1,-2,-2};
    long long ans=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            long long count=0;
            for(int k=0;k<8;k++){
                int nx=i+dx[k];
                int ny=j+dy[k];
                if(nx>=0 && ny>=0 && nx<N && ny<M){
                    count++;
                }
            }
            ans+=(total-count-1)%mod;
            ans%=mod;
        }
    }
    return ans;
}
