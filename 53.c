/*_____Pattern_no._#53______*/
/*		#					*/
/*		#*#					*/
/*		#*#*#				*/
/*		#*#*#*#				*/
/*		#*#*#*#*#			*/
/*_____Satyansh_Pandey______*/
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=1;
		for(j=1;j<=9;j++)
		{
			if(j<=2*i-1)
			{
				if(k==1)
					printf("#");
				else
					printf("*");
				k=1-k;
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
