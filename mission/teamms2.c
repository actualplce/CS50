#include <stdio.h>
#define SIZE 500000

int main(int arge, char*argv[]) {
int n;

scanf("%d", &n);

// 1부터 N의 숫자중 K가 빠진 배열
int partArr[SIZE];
int lengthOfPartArr = n-1;
int sum = 0;

for(int i=0; i < lengthOfPartArr; i++)
{
scanf("%d", &partArr[i]);
sum += partArr[i];
}

// TODO: n과 partArr를 이용하여, K를 구하라
int partialSum = n * (n + 1) / 2;
int answer = partialSum - sum;

printf("K = %i\n", answer);

return 0;
}
