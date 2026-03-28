#include<stdio.h>
int main(){
    int day,n;
    int choice=0;
    printf("=========================\n");
    printf("=========================\n");
    printf("==========================\n");
    printf("1. sunday\n");
    printf("2. monday\n");
    printf("3. tuesday\n");
    printf("4. wednesday\n");
    printf("5. thursday\n");
    printf("6. friday\n");
    printf("7. saturday\n");
    printf("===========================\n\n");
    printf(" enter your day no: ");
    scanf("%d",&day);
    switch(day){
case 1 :
printf("\nyour choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.30 veg\n Rs 40 Fish\n Rs 85 chicken\n");
if(choice==2)
printf("In dinner\n\nRs.30 veg\n Rs.40 egg\n");
break;
case 2:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.30 dosha\n Rs 40 idali\n Rs 85 chicken\n");
if(choice==2)
printf("In dinner\n\nRs.120 biryani \n Rs.40 egg\n");
break;
case 3:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.30 paneer\n Rs 200 mutton\n Rs 85 manchurian\n");
if(choice==2)
printf("In dinner\n\nRs.50 pulao \n Rs.40 egg\n");
break;
case 4:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.30 paneer tikka\n Rs 40 rajna\n Rs 85 cutlet\n");
if(choice==2)
printf("In dinner\n\nRs.30 masala dosa\n Rs.60 paw bhaji\n");
break;
case 5:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.50 dal Tadka \n Rs 40 Fish\n Rs 35 vada pav\n");
if(choice==2)
printf("In dinner\n\nRs.23 pani puri \n Rs.40 egg(kadhi chawal)\n");
break;
case 6:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.40  puri bhaji\n Rs.27 momos \n Rs.40 chowmin\n");
if(choice==2)
printf("In dinner\n\nRs.40 sushi\n Rs.49 remen\n");
break;
case 7:
printf(" your choice would be\n\n1 lunch \n\n");
    printf("2 dinner\n\n\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice==1)
printf(" IN lunch\n\nRs.39 pad thai\n Rs.36 pasta\n Rs.46 burger\n");
if(choice==2)
printf("In dinner\n\nRs.36 burrito\n Rs.63 cold drink\n");
break; 
default:
printf("invalid choice ");
break;

    }
}