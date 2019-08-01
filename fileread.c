#include<stdio.h>
int main()
{
    int i;
    FILE *po;
    char c;
    po=fopen("f1file.txt","r");
    if(po==NULL)
    {
        printf("FILE DOES NOT EXIST");
    }
    c=fgetc(po);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(po);
    }
    fclose(po);
}
