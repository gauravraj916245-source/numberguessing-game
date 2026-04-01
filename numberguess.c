#include<stdio.h>
#include<stdlib.h>
#include<time.h>    
int main(){
    int random,guess;
    int noofguess=0;
     srand(time(NULL));
    printf("welcome the world of guessing the number\n");
    random=rand() % 100+1;
do{
    printf("guess any number between (1-100):-");
    scanf("%d",&guess);
    noofguess++;
    if(guess>random){
        printf("guess smaller number\n");
    }
    else if(guess<random){
        printf("guess bigger number\n");
    }
    else
    {
        printf("congratulation you have successfully guess the number in  %d attempts\n",noofguess);
    }
}
while(guess!=random);
printf("thanks for playing\n");
printf("developed by gaurav raj");
}