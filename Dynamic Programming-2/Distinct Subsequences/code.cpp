#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin  >> t;
    long long modulo = pow(10,9) + 7;
    while(t--){
        // char s[100001];
        string s;
        cin >> s;
        if(s=="")
        {
            cout << 1 << endl;
            continue;
        }
        long long alpha[26];
        for(long long i = 0; i<26; i++)
            alpha[i] = -1;
        // for(int i = 0; i<26; i++)
        //     cout << alpha[i] << " ";
        long long *dp = new long long[s.size()+1];

        dp[0] = 1;
        // alpha[s[0] - 65] = 0;
        // cout << alpha[] << endl;
        for(long long i = 1; i<=s.size(); i++)
        {
            // if(alpha[s[i]-65] == -1)
            // {
                dp[i] = (((dp[i-1])%(1000000007)) + ((dp[i-1])%(1000000007)))%(1000000007) ;
                // alpha[s[i] - 65] = i;
            // }
            // else
            // {
            if(alpha[s[i-1]-65] != -1)
                dp[i] = (dp[i]%(1000000007) - dp[alpha[s[i-1]-65]]%(1000000007)+1000000007)%(1000000007);
                // dp[i] = (dp[i]%(1000000007) - dp[alpha[s[i-1]-65]]%(1000000007))%(1000000007);
                // int x = 1;
                // if(alpha[s[i]-65]-1 >= 0)
                //     x = dp[alpha[s[i]-65]-1];
                // dp[i] = (dp[i-1]%modulo + (dp[i-1] - x)%modulo)%modulo;// + 1;// + alpha[s[i]-65] + 1;
                alpha[s[i-1] - 65] = i-1;
            // }
            // cout << dp[i] << endl;
        }
        cout << (dp[s.size()])%(1000000007) << endl;
        delete [] dp;
    }

return 0;
}
