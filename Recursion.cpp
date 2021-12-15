#include<iostream>

using namespace std;

void arraySort(int array[10])
{
    
}


int fibNum(int n)
{
    if (n==0 || n==1)
    {
        return n;;
    }
    return fibNum(n-1)+fibNum(n-2);
}

long int power(int basepow, long int exppow)
{
    if(exppow==0)
    {
        return 1;
    }
    int prevPow= power(basepow, exppow-1);
    return basepow * prevPow;


}
long int factoral(int n)
{
    if(n==0)
    {
        return 1;
    }

   int prevfac= factoral(n-1);
   return n*prevfac;
}

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10}, b;
    arraySort(a);

    return 0;
}