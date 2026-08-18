class MinStack {
public:
map<int,int>mp;
stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        mp[val]++;
    }
    
    void pop() {
        if(!st.empty()){
            int val=st.top();
            st.pop();
            mp[val]--;
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        
        for(auto jk:mp){
            if(jk.second)return jk.first;
        }
    }
};
