#include<stdio.h>

int main(){
    struct marks{
        float english;
        float maths;
        float chem;
        float hindi;
        float physics;
    };
    
    struct marks kailash;
    struct marks Rajat;

    kailash.chem=34;
    kailash.english=243;
    kailash.hindi=345;
    kailash.maths=342;
    kailash.physics=23;

    printf("%f\n",kailash.chem);
    printf("%f\n",Rajat.english);







    // struct studentInfo{
    //     char name[20];
    //     int rollno;
    //     int mob;
    //     short int age;
    // };

    // struct studentInfo stu1;
    // struct studentInfo stu2;
    // struct studentInfo stu3;
    // struct studentInfo stu4;

    // stu1.name[20]="Kailash";
    // stu1.rollno=65347654;
    // stu1.mob=3972638;
    // stu1.age=23;

    

    // stu1.name[20]="Kailash";
    // stu1.rollno=65347654;
    // stu1.mob=3972638;
    // stu1.age=23;

    // stu2.name[20]="Kailash";
    // stu2.rollno=65347654;
    // stu2.mob=3972638;
    // stu2.age=23;

    return 0;
}