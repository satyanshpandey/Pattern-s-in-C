/*_____Pattern_no._#48______*/
/*							*/
/*		A					*/
/*		BC					*/
/*		CDE					*/
/*		DEFG				*/
/*							*/
/*_____Satyansh_Pandey______*/
main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k=64+i;//ASCII Code:-->65='A',66='B',and continue untill 'Z';
		for(j=1;j<=4;j++)
		{
			if(j<=i)
			{
			printf("%c",k);
			k++;
			}
			
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
