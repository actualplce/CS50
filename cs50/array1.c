#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);    //prototype
int main(void){
    // 동적배열
    // 1. 몇개의 점수과목이 있는지 선언하고 입력받음.
    // 2. 1변수만큼의 변수공간을 가진 배열 선언.
    // 3. 입력받은 배열길이와 배열요소(점수)를 가지고 평균을 구하는 함수 average()를 만듬.    
    // 4. 평균을 구하는 함수를 출력하는 구문 추가.

    int n = get_int("점수 몇개?");  //배열길이
    int scores[n]; //n개의 점수를 받는 scores배열 선언.
    for (int i=0;i<n;i++){
        scores[i]=get_int("score %i: ",i+1); //과목1,2,3...의 점수입력받음.
    }
        printf("당신의 평균: %.1f점",average(n,scores));

}

    float average(int length, int array[]){  //괄호한은 데이터타입입력.
        int sum=0;
        for(int i=0;i<length;i++){
            sum  =sum+ array[i];
        } 
            return (float) sum / (float) length;  //평균(합계/배열길이)
            //for{}다음에 return!
        
    }
