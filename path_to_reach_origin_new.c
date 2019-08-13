#include <stdio.h>
#define MAX 25
#define NIL -1
int arr[MAX][MAX];
int count = 0;
int main()
{
    int T;
    int n[100];
    int m[100];
    set_nil();
    int i =0;
    scanf("%d",&T);
    for(i = 0;i < T;i++){
        scanf("%d",&n[i]);
        scanf("%d",&m[i]);
}
   // for(i = 0;i < T;i++)
     //   printf("%d\n",path_to_origin(n[i],m[i]));


    for(i = 0;i < T;i++)
        printf("n[%d]  m[%d]\n", n[i], m[i]);
}

int path_to_origin(int x, int y)
{
    if(arr[x][y] == NIL) {
        if(x == 0 || y == 0)
        {
            return 1;
        }

        arr[x][y] = path_to_origin(x-1, y) + path_to_origin(x, y-1);
    }
    return arr[x][y];

}

void set_nil()
{
    int i;
    int j;
    for(i = 0; i < MAX; i++)
    {
        for(j = 0; j < MAX; j++)
        {
            arr[i][j] = NIL;
        }
    }
}

