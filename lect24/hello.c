// multiple structure of student
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
    struct student s1[3];
    for(int i=0;i<3;i++)
    {
        printf("enter id,name,marks of student %d\n",i+1);
        scanf("%d %s %f",&s1[i].id,s1[i].name,&s1[i].marks);
    }
    for(int i=0;i<3;i++)
    {
    printf("details of student %d\n",i+1);
        printf("id=%d\n",s1[i].id);
        printf("name=%s\n",s1[i].name);
        printf("marks=%f\n",s1[i].marks);
    }
    return 0;
}