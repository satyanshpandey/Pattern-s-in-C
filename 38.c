/*____Pattern_no._#38________*/
/*							 */
/*		   1				 */
/*		  12A				 */
/*		 123AB				 */
/*		1234ABC				 */
/*							 */
/*_____Satyansh_Pandey_______*/
main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
	k=49;//ASCII CODE FOR 1=49	
		for(j=1;j<=7;j++)
		{	
			if(j>=5-i&&j<=3+i)
			{
			printf("%c",k);
			k++;
			if(j==4)
				k=65;//ASCII CODE FOR 'A'=65
			}
			
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
