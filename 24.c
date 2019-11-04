/*________Pattern_no._#24_______*/
/*								*/
/*		6666666					*/
/*		555555					*/
/*		44444					*/
/*		3333					*/
/*		222						*/
/*		11						*/
/*		0						*/
/*								*/
/*_______Satyansh_Pandey________*/
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
				
			}
			
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
