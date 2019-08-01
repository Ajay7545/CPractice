#include<stdio.h>
int main()
{
    FILE *p;
    int i;
    char c[100];
    p=fopen("f1file.txt","w");

    if(p==NULL)
    {
        printf("The file does not exist");
    }
printf("Enter a string: ");
gets(c);
for(i=0;i<strlen(c);i++)
{
    fputc(c[i],p);
}
fclose(p);
getch();
}
