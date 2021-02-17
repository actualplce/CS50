#include <stdio.h>
#include <stdlib.h>



void ten_to_two(unsigned n) {
    unsigned a = 0x80000000; // 1000 0000 0000 0000 0000 0000 0000 0000(2) <약 21억>
    for (int i = 0; i < 32; i++) {
        if ((a & n) == a)
            printf("1");
        else
            printf("0");
        a >>= 1;
    }
}

// 10진수 -> 2진수 변환 (반복적 버전: 배열)
void ten_to_two_2(unsigned n) {
    // 동적 배열 생성 
    int size = 1;
    int *a = (int*)calloc(sizeof(int)*size);
    // 배열에 원소 넣기 ex) 11 => 1 1 0 1 (2로 나누고 나머지 값) 
    for (int i = 0; n != 0; i++) {
        a[i] = n % 2;
        n /= 2;
        if (n != 0) {
            size++;
            a = realloc(a, sizeof(int)*size);
        }
    }
    // 배열 원소 거꾸로 출력 
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    free(a);
}

// 10진수 -> 2진수 변환 (재귀적 버전)
void ten_to_two_j(unsigned n) {
    if (n < 2) { // n==1 (이전 n이 2이거나 3)
        printf("%d", n);
    }
    else {
        ten_to_two_j(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    unsigned num = 0;
    printf("-1 입력시 종료됩니다.\n\n");
    while (num != -1)
    {
        printf("숫자를 입력하세요 \n(4294967295까지 처리 가능): ");
        scanf_s("%u", &num);
        printf("\n반복적 버전 : 비트\n");
        ten_to_two(num); // 반복적 버전 : 비트 
        printf("\n\n반복적 버전 : 배열\n");
        ten_to_two_2(num); //    반복적 버전 : 배열
        printf("\n\n재귀적 버전\n");
        ten_to_two_j(num); // 재귀적 버전 
        printf("\n\n");
    }
    return 0;
}
