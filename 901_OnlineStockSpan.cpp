// solved using molith stack
class StockSpanner {
    stack<int> values;
    stack<int> spans;
public:
    StockSpanner() {}
    
    int next(int price) {
        int span = 1;

        if(values.empty()|| price < values.top()){
            values.push(price);
            spans.push(span);
        }else{
            while(!values.empty() &&price >= values.top()){
                span += spans.top();
                values.pop();
                spans.pop();
            }
            values.push(price);
            spans.push(span);
        }
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */