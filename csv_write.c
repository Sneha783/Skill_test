#include<stdio.h>
struct people
{
char name[30];
char number[13];
char mail[20];
char note[30];
};
int main()
{
int c,p,m;
struct people v;
FILE *fp = fopen("output.csv","w+");
fprintf(fp,"ID,Name,Phone Numberi,Mail Address,Notes\n");
printf("Number of people : ");
scanf("%d",&c);

for(p=1;p<=c;p++)
{
fprintf(fp,"%d,",p);
printf("Name : ");
scanf(" %[^\n]",&v.name);
fprintf(fp,"%s,",v.name);
printf("Phone Number : ");
scanf("%s",&v.number);
fprintf(fp,"%s,",v.number);
printf("Mail Address : ");
scanf("%s",&v.mail);
fprintf(fp,"%s,",v.mail);
printf("Note : ");
scanf(" %[^\n]",&v.note);
fprintf(fp,"%s\n",v.note);
printf("\n");
}
fclose(fp);
return 0;
}
