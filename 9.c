/*____Pattern_no._#9____*/

/*	     1
/*    	123
/*	   12345
/*	  1234567
/*	 123456789

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
				k++;
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
