class StockSpanner {
public:
    // vector<int> stock;
    vector<pair<int, int>> s;

    StockSpanner() {
            
    }
    
    int next(int price) {
        int x = 1;
        while(!s.empty() && s.back().first <=price ){
            x += s.back().second;
            s.pop_back();
        }
        s.emplace_back(price,x);
        return x;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */