class Solution {
public:
    bool isValid(string s) {
        stack<char> d;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            
            if(ch=='('|| ch=='['|| ch=='{'){
                d.push(ch);
            }
            else{
                if(!d.empty()){
                    char top=d.top();
                    if((ch==')' && top=='(') || (ch==']' && top=='[') || (ch=='}' && top=='{')){
                        d.pop();
                    }
                    else{
                        return false;
                    }
                    
                }
                else{
                        return false;
                    }
            }
            
            
        }
        
        //check krle stack empty hai ke nhi, emtpy mtlb valid hai
        if(d.empty()){
            return 1;
        }
        else{
            return 0;
        }
    }
};
