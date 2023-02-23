#include <stdio.h>

void main(){
    int row,x,y;
    printf("Enter number of rows : \n");
    scanf("%d",&row);

    if(row>11){
        printf("Enter number less than 12 ....! \n");
    }

    else if (row<5){
        for(x=0;x<row;x++){
            for(y=0;y<=x;y++){
                printf("%d",row);
            }
            printf("\n");
        }
    }

    else {
        for(x=0;x<row;x++){
            for(y=0;y<row;y++){
                printf("%d",row);
            }
            printf("\n");
        }
    }
}