#include<stdio.h>
#define NUMBER_OF_GRADES 9

void print_score(int score[], int length){
    printf("점수 : ");
    for(int i = 0; i<length; i++)
    printf("%5d",score[i]);
    printf("\n");
    }
void print_grade(char *grade[], int length)
{
    printf("학점 : ");
    for(int i = 0; i<length; i++)
    printf("%5s", grade[i]);
    printf("\n");
}

int main()
{
// const int NUMBER_OF_GRADES = 9;
int score[NUMBER_OF_GRADES] = {95,90,85,80,75,70,65,60,0};
char *grade[NUMBER_OF_GRADES] = {"A+","A","B+","B","C+","C","D+","D","F"};
printf("학점 프로그램\n");
printf("종료를 원하면 \"999\" 를 입력\n");
printf("학점 테이블\n");
print_score(score,NUMBER_OF_GRADES);
print_grade(grade,NUMBER_OF_GRADES);
int n;
while(1){
printf("성적을 입력하세요 (0 ~ 100) : ");
scanf("%d",&n);
if((n>100 || n<0) && n!=999)
printf("성적을 올바르게 입력하세요! (0 ~ 100)\n");
else if(n==999){
printf("학점 프로그램을 종료합니다.\n");
break;
}
else if(n>=score[0])
printf("%s\n",grade[0]);
for(int i=0;i<NUMBER_OF_GRADES;i++){
if(n<score[i] && n>=score[i+1])
printf("%s\n",grade[i+1]);
}
}
return 0;
}
