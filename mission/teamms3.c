#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 10

typedef int element; // 큐 원소의 자료형 int로 정의

typedef struct{ // 큐 타입
   int front;
   int rear;
   element data[MAX_QUEUE_SIZE]; // 1차원 배열 큐 선언
}QueueType;

QueueType *createQueue() // 큐 생성 함수
{
   QueueType *q;
   q = (QueueType *)malloc(sizeof(QueueType)); // 큐 사이즈만큼 메모리 할당
   q->rear = -1; // rear 초기값 설정
   q->front = -1; // front 초기값 설정
   return q;
}
void insert(QueueType *q)
{ // 큐에 값 삽입하기
  if(q->rear == MAX_QUEUE_SIZE-1) // 큐가 포화 상태인 경우 삽입 X
{
    printf("Queue가 꽉 찼습니다.\n");
}
else{
// 큐에 빈 공간이 남은 경우 -> 값 입력받아 삽입
   q->rear++; // 원소 삽입 위치 <== rear = rear+1
   int num; // 삽입할 원소의 값 선언 
   printf("값 입력 : ");
   scanf("%d",&num); // 원소 값 입력받음
   q->data[q->rear] = num; // 큐 내에 삽입될 위치에 입력받은 값 대입
   printf("%d 삽입됨\n",num);
  }
}
int delete(QueueType *q)
{
   if(q->front == q->rear) // 큐 공백 상태일 경우
{
    printf("Queue가 비어있습니다.\n");
   return -1; 
}
else{ // 큐가 공백 상태가 아닐 경우
   q->front++; // 원소 삭제 위치
   int num = q->data[q->front]; // 삭제 위치의 원소(데이터)를 num에 대입
   printf("%d 삭제됨\n", num); // 어떤 수가 삭제됐는지 알려줌
   return num;
  }
}
void display(QueueType *q) // 큐 원소 나타내기
{
   int i;
   for(i=q->front+1; i<=q->rear; i++)
         printf("%5d",q->data[i]);
   printf("\n");
}
void print() // 1~4 항목 나타내기
{
    printf("===============================\n");
    printf("1. 삽입\n");
    printf("2. 삭제\n");
    printf("3. 조회\n");
    printf("4. 종료\n");
    printf("=================================\n");
}


int main()
{
int n; // 항목 선택에 쓰이는 변수 n
int quit = 0; // while문 무한루프 -> 4번 선택시 탈출하기 위해 사용
QueueType *q = createQueue(); // 큐 생성
while(!quit){ // quit=1이 아닌 경우 무한루프
printf("입력 : ");
scanf("%d",&n);
switch(n)
{
 case 1 : // 1. 삽입
   insert(q);
    print();
    break;
 case 2 : // 2. 삭제
    delete(q);
    print();
    break;
 case 3 : // 3. 조회
    display(q);
    print();
    break;
 case 4 : // 4. 종료
   printf("프로그램 종료!\n");
   quit = 1; // 무한루프 빠져나오기
   break;
 }
}
return 0;
}
