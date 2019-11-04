/*_____Pattern_no._#52______*/
/*		*					*/
/*		*#*					*/
/*		*#*#*				*/
/*		*#*#*#*				*/
/*		*#*#*#*#*			*/
/*_____Satyansh_Pandey______*/

main()
{
	int i,j,f;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=2*i-1)
			{
				if(j%2==0)
					printf("#");
				else
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
