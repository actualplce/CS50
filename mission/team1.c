#include <stdio.h>
#include <string.h>

char* get_food(char* today);

int main(void)
{
    while(1)
    {
        char input[4]; 
        printf("요일을 입력해주세요.");
        scanf("%s", input);

        printf("오늘의 메뉴는 %s입니다",get_food(input));
    }
}

char* get_food(char* today)
{
    char* menu[7] = {"청국장", "비빔밥", "된장찌개", 
                    "칼국수", "냉면", "소불고기", "오삼불고기"};
    char* fixDay[7] = {"월요일", "화요일", "수요일", 
                        "목요일", "금요일", "토요일", "일요일"};
    char* aws;

    for(int i=0; i<7; i++ )
    {
        if(strcmp(fixDay[i], today) == 0)
        {
            aws = menu[i];
        }
    }
    return aws;
}
