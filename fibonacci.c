#include <stdio.h>

#define NIL  -1
#define MAX  100
int arr[MAX];
int fib (int n)
{
    if(arr[n] == NIL){
        if(n <= 1)
            arr[n] = n;
        else
            arr[n] = fib(n-1) + fib(n -2);
    }
    return arr[n];
}

int main ()
{
  int num = 50;
  
  set_nil();
  printf("%d\n",fib(num));
  for(int i =0; i < num;i++)
    printf("%d\t",arr[i]);
  
  getchar();
  return 0;
}

void set_nil()
{
    for(int i = 0;i <MAX;i++)
        arr[i] = NIL;
}
