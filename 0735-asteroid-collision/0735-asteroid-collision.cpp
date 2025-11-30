class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        for(int i=0;i<a.size();i++){
            if(a[i]>=0){
                s.push(a[i]);
            }
            else if(s.empty()){
                s.push(a[i]);
            }
            else{
                while(!s.empty() &&s.top()>0 && s.top()<abs(a[i])){
                    s.pop();
                }
                if(!s.empty()&& s.top() > 0 && s.top()>abs(a[i])){
                    continue;
                }
                else if(!s.empty() && s.top()==abs(a[i])){
                    s.pop();
                }
                else{
                    s.push(a[i]);
                }
            }
        }
        vector<int>ans(s.size());
        for (int i = ans.size() - 1; i >= 0; i--) {
            ans[i] = s.top();
            s.pop();
        }
        return ans;
    }

};