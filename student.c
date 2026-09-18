
#include<stdio.h>
struct student {
int age;
char name[99];
float grade1 , grade2 , grade3;

};
int main (){
    float high = 0 , lowest = 9999999;
int i , number , h = 0 , b = 0 , j = 0 , l = 0 , n = 0  , o = 0 , f = 0 , c = 0;
 struct student var[99];

    for (i = 0 ; i < 99 ; i++){
    
printf ("1/ add student\n2/ show students\n3/ show grades\n4/ calculate student average\n5/ find highest grade\n6/ find lowest grade\n7/ exit");
scanf (" %d" , &number);
if (number == 1){
printf ("please enter the name\n");
scanf ( " %s" , var[h].name);
printf ("please enter the age\n");
scanf (" %d" , &var[h].age);
printf ("Please enter the first grade\n");
scanf (" %f" , &var[h].grade1);
printf ("Please enter the second grade\n");
scanf (" %f" , &var[h].grade2);
printf ("Please enter the third grade\n");
scanf (" %f" , &var[h].grade3);
h++;
}
if (number == 2){
for (b = 0 ; b < h ; b++){
printf ("student %s\n" , var[b].name);
}
}
if (number == 3){
for (j = 0 ; j < h ; j++){

printf ("student name : %s\n" , var[j].name);
printf ("first grade is %.2f\n" , var[j].grade1);
printf ("second grade is %.2f\n" , var[j].grade2);
printf ("third grade is %.2f\n" , var[j].grade3);
printf ("average score is %.2f\n" , (var[j].grade1 + var[j].grade2 + var[j].grade3) / 3);

}
}
if (number == 4){
for (l = 0; l < h ; l++){
printf ("student %s\n" , var[l].name);
printf ("average is %f\n" , (var[l].grade1 + var[l].grade2 + var[l].grade3)/3);
}
}

 if (number == 5){
for (n = 0 ; n < h ; n++){
if ((var[n].grade1 + var[n].grade2 + var[n].grade3)/3 > high){
high = (var[n].grade1 + var[n].grade2 + var[n].grade3)/3;
o = n ;

}


printf ("student %s\n" , var[o].name);
printf ("highest average is %.2f\n" , high);
}
 }
if (number == 6){
for (f = 0 ; f < h ; f++){
if ((var[f].grade1 + var[f].grade2 + var[f].grade3)/3 < lowest){
lowest = (var[f].grade1 + var[f].grade2 + var[f].grade3)/3;
c = f;
}
}
printf ("student %s\n" , var[c].name);
printf ("lowest score is %.2f\n" , lowest);
}
if (number == 7){
    printf ("thank you\n");
break ;   
}
    }



return 0;
}

