class StockSpanner {
public:

    stack<pair<int,int>> st;
    // vector<int> prices;
    int i;
    StockSpanner() {
        i = 1;
        // prices = {};
    }
    
    int next(int price) {
        int ans = 0;
        if(st.empty()){
            st.push({price,i});
            i++;
            ans = 1;
        }
        else{
            while(!st.empty() && price >= st.top().first){
                st.pop();
            }
            if(st.empty())
                ans = i;
            else
                ans = i - st.top().second;
            st.push({price,i});
            i++;
        }

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
