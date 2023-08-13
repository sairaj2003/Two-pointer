// Online C compiler to run C program online
/*
Ronny is given a string along with the string which contains single character x. She has to remove the character x from the given string. Help her write a function to remove all occurrences of x character from the given string.

Input Specification:

input1: input string s
input2: String containing any character x
Output Specification:
String without the occurrence of character x

Example 1:
Input1: Prepinsta
input2: i

Output: prepnst

Explanation: As i is the character which is required to be removed, therefore all the occurrences of i are removed, keeping all other characters
*/
#include <stdio.h>
#include <string.h>

void removeCharacter(int n,char word[],char ch)
{
    int i=0;
    int start=0;
    char temp[100];
    while(i<n)
    {
        if(word[i] != ch)
        {
            temp[start] = word[i];
            start++;
        }
        i++;
    }
    temp[start] = '\0';
    printf("\nWord: %s",temp);
}

int main() {
    char word[100];
    printf("\nEnter string:");
    scanf("%s",word);
    int n=strlen(word);
    char ch;
    printf("\nEnter character that you want to remove:");
    scanf(" %c",&ch);
    
    removeCharacter(n,word,ch);
    return 0;
}
