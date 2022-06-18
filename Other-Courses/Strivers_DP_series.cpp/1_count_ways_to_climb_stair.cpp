#include<bits/stdc++.h>
long long MOD = 1000000007;
int countDistinctWayToClimbStair(long long n)
{
    if(n<=1){
         return 1;
    }
    int prev2 =0 , prev1 = 1;
    int curri;
    for(auto i=2 ; i<=n+1 ; i++){
        curri = (prev1 + prev2)%MOD;
        prev2 = prev1;
        prev1 = curri;
     }
        
     return int(curri%MOD);
}

// https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos