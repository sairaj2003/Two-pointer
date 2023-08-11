/*
valid parenthesis
*/
#include <stdio.h>
#include<string.h>
int validParentheses(int n,char word[])
{
    int openCount=0;
    int closeCount=0;
    
    for(int i=0;i<n;i++)
    {
        if(word[i]== '(' || word[i]=='{' || word[i]=='[')
        {
            openCount++;
        }
        else
        {
            closeCount++;
        }
    }
    
    if(openCount == closeCount)
    {
        printf("\nIt is valid parenthese...");
    }
    else
    {
        printf("\nNot valid parenthese...");
    }
}
int main() {
    char word[100];
    printf("\nEnter String:");
    scanf("%s",word);
    
    int n=strlen(word);
    validParentheses(n,word);
    return 0;
}
