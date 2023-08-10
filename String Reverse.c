/*
reverse string
*/
#include <stdio.h>

int reverseString(int n,char word[])
{
    int left=0;
    int right=n-1;
    
    while(left<right)
    {
        int temp=word[left];
        word[left]=word[right];
        word[right]=temp;
        
        left++;
        right--;
    }
}
int main() {
    char word[100];
    printf("\nEnter a word:");
    scanf("%s",word);
    printf("\nOriginal Word:%s",word);
    int n=strlen(word);
    
    reverseString(n,word);
    printf("\nReversed Word:%s",word);
    
    return 0;
}
