#include<stdio.h>
void main(){
    printf("\n\n\n\n\n..............data types in c............\n\n\n\n\n");
    //data type in c 

    /*
    1 . int -> store Inteage value  4 bytes
    2 . float -> store floating value 4 bytes
    3 . char -> store single character value in c 1 bytes 
    4 . double -> this is large container for store any value 8 bytes
    .......
    */
   // variable is the name of container which is use for assign the name 
   int a = 4;
   char ch = 'j';
   float fl = 5.4;
    double db = 3434.34343;
   //%d is the format specifier which is use for int type of variables 
   //%f => float
   // %c => char
   // %s => string
   //%lf => double
   printf(" int : %d\n char : %c \n float : %f \n double : %lf \n",a,ch,fl,db);
   
   

}