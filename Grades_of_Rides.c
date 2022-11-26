#include<stdio.h>
int main()
{
    int HF,SF,sf;
    scanf("%d%d%d",&HF,&SF,&sf);
    if(HF>50 && SF>60 && sf>100)
    {
        printf("10");
    }
    else if(HF>50 && SF>60)
    {
        printf("9");
    }
    else if(SF>60 && sf>100)
    {
        printf("8");
    }
    else if(HF>50 && sf>100)
    {
        printf("7");
    }
    else if(HF>50||SF>60||sf>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}