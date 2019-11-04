/*____Pattern_no._#10___*/

/*	     1 
/*    	111
/*	   11111
/*	  1111111
/*	 111111111

/*___Satyansh_Pandey____*/
main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
	k=1;
		for(j=0;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
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
