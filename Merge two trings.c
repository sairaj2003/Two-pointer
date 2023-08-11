/*
    MERGE TWO STRINGS:
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
*/
#include <stdio.h>

int mergeString(char s1[],char s2[],int m,int n)
{
    char merge[m+n];
    int i=0,j=0,k=0;
    
    while(i<m && j<n)
    {
        merge[k++]=s1[i++];
        merge[k++]=s2[j++];
    }
    
    while(i<m)
    {
        merge[k++]=s1[i++];
    }
    
    while(j<m)
    {
        merge[k++]=s2[j++];
    }
    printf("\nString after merging: %s", merge);
}

int main() {
    char s1[20];
    char s2[20];
    
    printf("\nEnter First String:");
    scanf("%s",s1);
    
    printf("\nEnter Second String:");
    scanf("%s",s2);
    int m,n;
    m=strlen(s1);
    n=strlen(s2);
    
    mergeString(s1,s2,m,n);
    return 0;
}
