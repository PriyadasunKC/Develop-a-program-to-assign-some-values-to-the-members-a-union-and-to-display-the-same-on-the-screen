#include <stdio.h>

struct stu
{
    char name[25];
    int rolNo;
    int marks;
};

union student
{
    struct stu s;
};

void display(union student stu);
int main()
{

    union student stu;
    display(stu);
    return 0;
}

void display(union student stu)
{

    printf("Enter Details\n\n");
    printf("Enter Name : ");
    scanf(" %[^\n]s", &stu.s.name);
    printf("Enter roll Number : ");
    scanf("%d", &stu.s.rolNo);
    printf("Enter Marks : ");
    scanf("%d", &stu.s.marks);

    printf("\nDisplay Details\n\n");
    printf("- Name \t\t: %s\n- Roll number \t: %d\n- Marks \t: %d\n", stu.s.name, stu.s.rolNo, stu.s.marks);
}