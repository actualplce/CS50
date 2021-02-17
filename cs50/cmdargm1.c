#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{   printf("if(argc==1),printf(argv[0]\n");
    if (argc == 1)     //처음argc는 파일명(./cmdargm1), 다음 argv[]부터 david, nina...이 들어가게됨.
    {   
        printf("hello, %s\n", argv[0]);  //./cmdargm1: hello,./cmdargm1
    }
    else
    {
        printf("hello, world\n"); //./cmdargm1 da: hello,world 그대로출력
    }
    //즉, 처음매개변수 arge는 main함수에서 받게될 인자의 수고, argv[]는 그다음에 입력하는 값(david,nina..)가                되는 것임.
    printf("if(argc==2),printf(argv[0]\n");
    if (argc == 2)      //인자 두개 써주면(./파일이름 인자1: ./cmdargm1 david)     
    {   
        printf("hello, %s\n", argv[1]);  //hello, david
    }
    else
    {
        printf("hello, world\n"); 
    }
}
