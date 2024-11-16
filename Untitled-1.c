#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct apple{
    int weight;
    int color;
};
struct apple *get_apple_info()
{
struct apple *a1;
a1 = malloc(sizeof(struct apple));
if(a1 == null)
{
    printf("malloc error.\n");
    return;
}

a1->weight = 2;
a1->color = 1;
return a1;
}
int main (int argc,char *argv[])
{
    typeof(get_apple_info()) r1;
    r1 = get_apple_info();
    printf("apple weight:%d\n",r1->weight);
    printf("apple color:%d\n",r1->color);
    return 0;
}