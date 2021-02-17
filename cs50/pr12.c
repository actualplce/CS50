#include <stdio.h>

 
int IsAnagram(const char *s1, const char *s2);
void TestIssAnagram(const char *s1, const char *s2);

int main()

{
    
    TestIssAnagram("13424","42431");
     TestIssAnagram("1342413","42431");
     TestIssAnagram("1342413","13131313");
    // TestIssAnagram("silent","listen");
    // TestIssAnagram("gargen","ranged");

    TestIssAnagram("split","lisp");

}


void TestIssAnagram(const char *s1, const char *s2)  //문자열이 변하지않아야하니까 const로 준다. 

{

    printf("=== Test %s %s ===\n",s1,s2);

    if(IsAnagram(s1,s2))

    {

        printf("Result: Anagram\n");

    }

    else

    {

        printf("Result: Is Not Anagram\n");

    }

   

}

int IsAnagram( char *s1, char *s2)

{

    int i ,j;

    for(i=0;s1[i];i++)//s1[i] 문자가 참이면(거짓은 종료 문자임) 반복

    { printf("for1:%c,%c\n",s1[i],s2[j]);
       printf("for1:i-%i\n",i);

        for(j=0;s2[j];j++)//s2[j] 문자가 참이면(거짓은 종료 문자임) 반복

        { printf("for2:%c,%c\n",s1[i],s2[j]);
        printf("for2:i-%i,j-%i\n",i,j);

            if(s1[i] == s2[j])//s1[i]와 s2[j]가 같으면(char끼리는 ==로 값비교 가능, string은 불가cf.포인터)

            {   printf("if:i-%i,j-%i\n",i,j);

                break;//반복문 탈출(s2[j]은 참인 상태임): s1의i번째와 s2에서 j-0번째부터 비교하다가 s1의 i번째와 맞는게 있으면 break하고 현재for문(for2)를 나와서 for1마저실행.
                              
            }           

        }
        //for2 다 끝났는데도 만약에, 같은문자가 없다?
        if(s2[j]==0)//s2[j] 문자가 거짓이면(같은 문자가 없을 때)

        {

            return 0;//anagram이 아님

        }

    }

    return 1;//anagram임

} 


