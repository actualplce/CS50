#include <stdio.h>



//x와 y를 바꾸를 프로그램
int main(void)
{               //물론, 단순히 이렇게 할수있지만, 코드의 효율성을 위해 x와 y를 바꾸는 함수를 쓰면 더 좋겠지.
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);   //x=1,y=2   
    int tmp = x;                                //여기서는 같은 main함수 안에들어있기때문에 가능
    x = y;
    y = tmp;        
    
    printf("x is %i, y is %i\n", x, y);   //x=2,y=1
    

}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;    
}
