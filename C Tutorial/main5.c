#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;
    printf("Enter yor age: ");
    scanf("%d",&age);
    printf("You are %d years old\n",age);

    double gpa;
    printf("Enter yor gpa: ");
    scanf("%lf",&gpa);
    printf("Your gpa is %f\n",gpa);
    
    char grade;
    printf("Enter yor grade: ");
    scanf("%c",&grade);
    printf("Your grade is %c",grade);
    
    char name[20];
    printf("Enter yor name: ");
    scanf("%s",name);
    printf("Your name is %s\n",name);

    char namen[20];
    printf("Enter yor name: ");
    fgets(namen,20,stdin);
    printf("Your name is %s\n",namen);
    
    return 0;
}