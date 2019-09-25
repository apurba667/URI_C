#include<stdio.h>
#include<string.h>
struct Student
{
    char name[50];
    int id,age,semester;
    char mobi[12];
    float cgpa;
};
void print(struct Student s)
{
    int i;
    puts(s.name);
    printf("%d",s.id);
    printf("%d",s.age);
    for (i=0;i<11;i++){
        printf("%d",s.mobi[i]);
    }
    printf("%d",s.semester);
    printf("%f",s.cgpa);
}
void update_student(struct Student *s)
{
    strcpy(s->name, "Anik");
}
int main ()
{
    int i;
    struct Student Apurba;
    printf("Input Your Name =\n");
    scanf("%[^\n]s", Apurba.name);
    printf("Input Your Id =\n");
    scanf("%d",&Apurba.id);
    printf("Input your Age =\n");
    scanf("%d",&Apurba.age);
    printf("Input Your Mobile Number =\n");
    scanf("%s", Apurba.mobi);
    printf("Input your Semester =\n");
    scanf("%d",&Apurba.semester);
    printf("Input Your CGPA = \n");
    scanf("%f",&Apurba.cgpa);

    printf("Name: %s\n", Apurba.name);
    printf("ID: %d\n", Apurba.id);
    printf("Age: %d\n", Apurba.age);
    printf("Mobile: %s\n", Apurba.mobi);
    printf("Semester: %d\n", Apurba.semester);
    printf("CGPA: %.2f\n", Apurba.cgpa);
    return 0;
}
