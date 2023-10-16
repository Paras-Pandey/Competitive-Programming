public static int solve(int n , int k , String c)
    {
        char s[] = new char[c.length() + 1];
        for(int i =0 ;i < c.length();i++)
            s[i] = c.charAt(i);
        int mod = 1000000007;
        int maxLen = 2005;
        int dp[][] = new int[maxLen][maxLen];
        int sum[] = new int[maxLen];
          sum[0]=dp[0][0]=1;
            for(int i=1;i<=n;i++)
            {
                for(int j=0;j<=k;j++)
                {
                    for(int l=i-1;l>=0&&(i-l)*(n-i+1)<=j;l--)
                        dp[i][j]=add(dp[i][j],dp[l][j-(i-l)*(n-i+1)] , mod);
                    dp[i][j]=(int)((long) ('z' - s[i]) * dp[i][j] %mod);
                    dp[i][j] = add(dp[i][j],(long)(s[i]-'a')*sum[j]%mod , mod);
                    sum[j]= add(sum[j],dp[i][j] , mod);
                }
            }
            int ans=0;
            for(int i=0;i<=n;i++)
                ans = add(ans,dp[i][k] , mod);
            return ans;
    }

    public static int add(long x,long y , int mod)
    {
        x=x+y>=mod?x+y-mod:x+y;
        return (int)x;
    }