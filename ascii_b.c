#include<stdio.h>
void mail(){
char n;
printf("\nEnter the character\n");
scanf("%c",&n);
if(n>96 && n<=122){
printf("The character is lower case");
} else if(n>64 && n<=90){
printf("The character is upper case");
}else if(n>47 && n<=57){
printf("This character is digit");
} else if((ch>=0 && ch<=47) || (ch>=58&& ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)){
printf("The character is special symbol");
}

}
