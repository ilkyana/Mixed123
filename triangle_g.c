#include<stdio.h>
void main(){
int a,b,c;
printf("Enter the sides of triangle");
scanf("%d %d %d" , &a,&b,&c);
if(a==b && b==c && c==a){
printf("Triangle is equivalent");
}else if(a==b || b==c || c==a){
printf("Triangle is isoscales");
} else if(a!=b && b!=c && c!=a){
printf("Triangle is scaler");
}else if(a==90 || b==90 || c==90){
printf("Triangle is scaler");
}

}
