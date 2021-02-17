#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

string weekdy="월";
weekdy = get_string("요일을 입력하세요: \n");

if (strcmp(weekdy,"월")==0){
        printf("%s: 청국장",weekdy);
    }else if(strcmp(weekdy,"화")==0){
        printf("%s: 비빔밥",weekdy);
    }else if(strcmp(weekdy,"수")==0){
        printf("%s: 된장찌개",weekdy);
    }else if(strcmp(weekdy,"목")==0){
        printf("%s: 칼국수",weekdy);
    }else if(strcmp(weekdy,"금")==0){
        printf("%s: 냉면",weekdy);
    }else if(strcmp(weekdy,"토")==0){
        printf("%s: 소불고기",weekdy);
    }else if(strcmp(weekdy,"일")==0){
        printf("%s: 오삼불고기",weekdy);
    }else{  
    }
}

