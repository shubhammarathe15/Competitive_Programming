#include<stdio.h>
struct value{
    char name[15];
    int n;
};
void main()
{
    struct value a[100];//maximum 100 student data can be updated
 int total, n, num=0;
 printf("Total number of students appear:");
 scanf("%d",&total);

 
 for(int i=1; i<=total; i++)
 {
  printf("\nEnter name and No. of repository(PR) for student no %d\n",i);
  printf("Name: ");
  scanf("%s",a[i].name);
  
  printf("No. of Repositories: ");
  scanf("%d",&a[i].n);
 
 }
 printf("\nStudents eligible are: \n");
     
 
 for(int i=1;i<=total;i++)
 {
     if(a[i].n>=4)
     {
         num=num+1;
         printf("\t\t%d. %s\n",num,a[i].name);
     }
     else
     {
         num=num;
     }
}
 //printf("No. of Students eligible are %d",num);
//Can use for displaying total no. of students eligible
}