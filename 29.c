/*______Pattern_no._#29_____*/
/*							*/
/*			 ***** 			*/
/*			* *** *			*/
/*			** * **			*/
/*			*** ***			*/
/*			** * **			*/
/*			* *** *			*/
/*			 ***** 			*/
/*							*/
/*_____Satyansh_Pandey______*/
main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i||j==8-i)
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
