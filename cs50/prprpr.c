#include <stdio.h>

int main(void){
    // get_long, get_float, get_char -> scanf
    long l;
    printf("입력하쇼 long\n");
    scanf("%li",&l);  //1234567890입력
    printf("입력받은 l: %li\n\n",l);    //1234567890

    float f;
    printf("입력하쇼 float\n");
    scanf("%f",&f);         //123.1234567890
    printf("입력받은 f: %f\n\n",f); //123.123459

    char c;
    printf("입력하쇼 char\n");
    scanf("%c",c);  //입력안받고 그냥 넘어가버림??!.
    printf("입력받은 c: %c\n\n",c);
   
}
