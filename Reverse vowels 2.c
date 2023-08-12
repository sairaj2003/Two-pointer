// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
{
    c=tolower(c);
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

void reverseVowels(int length,char word[])
{
    int left=0;
    int right=length-1;
    
    while(left<=right)
    {
        if(isVowel(word[left]) && isVowel(word[right]))
        {
            char temp=word[left];
            word[left]=word[right];
            word[right]=temp;
        }
        else if(!isVowel(word[left]))
        {
            left++;
        }
        else if(!isVowel(word[right]))
        {
            right--;
        }
    }
    printf("\nString After reverse:%s",word);
}

int main() {
    char word[100];
    printf("\nEnter word:");
    scanf("%s",word);
    int length=strlen(word);
    
    reverseVowels(length,word);

    return 0;
}
