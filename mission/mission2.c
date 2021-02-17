#include <cs50.h>
#include <stdio.h>

int main(void){

   float origmny=0;          //원금
    float intrst=0.012;    //이자
    float totmny=origmny*(1+intrst);  //총예상금액
    char retryyn='y';  //대답여부

        while(retryyn=='y'){

        origmny=get_float("목표금액(원금)을 입력해주세요!");
        printf("1년 만기시, 해당 원금(%.2f원)에서 수령하실 수 있는 예상 금액은: %.2f원 입니다.",origmny,totmny);
        retryyn=get_char("다시한번 알아보시겠습니까? (y/n)");  

        }
  
}


