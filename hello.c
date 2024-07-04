#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int countH = 0;
int countT = 0;

printf("Tossing a coin...\n");

srand( (int)time(NULL) );

for(int i = 1; i < 4; i++){


if(rand() % 2 == 0) {
    printf("Round %d: Head\n",i);//Headは表
    countH++;
}

else{
printf("Round %d: Tail\n",i);
countT++;
}



}

printf("Heads %d, Tails %d\n",countH,countT);


if(countH > countT) printf("You won!\n");
else printf("You lost!\n");



}