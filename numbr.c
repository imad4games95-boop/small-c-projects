#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main (){
int number , i = 0 , guess , trys = 0;
char def;
srand (time(0));
number = rand() % 100 +1;
printf ("welcome to guessing number game\npick a number from 1 to 100");
printf ("please chose difficulity\n h = HARD 10 trys only \n n = NORMAL 20 trys\n e = EASY 30 trys ");
scanf ("%c" , &def);
if (def == 'h'){
for (i = 0 ; i < 11   ; i++  ){
if( i == 10) {
        printf ("\nyou lost\nthe number was = %d" ,number);
            break;

        
    }    
scanf (" %d", &guess);
trys++;
 
if (guess == number){

    printf ("\nYOU WON CONGRATS");
    printf ("\ntrys attempts = %d", trys );
    break;
}
if (guess >= number +10 && guess <= number + 11){
    printf (" (high)\n");
}
if (guess <= number - 10 && guess >= number - 11){
    printf (" (low)\n");
}
if (guess >= number + 12 && guess <= 100){
    printf ("too high\n");
}
if (guess <= number - 12 && guess >= 0){
    printf ("too low\n");
}
if (guess >= number - 9 && guess <= number + 9){
    printf ("CLOOOSEEE\n");
}
}





}
if (def == 'n'){
for (i = 0 ; i < 21   ; i++  ){
 if( i == 20) {
        printf ("\nyou lost\nthe number was = %d" ,number);
            break;

    }
    scanf (" %d", &guess);

trys++;

if (guess == number){
    printf ("\nYOU WON CONGRATS");
    printf ("\ntrys attempts = %d", trys );
    break;
}
if (guess >= number +10 && guess <= number + 11){
    printf (" (high)\n");
}
if (guess <= number - 10 && guess >= number - 11){
    printf (" (low)\n");
}
if (guess >= number + 12 && guess <= 100){
    printf ("too high\n");
}
if (guess <= number - 12 && guess >= 0){
    printf ("too low\n");
}
if (guess >= number - 9 && guess <= number + 9){
    printf ("CLOOOSEEE\n");
}
}

}





if (def == 'e'){
for (i = 0 ; i < 31   ; i++){
 if( i == 30) {
        printf ("\nyou lost\nthe number was = %d" ,number);
            break;

    }
    scanf (" %d", &guess);
 
trys++;

if (guess == number){
    printf ("\nYOU WON CONGRATS");
    printf ("\ntrys attempts = %d", trys );
    break;
}
if (guess >= number +10 && guess <= number + 11){
    printf (" (high)\n");
}
if (guess <= number - 10 && guess >= number - 11){
    printf (" (low)\n");
}
if (guess >= number + 12 && guess <= 100){
    printf ("too high\n");
}
if (guess <= number - 12 && guess >= 0){
    printf ("too low\n");
}
if (guess >= number - 9 && guess <= number + 9){
    printf ("CLOOOSEEE\n");
}
}

}













    return 0;
}