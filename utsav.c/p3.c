#include<stdio.h>

void main() {

int principal, price, time, intrest;

printf("Enter pricipal amount :");
scanf("%d",&principal);
printf("\nEnter annual price :");
scanf("%d",&price);

printf("/nEnter time period :");
scanf("%d",&time);

intrest=(principal * price * time)/100;

printf("\nsimple entrest is :%d",intrest);

}