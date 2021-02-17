#include <stdio.h>

int main(void)
{
int inventory = 5;
int product_price = 10000;
float vat = 0.1;
int orders = 3;

int sales = orders * product_price * (1+vat);
printf("\n");
printf("주문건수 : %d개\n", orders);
printf("기존 재고량 : %d개\n", inventory);
printf("남은 재고량 : %d개\n", inventory - orders);
printf("매출액(부가세포함) : %d원\n", sales);
}
