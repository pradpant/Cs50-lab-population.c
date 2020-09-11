#include<stdio.h>
int main(void){
    
    int s,e,count=0;
    do{
    printf("Start size: ");
    scanf("%d",&s);}while(s<9);
    do{
    printf("End size: ");
    scanf("%d",&e);}while(s>e || e<0);
    if(s==e){
      printf("Years: ");
      printf("%d",count);
    }
    else if(s<e){
    while(s<e)
        {
            s=s+s/3-s/4;
            count++;
        }
    printf("Years: ");
    printf("%d",count);
    }
}