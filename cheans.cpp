# include <stdio.h>
char s1[10010],s2[10010];
FILE *f1,*f2;
int w1[1000010],w2[1000010],totw1,totw2;
int main()
{
	int i,j,n,m;
	char c;
	scanf("%s%s",s1,s2);
	const char *ss1=s1;
	const char *ss2=s2;
	f1=fopen(ss1,"r");
	c=fgetc(f1);
	while(c!=EOF)
	{
		w1[++totw1]=c;
		c=fgetc(f1);
	}
	fclose(f1);
	f2=fopen(ss2,"r");
	c=fgetc(f2);
	while(c!=EOF)
	{
		w2[++totw2]=c;
		c=fgetc(f2);
	}
	fclose(f2);
	if(totw1!=totw2)
	{
		printf("WA");
		return 0;
	}
	for(i=1;i<=totw1;i++)
	{
		if(w1[i]!=w2[i])
		{
			printf("WA");
			return 0;
		}
	}
	printf("AC");
	return 0;
}
