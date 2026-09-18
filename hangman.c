#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int i = 0, j , guesses = 6 , k = 0 , l = 0 , p = 0, found = 0 , g = 6 , win;
  

srand(time(0));

j = rand() % 10;
char guess;
char hidden [20];
   
char words [10][20] = {

"killer",
"kind",
"brother",
"crime",
"skilled",
"people",
"interesting",
"balloon",
"crown",
"extreme",
}; 
for ( k = 0 ;words[j][k] != '\0' ; k++){
        hidden [k] = '_';
    }
printf ("hey welcome to hangman game\n");
printf ("guess the heddin word\n");
for (i = 0 ; i < guesses ; i++){
    
        hidden [k] = '\0';

    printf ("word : %s\n" , hidden);
    scanf (" %c" , &guess);
    printf ("\nremaining attempts %d\n" , g);
    for (l = 0 ; l < 1 ; l++){
                    for (p = 0 ; p < k ; p++){
 
if (words[j][p] == guess){
   
hidden[p]= guess;
found = 1;
            }
        }
            if (found == 1){
printf ("Good One\n");
l = 0;
guesses++;
found = 0;
}else {
g--;
printf ("WRONG\n");
found = 0;
l = 0;
}
}
if (g == 5){
    printf (" +----\n |   |\n O   |\n     |\n     |\n     |\n=====|\n");

}
if (g == 4){
    printf (" +----\n |   |\n O   |\n |   |\n     |\n     |\n=====|\n");

}
if (g == 3){
    printf (" +----\n |   |\n O   |\n(|   |\n     |\n     |\n=====|\n");

}
if (g == 2){
    printf (" +----\n |   |\n O   |\n(|)  |\n     |\n     |\n=====|\n");

}
if (g == 1){
    printf (" +----\n |   |\n O   |\n(|)  |\n(    |\n     |\n=====|\n");

}
if (g == 0){
    printf ("you KILLED HIM");
    printf (" +----\n |   |\n O   |\n(|)  |\n( )  |\n     |\n=====|\n");
break;
}
win = 1;

                for (p = 0 ; p < k ; p++){

if (hidden[p] != words[j][p]){
            
win = 0;
    break;
                }
            }

if (win == 1){
    printf ("CONGRATS YOU SAVED HIM");
    break;


}
}









    return 0;
}
