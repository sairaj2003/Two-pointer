/*
String to digit
*/
#include <stdio.h>
#include<string.h>
#include<ctype.h>   // it include to check if the character is number or not 
                    // it uses inbuilt function isdigit()

int stringToInt(int n,char num[])
{
    int sign=1;
    int result=0;
    int i=0;
    
    if(num[i]=='-' || num[i]=='+')
    {
        sign=(num[i] == '-') ? -1 :1;
        i++;
    }
    
    
    while(isdigit(num[i]))
    {
        int digit=(num[i] - '0');
        
        result=result*10+digit;
        i++;
    }
    return (sign * result);
}

int main() {
    char num[100];
    printf("\nEnter string:");
    scanf("%s",num);
    
    int n=strlen(num);
    int result=stringToInt(n,num);
    printf("\nNumber is :%d",result);
    return 0;
}
