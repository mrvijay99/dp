#include <stdio.h>
#define MAX 25
#define NIL -1
int arr[MAX][MAX];
int count = 0;
int main()
{
    set_nil();
    printf("%d\n",path_to_origin(3,6));
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
