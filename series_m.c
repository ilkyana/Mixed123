#include<stdio.h>
void main(){
int x;
float sum=0.0,power=1.0;
printf("\n enter the value of x ");
scanf("%d",&x);
for(int i=1;i<=6;i++){
power=1.0;
for(int j=0;j<=i;j++){
power = power*((x-1.0)/x);
}

sum = sum+(1.0/2.0)*power ;
}
sum=sum + (float)(x-1.0)/x; 
printf("%f",sum);
}

