#include<stdio.h>
void main(){
int p,q,r,n,mult ;
float amt = 1;
for(int i = 1 ; i<=10 ; i++){
printf("\nEnter the value of p,q,r and n");
scanf("%d%d%d%d",&p,&r,&n,&q);
mult = n*q;
for(int j =1 ; j<=mult ; j++){
amt = amt * ( 1 +(float) r / q );
}
amt= p *amt;
printf("%f",amt);

}

}
