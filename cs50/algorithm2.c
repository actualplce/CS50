#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int h)
{
    //높이가 0이라면 (그릴 필요가 없다면)
    if (h == 0)
    {
        return;    //메소드 끗.
    }               //이 구문이 없으면 컴파일에러.
                //h==0이어서 아무것도그리지않아야되는데 이 구문이 없으면 밑의 draw(h-1)가 draw(-1)가 되버려 에러발생.

    // 높이가 h-1인 피라미드 그리기
      draw(h - 1);//전에했던거 더하기 ( 하나씩 쌓는거 )

    // 피라미드에서 폭이 h인 한 층 그리기
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
 
}
