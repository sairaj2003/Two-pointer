/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(int numStrings, char strings[][100]) 
{
    int len = strlen(strings[0]);
    int index = 0;

    for (int i = 0; i < len; i++) 
    {
        char current = strings[0][i];
        for (int j = 1; j < numStrings; j++) 
        {
            if (current != strings[j][i] || strings[j][i] == '\0') 
            {
                strings[0][i] = '\0';
                return strings[0];
            }
        }
        strings[0][i] = current;
        index++;
    }
    strings[0][index] = '\0';
    return strings[0];
}

int main() {
    int numStrings;
    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);
    getchar();

    char strings[numStrings][100];

    for (int i = 0; i < numStrings; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline
    }

    char* result = longestCommonPrefix(numStrings, strings);
    printf("Longest common prefix: %s\n", result);
    return 0;
}
