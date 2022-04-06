#include <stdio.h>
#include <string.h>
void main()
{	
	//v0
	char strExp[]="3+4";
	int a,b,c;
	a=strExp[0]-'0';
	b=strExp[2]-'0';
	c=a+b;
	printf("%d",c);

	//v1
	char str[]="1+2+2+1+2+5+4-1-3+4-8";
	int j,right;
	int left=str[0]-'0';
	for(j=1;j<strlen(str);j++)
	{
		if(str[j]=='+')
		{
			int right=str[j+1]-'0';
			left=left+right;
			j++;
		}
		else if(str[j]=='-')
		{
			int right=str[j+1]-'0';
			left=left-right;
			j++;
		}
	}
	printf("left=%d\n",left);

	//v2
	char str2[]="2*2/4*1/1*2*3/2";
	int i,right2;
	int left2=str2[0]-'0';
	for(i=1;i<strlen(str2);i++)
	{
		if(str2[i]=='*')
		{
			int right2=str2[i+1]-'0';
			left2=left2*right2;
			i++;
		}
		else if(str2[i]=='/')
		{
			int right2=str2[i+1]-'0';
			left2=left2/right2;
			i++;
		}
	}
	printf("left2=%d\n",left2);


	//v3
	char str3[]="2+2*3+2/2-1";
	int m,n,p,q,s,t,r;
	m=str3[0]-'0';
	n=str3[2]-'0';
	p=str3[4]-'0';
	q=str3[6]-'0';
	r=str3[8]-'0';
	s=str3[10]-'0';
	t=m+n*p+q/r-s;
	printf("t=%d\n",t);
}