//structure in c
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    s1.id=3;
    strcpy(s1.name,"gungun");
    s1.marks=92.5;
    printf("id=%d\n",s1.id);
    printf("name=%s\n",s1.name);
    printf("marks=%f\n",s1.marks);
    return 0;
}