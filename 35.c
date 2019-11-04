/*_______Pattern_no._#35________*/
/*								*/
/*			   A				*/
/*			  ABA				*/
/*			 ABCBA				*/
/*			ABCDCBA				*/
/*								*/
/*_______Satyansh_Pandey________*/
main()
{

	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k='A';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				printf("%c",k);
				j<4?k++:k--;	
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
