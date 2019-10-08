//Student Grades Report

#include<stdio.h>
struct students{
    char name[10];
    char id[10];
};
struct courses{
    char subject[10];
    char course_id[10];
    float score;
    int credit;
};

int main(){
int numberOfStudents,numberOfCourses;
printf("Enter the number of students:\n");
scanf("%d",&numberOfStudents);
struct students student[numberOfStudents];

//registering students

for(int i=0;i<numberOfStudents;i++){
    printf("Id of student %d:   \n",i+1);
     scanf("%s",&student[i].id);
    printf("Name of student %d: \n",i+1);
    scanf("%s",&student[i].name);

}

printf("enter the number of courses:\n");
scanf("%d",&numberOfCourses);
struct courses course[numberOfCourses];

//registering courses taken

for(int j=0;j<numberOfCourses;j++){

        printf("Id of course %d:  \n",j+1);
        scanf("%s",&course[j].course_id);
        printf("Name of course %d: \n",j+1);
        scanf("%s",&course[j].subject);
        printf("Credit hour of course %d: \n",j+1);
        scanf("%d",&course[j].credit);
        printf("Score of course %d: \n",j+1);
        scanf("%f",&course[j].score);
    }

//calling a function to display data
    display(student,course,&numberOfStudents,numberOfCourses);

}

void display(struct students pupil[],struct courses cursus[],int *numSts,int numCrs){

for(int i = 0;i<*numSts;i++){
     printf("\n\nAxum University\n");
     printf("\nStudent Grade Report\n");
     printf("----------------------\n");
     printf("\nId:    %s\nName:  %s\n\n",pupil[i].id,pupil[i].name);
       printf("Code     Grade\n");
     for(int j=0;j<numCrs;j++){

      printf("%s         ",cursus[j].course_id);
      if(cursus[j].score >=85){
        printf("A");
      }
      else if(cursus[j].score >=75){
        printf("B");
      }
      else if(cursus[j].score >=65){
        printf("C");
      }
      else if(cursus[j].score >=55){
        printf("D");
      }
      else{
        printf("F");
      }
      printf("\n");
     }
     printf("\n");
     printf("Course Matrix\n");
     printf("Code     Course name     Credit\n");
     for(int j=0;j<numCrs;j++){

        printf("%s        %s            %d\n",cursus[j].course_id,cursus[j].subject,cursus[j].credit);

      }


}

}
