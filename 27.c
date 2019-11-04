/*____Pattern_no._#27___*/
/*						*/
/*		    1			*/
/*		   22			*/
/*		  333			*/
/*		 4444			*/
/*		55555			*/
/*		 4444			*/
/*		  333			*/
/*		   22			*/
/*		    1			*/
/*						*/
/*____Satyansh_Pandey___*/
main()
{
	int i,j,k=0;
	for(i=1;i<=9;i++)
	{
		i<6?k++:k--;
		for(j=1;j<=5;j++)
		{
			if(j>=6-k)
			{
				printf("%d",k);
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
