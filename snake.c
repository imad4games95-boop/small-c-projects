#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
   
    srand (time(0));
    int i , n , foodx , foody , x , y , j = 0 , p = 5 , m = 1 , h = 0 , score = 0,v = 0 , k , l , u ,t , z , r;
char board [12][22];
char play;
printf ("welcome to c snake game");
printf ("to move you can use w a s d\n");
printf ("score = %d" , score);
    foodx = rand () %20;
foody =rand () %10;



    for (h = 0 ; h < 999 ; h++){

for (y = 0 ; y < 10 ; y++){
    for (x = 0 ; x < 20 ; x++ ){
        board [y][x] = ' ';
    }
}
    

board [foody][foodx] = '@';
board [p][m] = 'O';


printf ("######################");
for (y = 0 ; y < 10 ; y++){
    printf ("\n#");
    for (x = 0 ; x < 20 ; x++ ){
        
    
printf ("%c", board [y][x]);

    }

printf ("#");
 



}
printf ("\n######################\n");
scanf (" %c" , &play);
if (play == 'w'){
board [p][m] = ' ';
z = p;

p = p - 1;
board [p][m] = 'O';
i = 0;
j = 0;
if (p == foody && foodx == m){
for (u = 0; u <= score; u++ ){
board [z+u][m] = 'O';
}
}
if(p < 0 || p >= 10 ){
       printf ("\nyou lost \n your score is = %d\n" , score);
       break;
}
}if (play == 's'){
board [p][m] = ' ';
z = p;

 p = p + 1;
board [p][m] = 'O';
i = 0;
j = 0;
if (p == foody && foodx == m){
for (r = 0; r <= score; r++ ){
board [z-r][m] = 'O';
}
}
if (p < 0 || p >= 10){
       printf ("\nyou lost \n your score is = %d\n" , score);
       break;
}
}if (play == 'a'){
board [p][m] = ' ';
m = m - 1;
board [p][m] = 'O';
i = 0;
j = 0;
l = m;
if (p == foody && foodx == m){
for (t = 0; t <= score; t++ ){
board [p][l+t] = 'O';
}
}
if (m < 0 || m >= 20){
       printf ("\nyou lost \n your score is = %d\n" , score);
 break;   
}
}if (play == 'd'){
board [p][m] = ' ';
m = m + 1;    
board [p][m] = 'O';
i = 0;
j = 0;
l = m;

if (p == foody && foodx == m){
for (k = 0; k <= score; k++ ){
board [p][l-k] = 'O';


}
}


if (m < 0 || m >= 20){
       printf ("\nyou lost \n your score is = %d\n" , score);
       break;
}
}
if (board [foody][foodx] == 'O'){

        foodx = rand () %20;
foody = rand () %10;
score++;
v = 0;
printf ("score = %d\n" , score);
}
}
    

    return 0;
}