//Nested structure in c
#include<stdio.h>
#include<string.h>

struct address
{
    int house_no;
    char street[20];
    char city[20];
};
struct student
{
    int id;
    char name[20];
    float marks;
    struct address s2; 
};
int main()
{
    struct student s1;
    s1.id=3;
    strcpy(s1.name,"vani");
    s1.marks=92.5;
    printf("id=%d\n",s1.id);
    printf("name=%s\n",s1.name);
    printf("marks=%f\n",s1.marks);
    s1.s2.house_no=12;
    strcpy(s1.s2.street,"MG road");
    strcpy(s1.s2.city,"pune");
    printf("house_no=%d\n",s1.s2.house_no);
    printf("street=%s\n",s1.s2.street);
    printf("city=%s\n",s1.s2.city);

    return 0;
}