/*WAP to input name, roll number and marks in 5 subjects for a student, and display it.*/
#include<stdio.h>
struct stu
{
    char name[50];
    int roll;
    int marks[5];
}st;
void display()
{
    printf("\nDisplaying Information:");
    printf("\nName : %s\n", st.name);
    printf("Roll : %d\n", st.roll);
    printf("Marks :\n");
    for(int i = 0; i < 5; i++)
        printf("%d\n", st.marks[i]);
}
void main()
{
    printf("Enter Name: ");
    scanf("%[^\n]s", st.name);
    printf("Enter Roll: ");
    scanf("%d", &st.roll);
    printf("Enter Marks of 5 Subjects: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &st.marks[i]);

    display();
}