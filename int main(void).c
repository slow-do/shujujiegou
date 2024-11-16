#include <stdio.h>
struct student
{ 
    int sid;
    char name[200];
    int age;

};
int main(void)
{
    struct student st = {1000,"zs",20};
    printf("%d %s %d\n",st.sid,st.name,st.age);
    st.sid=99;
    strcpy(st.name,"ls");
    st.age = 22;
    printf("%d %s %d\n",st.sid,st.name,st.age);
    return 0;
}