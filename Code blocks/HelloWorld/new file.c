#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int stack[1080];
int count =0;

void push(int x)
{
    if(count == 256)
    {
        fprintf(stderr,"There 's no space in stack \n");
        return;
    }
    stack[count] = x;
    count ++;
}
int pop()
{
    if(count == 0)
    {

        fprintf(stderr, "Nothing to take from stack \n");
        return -1;
    }
    int ans = stack[count -1];
    count--;
    return ans;

}
int main(int argc, char* argv[])
{
    push(1);
    push(2);
    push(3);
    push(5);

    int i;
    for(i =0;i<4;i++)
    {

        printf("%d ",pop());
    }

    return 0;

}
