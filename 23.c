/*_____Pattern_no._#23__________*/
/*								*/
/*		   1					*/
/*		  232					*/
/*		 34543					*/
/*		4567654					*/
/*								*/
/*________Satyansh_Pandey_______*/
main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{	
		k=i;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
			printf("%d",k);
			j<4?k++:k--;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
