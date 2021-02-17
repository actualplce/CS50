#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//학점테이블
const int Number_of_Grades=9;
const int SCORES[Number_of_Grades]={95,90,85,80,75,70,65,60,0};
const char *GRADES[Number_of_Grades]={"A+","A","B+","B","C+","C","D+","D","F"};

int main(int argc, char *argv[]){
    // 유효성 체크: 0 <= 성적 <= 100
    // - “120” 입력 -> 성적을 올바르게 입력하세요! (0 ~ 100)
 if(*argv >= 0 && *argv <=100){
     continue;
 }else{
     printf("현재 %i점을 입력하셨습니다.\n 0~100범위에 해당하는 점수를 입력하십시오.",argv);
    return -1;
 }

 char *grade=calculateGrade(argv,SCORES,GRADES,NUMBER_OR_GRADES);
 printf("학점: %s\n",grade);

    return 0;






 
}

char *calculateGrade(int totalScore, const int scores[], const char *grades[], int length){
    char *grade;

    for(int i=0;i<length;i++){
        if(totalScore>=scores[i]){
            grade =malloc(sizeof(char)*strlen(grads[i]));
            strcpy(grade,grades[i]);
            break;
        }
    }
}
