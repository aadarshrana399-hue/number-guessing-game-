#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int number,guess,attempts=0;

srand(time(0));
number=rand()% 100+1; //Random number between 1 to 100
printf("Welcome to the number guessing game!\n");
printf("Guess the number between  1 to 100.\n");
do{
printf("Enter your guess:");
scanf("%d",&guess);
attempts++;
if(guess>number){
printf("Too high! try again \n");
}
else if (guess<number){
printf(" Too low! try again \n");
}else{
printf("Congratulatins! You guessed the right number in %d attempts.\n",attempts);
}
}while(guess!= number);
return 0;
}