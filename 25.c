/*______Pattern_no._#25_____*/
/*							*/
/*		6543210				*/
/*		543210				*/
/*		43210				*/
/*		3210				*/
/*		210					*/
/*		10					*/
/*		0					*/
/*							*/
/*_____Satyansh_Pandey______*/
main()
{
	int i,j,k=0;
	for(i=1;i<=7;i++)
	{
		k=7-i;
		for(j=1;j<=7;j++)
		{
			if(j<=8-i)
			{
				
				printf("%d",k);
				k--;
			}
			
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
