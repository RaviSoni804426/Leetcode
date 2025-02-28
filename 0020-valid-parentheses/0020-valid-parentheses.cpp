class Solution {
public:
    bool isValid(string s) {
        stack<char> stackA;
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
        
        if(ch=='(' || ch=='{' || ch=='['){
            stackA.push(ch);
        }
        else{
          
            if(!stackA.empty()){
                char top=stackA.top();
                if( (ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='[')){
                    stackA.pop();
                } else{
                    return false;
                }
            }
            else{
                return false;
            }
        } 
    }
    if(stackA.empty()){
            return true;  
        }else{
            return false;
        }
    }   
};