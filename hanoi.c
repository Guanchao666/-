#include<stdio.h>
void hanoi(int n,char x,char y,char z);
void move(char x,int n,char y);
int i=1;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        i=1;
        hanoi(n,'X','Y','Z');
        putchar('\n');
        }
    return 0;
}
void hanoi(int n,char x,char y,char z)
{
    if(n==1) {move(x,1,z);return ;}
    else{
        hanoi(n-1,x,z,y);
        move(x,n,z);
        hanoi(n-1,y,x,z);
        return ;
        }
}
 
void move(char x,int n,char y)
{
    printf("%2d. Move disk %d from %c to %c\n",i++,n,x,y);
    return ;
}
