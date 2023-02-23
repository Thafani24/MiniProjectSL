#include<stdio.h>
void main(){
    int num=0;
    printf("Enter a value ");
    scanf("%d",&num);
    if(num>=1&&num<5)
    {
        for(int i=1;i<=num;i++)
        {
            for(int j=0;j<i;j++)
            {
                printf("%d",num);    
            }
            printf("\n");
        }
    }
    else
    {
        for(int i=1;i<=num;i++)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d",num);    
            }
            printf("\n");
        }
    }
}