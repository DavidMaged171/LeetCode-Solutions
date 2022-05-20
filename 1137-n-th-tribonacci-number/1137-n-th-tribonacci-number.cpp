class Solution {
public:
    int arr[39]={0};
    int tribonacci(int n) {
        //Base Case
        
        if(n<=0)
            return 0;
        else if(n==1)return 1;
        else if(n==2)return 1;
        else if(arr[n]!=0)
            return arr[n];
        else
        {
            return arr[n]= tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        }
    }
};