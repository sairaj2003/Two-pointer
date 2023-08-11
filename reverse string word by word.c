/*
reverse string word by word
*/
#include <stdio.h>
#include <string.h>

int reverseWords(char str[])
{
    int length=strlen(str);
    int start=0,end=length-1;
    while(start < end)
    {
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    
    int wordStart=0;
    for(int i=0;i<=length;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            int wordEnd=i-1;
            while(wordStart < wordEnd)
            {
                char temp=str[wordStart];
                str[wordStart]=str[wordEnd];
                str[wordEnd]=temp;
                wordStart++;
                wordEnd--;
            }
            wordStart=i+1;
        }
    }
     printf("Reversed string: %s", str);
}
int main() {
    char str[100];
    printf("\nEnter string:");
    fgets(str,sizeof(str),stdin);
    
    reverseWords(str);
    return 0;
}
