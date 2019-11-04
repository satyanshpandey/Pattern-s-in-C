/*___Pattern_no._#30____*/
/*						*/
/*		*				*/
/*		 *				*/
/*		  *				*/
/*		   *			*/
/*		    *			*/
/*		     *			*/
/*		      *			*/
/*						*/
/*___Satyansh_Pandey____*/
main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}
