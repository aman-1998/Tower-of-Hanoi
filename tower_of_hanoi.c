#include<stdio.h>
static int count=0;
void tower_of_hanoi(int n,char src,char aux,char des);
int main()
{
    int n;
    printf("Enter no. of discs in source peg: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'s','a','d');
    return 0;
}
void tower_of_hanoi(int n,char src,char aux,char des)
{
    if(n==1)
        printf("\nstep %d : Move the top most disc from %c to %c",++count,src,des);
    else
    {
        tower_of_hanoi(n-1,src,des,aux);
        tower_of_hanoi(1,src,aux,des);
        tower_of_hanoi(n-1,aux,src,des);
    }
}
