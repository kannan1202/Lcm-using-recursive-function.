#include<stdio.h>
int lcmofnums(int, int);  
int main()
{
    int a, b, lcm;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
	lcm = lcmofnums(a,b);   
    printf("\nLCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}
int lcmofnums(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcmofnums(a,b);
        return temp;
    }
}
