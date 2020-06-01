#include<stdio.h>
void main(){
int stock,order;
char credit;
printf("Enter the stock , your credit if ok not(y/n) and your order amount");
scanf("%d %c %d",&stock,&credit,&order);
if(order<=stock && credit=='y'){
printf("Supply is requirement");
} else if( credit=='n'){
printf("Supply is not requirement, send him a sms");
}else if(order>stock && credit=='y' ){
printf("supply Intimate to him data the balance will be shipped.");
}
}
