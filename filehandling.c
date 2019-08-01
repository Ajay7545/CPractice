#include<stdio.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("F:\Study\C Language\Prc\working.txt","w");
    fprintf(fp,"WELCOME TO NEW PROGRAM\n");
    if(fp==NULL)
    {
        printf("file does not exixt");
    }
    else
    {
        while(c!=EOF)
     {
      c= getc(fp);
        putchar(c);
     }
    }
    fclose(fp);
    return 0;
}
