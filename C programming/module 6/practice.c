#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a,max=0;
   for(int i=1;i<=n;i++)
   {
   scanf("%d",&a);
   if(a>max)
   {
   max=a;
   }
   printf("%d\n",max);
   }

    return 0;
}
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).