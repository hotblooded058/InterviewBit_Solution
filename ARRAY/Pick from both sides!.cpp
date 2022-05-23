// https://www.interviewbit.com/problems/pick-from-both-sides/

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int sum=0;
    for(int i=0;i<B;i++)
    {
        sum+=A[i];
    }

    int ans=sum;
    int inc=n-1;
    int exc=B-1;
    while(inc>=0 && exc>=0)
    {
        sum=sum-A[exc--];
        sum=sum+A[inc--];
        ans=max(ans,sum);
    }
    
   
    return ans;
}
