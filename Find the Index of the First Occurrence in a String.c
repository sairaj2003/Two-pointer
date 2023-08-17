/*
Find the Index of the First Occurrence in a String

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
*/
#include <stdio.h>
#include <string.h>
void occurenceOfString(char str1[],char str2[],int len1,int len2)
{
    int found=0;
    for(int i=0;i<len1;i++)
    {
        int j;
        for(j=0;j<len2;j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;  
            }
        }
        if(j==len2)
        {
            printf("\nIndex:%d",i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("\nNot found....");
    }
}

int main() {
    char str1[100];
    char str2[100];
    printf("\nEnter string 1:");
    scanf("%s",str1);
    printf("\nEnter string 2:");
    scanf("%s",str2);
    
    int len1=strlen(str1);
    int len2=strlen(str2);
    
    occurenceOfString(str1,str2,len1,len2);
    
    return 0;
}
