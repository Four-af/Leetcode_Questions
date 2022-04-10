class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int> s;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int top1=s.top();
                s.pop();
                int top2=s.top();
                s.pop();
                int add=top1+top2;
                s.push(top2);
                s.push(top1);
                s.push(add);
            }else if(ops[i]=="D"){
                // int temp=s.top();
                s.push( 2 * (s.top()) );
            }else if(ops[i]=="C"){
                s.pop();
            }else{
                s.push(stoi(ops[i]));
            }
        }
        int sum = 0;
        while(!s.empty()){
            int temp=s.top();
            sum+=temp;
            s.pop();
        }
        return sum;
    }
};