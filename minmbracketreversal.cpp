int countRev (string s)
{
    // your code here
    
    //odd condition
    if(s.length()%2==1){
        return -1;
    }
    stack<char> c;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='{'){
            c.push(ch);
        }
        else{
            //ch=}
            if(!c.empty() && c.top()=='{'){
                c.pop();
            }
            else{
                c.push(ch);
            }
        }
    }
    //ab stack mai invalid hai
    int a=0,b=0;
    while(!c.empty()){
        if(c.top()=='{'){
            b++;
        }
        else{
            a++;
        }
        c.pop();
    }
        
        int ans=(a+1)/2+(b+1)/2;
        return ans;
}
