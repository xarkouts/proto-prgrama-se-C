#include<stdio.h>
#include<stdlib.h>


main(){

int a,b,apotelesma;
char c;

printf("dose to sibolo tis praxis + - * / \n");
c=getchar();

printf("dose ton proto aritmo \n");
scanf("%d",&a);

printf("dose ton deytero aritmo \n");
scanf("%d",&b);

if (c=='+')
{
    apotelesma=a+b;
    printf("%d+%d=%d",a,b,apotelesma);
}else if (c=='-')
{
    apotelesma=a-b;
    printf("%d-%d=%d",a,b,apotelesma);
}else if (c=='*')
{
    apotelesma=a*b;
    printf("%d*%d=%d",a,b,apotelesma);
}else if (c=='/')
{
    if(b==0){
        printf("den ginete dieredi me to 0");
    }
    apotelesma=a/b;
    printf("%d/%d=%d",a,b,apotelesma);
}




}