/*WAP to execute infix operator into postfix operator using stack 
*/

#include <iostream>
#include <stack>
using namespace std;

int priority (char alpha){ //priority banako
    if(alpha == '+' || alpha =='-')
        return 1;
 
    if(alpha == '*' || alpha =='/')
        return 2;
 
    if(alpha == '^')
        return 3;

 
    return 0;
}
string convert(string infix) //covert garne function
{
    int i = 0; 
    string postfix = "";
    
    stack <int>s; //inbuilt function

    while(infix[i]!='\0')
    {
        
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z')          
        {
            postfix += infix[i];
            i++;
        }
        // opening bracket bhaye matra push garne stack lai
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        //  closing bracket bhaye pop hanirakhne stack bata 
        
        else if(infix[i]==')')
        {
            while(s.top()!='('){
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else            
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top())){
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty()){
        postfix += s.top();
        s.pop();
    }


    cout << "Postfix is : " << postfix;   
    return postfix;
}

int main()
{
    string infix ;
    cout<<"Enter infix: ";
    cin>>infix;
    string postfix;
    postfix = convert(infix);
    
    return 0;
}
