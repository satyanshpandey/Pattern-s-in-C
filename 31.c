/*_____Pattern_no._#31______*/
/*							*/
/*			 ******			*/
/*			* *****			*/
/*			** ****			*/
/*			*** ***			*/
/*			**** **			*/
/*			***** *			*/
/*			******			*/
/*							*/
/*_____Satyansh_Pandey______*/
main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i||j==8)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	getch();
}
