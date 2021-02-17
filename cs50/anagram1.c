#include <stdio.h>
#include <string.h>

int TestAnagram(const char *s1, const char *s2);         //애너그램 판별
void printTestAnagram(const char *s1, const char *s2);   //판별결과 출력

int main(void){
    printTestAnagram("12345", "54321");
    printf("\n");
    printTestAnagram("14258", "25431");
    printf("\n");
    printTestAnagram("11132", "21131");
    printf("\n");
}

void printTestAnagram(const char *s1, const char *s2){
    if (TestAnagram(s1,s2)){
        printf("string %s and %s are ",s1,s2);
        printf("Anagram(true)");
    }else{
        printf("string %s and %s are ",s1,s2);
        printf("not Anagram(false)");
    }
};   

int TestAnagram(const char *s1, const char *s2){
    int i, j;
    for(i=0;s1[i];i++){ //널종단이면 자동false
        for(j=0;s2[j];j++){

            if(s1[i]==s2[j]){  //같으면 나머지 비교할필요없이 다음 순서i로 가야지.
                    break;
            }

        }
        if(s2[j]==0)  //s2[j]단어가 끝나면(같은문자가 없으면)
            {
                return 0;
            }
    }
    return 1;

}
