#include <cs50.h>
#include <stdio.h>

int main(void){

                        //수박개수변수 , 수박의 기존 재고량
    int watermel=5;   
    int i = 0  ;           //주문건수

    printf("현재 수박의 재고는 %i개 입니다.\n",watermel);
    char ordyn=get_char("수박을 주문하실건가요? y/n"); //주문여부  

    if (ordyn=='y'){ //만약에 주문이 들어오면 
      
       int ordpc=get_int("수박을 몇개 주문하였나요?");

        if(ordpc<watermel){
            i++;  //건수+1
            printf("주문건수: %i건\n",i);
            printf("기존재고량: %i개\n",watermel);

            watermel=watermel-ordpc;  //재고량계산
            printf("남은재고량: %i개\n",watermel);
            float earnmoney=ordpc*10000;  //부가세미포함
            printf("매출액(부가세포함): %.2f원\n",earnmoney*1.1);
        }else{
            printf("죄송합니다.. 재고가 부족합니다 ㅜ");
        }

        }else{
            printf("좋은하루되세요!");
        }


    }
   
