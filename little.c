#include <stdio.h>

void main (int argc,char *argv[]){
int data,i;

while(EOF!=scanf("%2x",&data))
	for (i=0;i<8;i++)printf("%d",data>>i &0x01);

}