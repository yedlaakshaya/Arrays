class Solution{
    public:
    int maxProfit(vector<int>& prices){
int minprices=prices[0];
int maxProfit=0;
for(int i=0;i<prices.size();i++){
    minprices=min(minprices , prices[i]);
    int profit=prices[i]-minprices;
   maxProfit = max(maxProfit, profit);
}
return maxProfit;
    }
};
   