#include <unistd.h>
#include <stdio.h>

int main(void){
    for(int i=1; ;i*=2){//i초기값=0;true(무한반복);i=i*2
			printf("%i\n",i);
				sleep(1);// sleep 1초. //(from unistd.h)
			}
}
