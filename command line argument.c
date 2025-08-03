#include<stdio.h>
main(int argc, char *argv[])
{
	int i;
	FILE *fs,*ft;
	
	if(argc!=3)
	{
		printf("Incorrect arguments");
		exit();
	}
	fs = fopen(argv[1],"r");
	if(fs==NULL)
	{
		printf("unable to open source file");
		exit();
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL)
	{
		printf("unable to open file\n");
		exit();
	}
	while(i=fgetc(fs) != EOF)
	{
		fputs(I,ft);
	}
	fclose(fs);
	fclose(ft);
}