#include <cs50.h>
#include <stdio.h>

int main(void){

    string names[3];
    names[0]="EMMA";
    names[1]="EMMA1";
    names[2]="EMMA2";
    printf("%s\n",names[0]);  //names배열은 string
    printf("%c\n,%c\n,%c\n,%c\n,%c\n,%c\n,%c끝\n",names[0][0],names[0][1],names[0][2],names[0][3],names[0][4],names[0][5],names[0][10]  );  
    //names안의 요소는 char가 각각붙은형태 +null종단문자(+1byte)
    for(int i=0;i<200;i++){
        printf("%i: %c\n",i,names[0][i]);  //구조봤음.
    }

}
