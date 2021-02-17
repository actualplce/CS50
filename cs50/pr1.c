
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s  = get_string("s: ");
    string t = get_string("t: ");

    int j = 0;
    for (int i = 0; s[i] != 0x00000000; i++) //8비트니까(64비트 설정 컴파일러기준).
    {
        j++;
        if(s[i] != t[i])
        {
            printf("different\n");
            return 1;
        }
    }
    if(t[j] != 0x00000000)
    {
        printf("different\n");
        return 2;
    }
    printf("same\n");
    return 0;
}
