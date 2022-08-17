
#include<stdio.h>
int main(){

int bangla,english,math,physics,chemistry,biology;
int total;
float gpa ;

printf("Enter marks of all subjects:");
scanf("%d %d %d %d %d %d",&bangla,&english,&math,&physics,&chemistry,&biology);
total = (bangla +english +math +physics +chemistry);
int temp = 25-total;
int max_bio_grade =biology-2;

if(max_bio_grade>=temp){
    printf("GPA:5.00\n");
}else{
    gpa = (total + max_bio_grade)/5.00;
    printf("GPA:%.2f\n",gpa);
}

return 0;
}

/*
#include<stdio.h>
int main()
{
 float bangla,english,physics,chemistry,biology,mathematics,total,gpa,total_gpa;
 printf("Enter the GPA of six subjects:");
 scanf("%f %f %f %f %f %f",&bangla,&english,&physics,&chemistry,&biology,&mathematics);

total=bangla+english+physics+chemistry+biology;
gpa=total/5;
if(mathematics>2)
{
 total_gpa=(total+mathematics)/5;
 printf("GPA=%f",total_gpa);
}
else
{
    printf("GPA=%f",gpa);
}
return 0;
}
*/
