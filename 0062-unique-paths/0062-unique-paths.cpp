class Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[m][n];
        for(int i=0;i<m;i++)
        {
            arr[i][0]=1;
        }
        for(int i=0;i<n;i++)
        {
            arr[0][i]=1;
        }
        for(int i=1;i<m;i++)
        {
            for(int g=1;g<n;g++)
            {
                
                arr[i][g]=arr[i][g-1]+arr[i-1][g];
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int g=0;g<n;g++)
            {
                cout<<arr[i][g]<<" ";
            }
            cout<<endl;
        }
        return arr[m-1][n-1];
    }
};