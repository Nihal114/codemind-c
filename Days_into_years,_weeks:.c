#include<stdio.h>
int main()
{
    int d,yr,w;
    scanf("%d",&d);
    yr=d/365;
    w=(d%365)/7;
    printf("%d
",yr);
    printf("%d",w);
}