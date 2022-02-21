#include<stack>
bool findRedundantBrackets(string &s)
{
    stack<char> c;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        
        if(ch=='('|| ch =='+'|| ch=='-' || ch=='*' ||  ch=='/'){
            c.push(ch);
        }
        else{
            if(ch==')'){
                bool isredundant=true;
                while(c.top()!='('){
                    char top=c.top();
                    if(top =='+'|| top=='-' || top=='*' ||  top=='/'){
                       isredundant=false; 
                    }
                    c.pop();
                }
                if(isredundant==true){
                    return true;
                }
                c.pop();
            }
        }
    }
    return false;
}
