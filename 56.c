/*___Pattern_no._#56____*/
/*		*   *			*/
/*		 * *			*/
/*		  *				*/
/*		 * *			*/
/*		*   *			*/
/*___Satyansh_Pandey____*/
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==i||j==6-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	getch();
}
