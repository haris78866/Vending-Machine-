#include<stdio.h>   
#define coke_avalible 10
#define coke_price 5
#define pepsi_avalible 15
#define pepsi_price 7
#define sprite_avalible 15
#define sprite_price 7
#define up_avalible 25
#define up_price 3


int calculatebill1 (int q1);
int checkavalibility1 (int q1);
int calculatebill2 (int q2);
int checkavalibility2 (int q2);
int calculatebill3 (int q3);
int checkavalibility3 (int q3);
int calculatebill4 (int q4);
int checkavalibility4 (int q4);

int main(void)
{
int choice , q1,q2,q3,q4;
printf("WELCOME TO VENDING MACHINE\n");
printf(" AVALIBLE DRINKS\n");
printf("1 : COKE(PRICE : $5 ,AVALIBLE :10 \n");
printf("2 : PEPSI(PRICE : $7 ,AVALIBLE :15 \n");
printf("3 : SPRITE(PRICE : $7 ,AVALIBLE :15 \n");
printf("4 :7UP(PRICE : $3 ,AVALIBLE :25 \n");

printf("ENTER YOUR CHOICE  \n");
scanf("%d",&choice);

if (choice==1)
{
printf("ENTER THE QUANTITY You WANT \n");
scanf("%d",&q1);
printf(" YOU ORDERED  %d coke for a total is $ %d\n\n",q1,calculatebill1 (q1));
printf(" COKE(PRICE : $5 ,AVALIBLE :%d \n", coke_avalible-q1);
printf(" PEPSI(PRICE : $7 ,AVALIBLE :%d \n",pepsi_avalible-q2);
printf(" SPRITE(PRICE : $7 ,AVALIBLE :%d \n",sprite_avalible-q3);
printf(" 7UP(PRICE : $3 ,AVALIBLE :%d \n", up_avalible-q4);
 //checkavalibility1 (q1);
printf(" TOTAL BILL $  %d\n",calculatebill1 (q1));
}
else if (choice ==2)
{
printf("ENTER THE QUANTITY You WANT \n");
scanf("%d",&q2);
printf(" YOU ORDERED  %d pepsi for a total is $ %d\n\n",q2,calculatebill2 (q2));
printf(" COKE(PRICE : $5 ,AVALIBLE :%d \n", coke_avalible-q1);
printf(" PEPSI(PRICE : $7 ,AVALIBLE :%d \n",pepsi_avalible-q2);
printf(" SPRITE(PRICE : $7 ,AVALIBLE :%d \n",sprite_avalible-q3);
printf(" 7UP(PRICE : $3 ,AVALIBLE :%d \n", up_avalible-q4);
 //checkavalibility2 (q2);
printf(" TOTAL BILL $  %d\n",calculatebill2 (q2));
}
else if (choice==3)
{
printf("ENTER THE QUANTITY You WANT \n");
scanf("%d",&q3);
printf(" YOU ORDERED  %d sprite for a total is $ %d\n\n",q3,calculatebill3 (q3));
printf(" COKE(PRICE : $5 ,AVALIBLE :%d \n", coke_avalible-q1);
printf(" PEPSI(PRICE : $7 ,AVALIBLE :%d \n",pepsi_avalible-q2);
printf(" SPRITE(PRICE : $7 ,AVALIBLE :%d \n",sprite_avalible-q3);
printf(" 7UP(PRICE : $3 ,AVALIBLE :%d \n", up_avalible-q4);
 //checkavalibility3 (q3);
printf(" TOTAL BILL $  %d\n",calculatebill3 (q3));
}
else if (choice==4)
{

printf(" YOU ORDERED  %d sprite for a total is $ %d\n\n",q4,calculatebill3 (q4));
printf(" COKE(PRICE : $5 ,AVALIBLE :%d \n", coke_avalible-q1);
printf(" PEPSI(PRICE : $7 ,AVALIBLE :%d \n",pepsi_avalible-q2);
printf(" SPRITE(PRICE : $7 ,AVALIBLE :%d \n",sprite_avalible-q3);
printf(" 7UP(PRICE : $3 ,AVALIBLE :%d \n",  checkavalibility4 (q4));
 //checkavalibility4 (q4);
printf(" TOTAL BILL $  %d\n",calculatebill4 (q4));
}
else 
{
printf("SORRY!!! CHOICE IS INVALID\n");
}
return 0;
}


int calculatebill1 (int q1)
{
return coke_price*q1;
}

int checkavalibility1 (int q1)
{
if (q1<=10)
{
;
}
else 
{
printf("sorry stock is unavalible /n");
}
return 0;
}

int calculatebill2 (int q2)
{
return pepsi_price*q2;
}
int checkavalibility2 (int q2)
{
if (q2<=15)
{
;
}
else 
{
printf("sorry stock is unavalible /n");
}
return 0;
}

int calculatebill3 (int q3)
{
return sprite_price*q3;
}
int checkavalibility3 (int q3)
{
if (q3<=15)
{
;
}
else 
{
printf("sorry stock is unavalible /n");
}
return 0;
}
int calculatebill4 (int q4)              
{
return up_price*q4;
}

int checkavalibility4 (int q4)            
{
if (q4<=25)
{
;
}
else 
{
printf("sorry stock is unavalible /n");
}
return 0;
}





























