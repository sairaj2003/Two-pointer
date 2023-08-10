/*
Check if string is pallindrome or not
*/
#include <stdio.h>
#include<string.h>

int checkPallindrome(int n,char word[])
{
    int left=0;
    int right=n-1;
    
    while(left<right)
    {
        if(word[left] != word[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char word[100];
    printf("\nEnter word:");
    scanf("%s",word);
    int n=strlen(word);
    
    int result=checkPallindrome(n,word);
    if(result == 0)
    {
        printf("\nnot pallindrome");
    }
    else
    {
        printf("\nPallindrome..");
    }
    return 0;
}
