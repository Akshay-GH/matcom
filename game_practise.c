// HEADER FILES INCLUDE LIBRARIES

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;
   // printf("%d",number);

    do{
        printf(" guess a number between 1 to 100 \n");
        scanf("%d",&guess);
        if(number>guess){
            printf("Higher Number Please \n");

        }else if(number<guess){
            printf(" lower number please \n");
        }
        else{
           printf( "congratulations you guessed it in %d attempts ! \n",nguesses);

        }
        nguesses++;



    }while(number!=guess);


    return 0;
}