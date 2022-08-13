#include<stdio.h>
int main(){

float p_mark,c_mark,b_mark,m_mark,com_mark, total_mark, percentage;
printf("Enter Physics, Chemistry, Biology, Mathematics and Computer marks:");
scanf("%f %f %f %f %f",&p_mark,&c_mark,&b_mark,&m_mark,&com_mark);

total_mark = p_mark + c_mark + b_mark+ m_mark+com_mark;
percentage = (total_mark/500)*100;

if(percentage>=90){
    printf(" Percentage = %.2f %% \t Grade=A\n",percentage);
}else if(percentage>=80){
    printf(" Percentage = %.2f %% \t Grade=B\n",percentage);
}else if(percentage>=70){
    printf(" Percentage = %.2f %% \t Grade=C\n",percentage);
}else if(percentage>=60){
    printf(" Percentage = %.2f %% \t Grade=D\n",percentage);
}else if(percentage>=50){
    printf(" Percentage = %.2f %% \t Grade=E\n",percentage);
}else if(percentage<40){
    printf(" Percentage = %.2f %% \t Grade=F\n",percentage);
}else{
    printf("Your mark is not valid.\n");
}

}
