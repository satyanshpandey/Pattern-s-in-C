/*____Pattern_no._#14____*/
/*						*/
/*		ABCDEFG			*/
/*		ABC DEF			*/
/*		AB   CD			*/
/*		A     B			*/
/*						*/
/*___Satyansh_Pandey____*/
main()
{
	int i,j;
	char k;
	for(i=1;i<=4;i++)
	{
		k='A';
		for(j=1;j<=7;j++)
		{
			if(j<=5-i||j>=3+i)
			{
				printf("%c",k);
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
