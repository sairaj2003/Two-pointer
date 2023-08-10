/*
Strings are anagram or not

*/

#include <stdio.h>

int stringAnagram(char s1[],char s2[])
{
    int cnt1=0,cnt2=0;
    for(int i=0;s1[i] != '\0';i++)
    {
        cnt1+=(s1[i] - 'a');
    }
    for(int i=0;s2[i] != '\0';i++)
    {
        cnt2+=(s2[i] - 'a');
    }
    
    if(cnt1 == cnt2)
    {
        printf("\nStrings are anagram");
    }
    else
    {
        printf("\nStrings are not anagram..");
    }
}
int main() {
    char s1[100],s2[100];
    printf("\nEnter first string:");
    scanf("%s",s1);
    
    printf("\nEnter second string:");
    scanf("%s",s2);
    
    stringAnagram(s1,s2);
    return 0;
}
