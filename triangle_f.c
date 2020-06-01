#include<stdio.h>
void main(){
int a,b,c,max,min1,min2;
printf("Enter the three sides of triangle");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
max = a;
min1=b;
min2=c;
} else if(b>a && b>c){
max = b;
min1=a;
min2=c;
} else{
max = c;
min1=b;
min2=a;
}

if((min1 + min2)>max){
printf("Triangle is valid");
} else{
printf("Triangle is not valid");
}

}
