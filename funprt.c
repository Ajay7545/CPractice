#include<stdio.h>

 long int num,de,re;
int main()
{

    printf("enter num : ");
    scanf("%d",&num);

    fun(num);


}

fun(int num)
{

    char s[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    de=num/26;
    re=num%26;
     if(num<27)
     {
         printf("%c",s[num-1]);
     }
     else if(re==0)
    {
        if(de>27)
        {
            de=de/26;
         printf("%c",s[de-2]);
         printf("%c",s[de-2]);
         printf("%c",s[re+25]);
        }
        else
        {printf("%c",s[de-2]);
        printf("%c",s[re+25]);}
    }
    else
{
    if(de>26)
    {
         de=de/26;
         printf("%c",s[de-1]);
         printf("%c",s[de-1]);
         printf("%c",s[re-1]);
    }
    else
    {printf("%c",s[de-1]);
     printf("%c",s[re-1]);
    }
}

}
