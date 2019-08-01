#include<stdio.h>
#include<math.h>
#include<string.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

struct cust
{
    char name[20];
    int noofmembr;
    char addr[100];
    struct date checkin;
    struct date checkout;
};

void entry()
{
    struct cust a;
    printf("Enter Customer Name :\n");
    scanf("%s",&a.name);
    fflush(stdin);
    printf("Enter Address:\n");
    scanf("%s",&a.addr);
    fflush(stdin);
    printf("Enter Checkin Date:\n");
    scanf("%d %d %d",&a.checkin.dd,&a.checkin.mm,&a.checkin.yy);
    fflush(stdin);
    printf("Enter Checkout Date:\n");
    scanf("%d %d %d",&a.checkout.dd,&a.checkout.mm,&a.checkout.yy);
    fflush(stdin);

}
void roomtype()
{
    int x;

    printf("THE GENERAL ROOM IN CHEAPEST PRICE IS 1000\n");
    prinf("")
    switch(x)
        case:
}

void payment()
{



}
void extrademand()
{
    printf("For extra requirement of ");



}

int main()
{
     int x,i,n;
     printf("Press 1 for New Customer Entry and 0 for Exit\n");
     scanf("%d",&n);
while(n==1)
{

    printf("---->Welcome to Taj Hotel:\n---->The charge of per person is 2000 per day for One Room\n---->There is delicious meals are available at diffrent price\n");


         entry();
         roomtype()
         payment();
         extrademand();
     printf("Press 1 for New Customer Entry and 0 for Exit\n");
     scanf("%d",&n);

}

}


