#include<stdio.h>
void main(){
int A;
char H,T,S;
printf("Enter the health(E/P) , age , town(V/C) , sex(M/F)");
scanf("%c %d %c %c", &H , &A , &T , &S);
if(A>24 && A<=35){
if(H=='E' ){
if( T=='C'){
if(S=='M'){
printf("4 rs per thousand and policy cannot exceed 2 lakh");
}
}
}else if(H=='E'){
if(T=='C'){
if(S=='F'){
printf("3 rs per thousand and policy cannot exceed 1 lakh");
}
}

}else if(H=='P' ){
if(T=='V'){
if(S=='M'){
printf("6 rs per thousand and policy cannot exceed 10,000");
}
}
}
} else{
printf("Person is not ensured");

}

}
