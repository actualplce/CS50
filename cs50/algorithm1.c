#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[4];

    people[0].name = "EMMA";
    people[0].number = "617–555–0100";
    people[1].name = "RODRIGO";
    people[1].number = "617–555–0101";
    people[2].name = "BRIAN";
    people[2].number = "617–555–0102";
    people[3].name = "DAVID";
    people[3].number = "617–555–0103";

    // EMMA 검색
    string namep=get_string("name?");  //입력받음.
    for (int i = 0; i < 4; i++)
    { 
        if (strcmp(people[i].name, namep) == 0)  //맞으면 
        {
            printf("Found %s\n", people[i].number);  //번호보여줌.
            return 0;
        }
    }
    printf("Not found\n"); //4번기회다 아니면 NOT FOUND출력
    return 1;
}
