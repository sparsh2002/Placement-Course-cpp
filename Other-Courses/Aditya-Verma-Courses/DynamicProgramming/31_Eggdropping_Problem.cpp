class Solution {
public:
    int t[100+1][10000+1];
    int solve(int e , int f){
        if(f==0 or f==1){
            return f;
        }
        if(e==1){
            return f;
        }
        if(t[e][f]!=-1){
            return t[e][f];
        }
        int mn = INT_MAX;
        
        for(int k=1 ; k<=f ; k++){
            int eggbreak;
            int notbreak;
            if(t[e-1][k-1]!=-1){
                eggbreak = t[e-1][k-1];
            }
            else{
                eggbreak = solve(e-1,k-1);
            }
            if(t[e][f-k]!=-1){
                notbreak = t[e][f-k];
            }
            else{
                notbreak = solve(e,f-k);
            }
            int temp = 1 + max(eggbreak , notbreak);
            mn = min(temp , mn);
        }
        
        return t[e][f] = mn;
    }
    int superEggDrop(int e, int f) {
        memset(t , -1 , sizeof(t));
        return solve(e , f);
    }
};