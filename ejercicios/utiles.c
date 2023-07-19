#include<stdio.h>

int pot(int base, int exp)
{
    int res = 1;
    if(exp==0 && base !=0)
    {
        return res;
    }else if(exp > -1)
    {
        int i;
        for(i=0; i<exp; i++)
        {
            res*=base;
        }
        return res;
    }
    else
    {
        printf("Error: El exponente debe ser cero o uno numero positivo\n");
    }
}

int toint(char* str, int n)
{
    int i, c=0,res=0;
    char ch;
    for(i=n-1; i>=0; i--)
    {
        ch = (int)str[i];
        if(ch >= 0x30 && c <= 0x39)
        {
            res+=(c & 0xf) *pot(10, c++);
        }
        
    }
    return res;
}

int main(int argc, char**argv)
{
    printf(":: %d", toint("1024", 4));
    return 0;
}