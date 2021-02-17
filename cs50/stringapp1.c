#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(void){

    //emma 그대로 출력하기(1)-strlen(string.h,문자열의 길이) 이용
    printf("emma 그대로 출력하기(1)-strlen(string.h,문자열의 길이) 이용\n");
    
    string s = get_string("name?");
    for(int i=0,n=strlen(s);  i<n ;   i++){  
        //변수n=string길이 
        //저장공간보다 속도에 비중을 두어 n변수에 string s의 길이를 바로 저장하여 사용. (i<strlen(s): strlen(s)             를 그때그때 물어봐야되서 속도가 떨어짐. 대신 저장공간은 약간남겠지만.)
        printf("%c",s[i]); //emma
    }

    //emma 그대로 출력하기(2)-\0(null종단문자) 이용
    printf("\nemma 그대로 출력하기(2)-(null종단문자) 이용\n");
    
    string st = get_string("name?");
    for(int i=0; st[i]!='\0';i++){
        printf("%c",st[i]);   //emma
    }

    //emma를 EMMA로 출력하기-ASCII 활용
    printf("\nemma를 EMMA로 출력하기(1)-ASCII 활용\n");
    string str=get_string("name?");
    for(int i=0, n=strlen(str);i<n;i++){
    if( str[i] >= 'a' && str[i] <= 'z'){
        printf("%c",str[i]-32);    //EMMA
    }else{
    printf("%c",str[i]);   //대문자면 그냥 출력
    }
    }


    //emma를 EMMA로 출력하기-touppercase 도움함수 사용
    printf("\nemma를 EMMA로 출력하기-toupper 도움함수 사용\n");

    string stri=get_string("name?");
    for( int i=0, n=strlen(stri) ; i<n ; i++ ){
        printf("%c",toupper(stri[i]));   //EMMA/ctype.h추가
    }

}
