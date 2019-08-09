#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if (x>10){
        printf("the value is greater than 10 \n");
        if (x<50){
            printf("the value is greater than 10 and less than50 \n");

        }
        else{
            printf("the value is greater than 10 and not less than50 \n");
        }

	}
	if (x>100){
        printf("the value is greater than 100 \n");

	}else{
	printf("the value is less than 100 \n");}

}
