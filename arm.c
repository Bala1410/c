#include<stdio.h>
int main()
{
int num,sum=0,rem=0,temp;
clrscr();
temp=num;
while(temp!=0)
{
rem=temp%10;
su,=sum+(rem*rem*rem);
temp/=10;
}
if(sum==num)
printf("yes",num);
else
printf("no",num);
  return 0;
getch();
}
