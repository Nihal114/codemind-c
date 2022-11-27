#include<stdio.h>
int main()
{
    int h,m,s,ts;
    scanf("%d",&ts);
    h=ts/3600;
    m=(ts%3600)/60;
    s= (ts-(3600*h)-(m*60));
	
    printf("H:M:S-%d:%d:%d",h,m,s);
}