/*
DAY 12

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
*/

#include <stdio.h>
#include <string.h>
int validString(int n,char string[])
{
    int stack[100];
    int top=-1;
    
    for(int i=0;i<n;i++)
    {
        if(string[i] == '(' || string[i] == '[' || string[i] == '{')
        {
            stack[++top]=string[i];
        }
        else if(string[i] == ')' || string[i] == ']' || string[i] == '}')
        {
            if(top==-1)
            {
                return 0;
            }
            
            char opening=stack[top--];
            if((opening== '(' && string[i] != ')') || 
            (opening == '[' && string[i] != ']') ||
            (opening == '{' && string[i] != '}'))
            {
                return 0;
            }
        }
    }
    return (top == -1); 
}
int main() {
    char string[100];
    printf("\nEnter string of symbols:");
    scanf("%s",string);
    
    int n=strlen(string);
    int result=validString(n,string);
    
    if(result)
    {
        printf("\nValid string...");
    }
    else
    {
        printf("\nNot valid string..");
    }
    return 0;
}
