#include<stdio.h>
void lower(char*);
void lower(char* s)
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
    
}
int main()
{
    char s[]="ADITYA";
    lower(s);
    return 0;
}