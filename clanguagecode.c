#include<stdio.h>
#include<string.h>

struct student{
  char name [100];
  int roll;
  float cgpa;
};

  int main() {
     struct student s1;
     s1.roll = 2401207;
     s1.cgpa =  9.8;

     strcpy(s1.name, "Awanish singh sengar");
     printf("student name = %s \n", s1.name);
     printf("student roll = %d \n", s1.roll);
     printf("student cgpa = %f \n", s1.cgpa);

     struct student s2;
     s2.roll = 2401217;
     s2.cgpa = 9.8;
     strcpy(s2.name, "himanshu sharma");
     printf("student name = %s\n", s2.name);
     printf("student roll = %d\n", s2.roll);
     printf("student cgpa = %f\n", s2.cgpa);

     return 0;
    }
