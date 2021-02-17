#include <stdio.h>
#include <cs50.h>

int main(void){
int figure = get_int("Input a number(integer)");
if (figure%2==0){
    printf("%i is an even",figure);
}else{
    printf("%i is an odd",figure);
}
}



