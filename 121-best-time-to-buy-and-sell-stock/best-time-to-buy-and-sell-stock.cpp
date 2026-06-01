class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int res =0;
        for(int j=1;j<prices.size();j++){
            if(prices[i]<prices[j]){
                res = max(res,prices[j]-prices[i]);
            }
            else{
            i=j;
            }
            

        
        
    }
    return res;
    }
};