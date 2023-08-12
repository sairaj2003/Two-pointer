// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int reverseVowels(int length,char word[])
{
    int left=0;
    int right=length-1;
    
    while(left<=right)
    {
        if(word[left]=='a' || word[left]=='e' || word[left]=='i' || word[left]=='o' || word[left]=='u' || word[left]=='A' || word[left]=='E' || word[left]=='I' || word[left]=='O' || word[left]=='U')
        {
            if(word[right]=='a' || word[right]=='e' || word[right]=='i' || word[right]=='o' || word[right]=='u' || word[right]=='A' || word[right]=='E' || word[right]=='I' || word[right]=='O' || word[right]=='U')
            {
                char temp=word[left];
                word[left]=word[right];
                word[right]=temp;
            }
            right--;
        }
        else
        {
            left++;
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
