#include<stdio.h>
int main()
{
  char choice[100]; //subject to change
  printf("welcome to our cafe. Now,what are we craving at?\n");
printf("1.starters/snacks\n");
printf("2.main course-indian famous\n");
printf("3.main course-punjabi tadka\n");
printf("4.main course-south special\n");
printf("5.main course-chinese/japanese taste-\n");
printf("....");
  //keep on adding
  scanf("%[^/n]s",choice);
  printf("%s",choice);
//incomplete work for now
return 0;
}
