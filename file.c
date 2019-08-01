#include<stdio.h>
int main()
{
    FILE *p;
    int i;
    char c[]="THE FILE IS CREATED WORKING";
    p=fopen("filehd.txt","w");

    if(p==NULL)
    {
        printf("The file does not exist");
    }

    for(i=0;i<strlen(c);i++)
    {
        fputc(c[i],p);
    }
    getch();

    fclose(p);

}
