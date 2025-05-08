#include <stdio.h>

int main(){
int  i = 1;

printf("torre : \n");
while (i <= 5)
{
printf("%d casas para direita\n", i);
i++;
} 

printf("bispo:\n");
int num = 1;
do
{
printf("%d para cima e a direita\n");
num++;
} while (num==5);
printf("rainha:\n");
for (int b = 1; b <= 8; b++)
{
printf("%d para esquerda\n", b);
}







return 0;


}
