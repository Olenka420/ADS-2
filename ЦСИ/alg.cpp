int  countPairs1 ( int * arr, int len, int value)
{
	int k = 0 ;
	для ( int i = 0 ; i <len- 1 ; i ++)
	{
		для ( int j = i + 1 ; j <len; j ++)
		{
			if (arr [i] + arr [j] == значение)
				K ++;
		}

	}
	возврат к;
}
int  countPairs2 ( int * arr, int len, int value)
{
int k = 0 ;
 для ( int i = 0 ; i <len- 1 ; i ++)
 {
   для ( int j = len- 1 ; j> i; j--)
   {
     if (arr [i] + arr [j] == значение)
     {
       K ++;

     }
   }
 }
 возврат к;
}
int  countPairs3 ( int * arr, int len, int value)
{
	int k = 0 ;
	для ( int i = 0 ; i <len - 1 ; i ++)
	{
		int left = i, right = len;

		в то время как (левый <правый- 1 )
		{
			int mid = (влево + вправо) / 2 ;
			if (arr [i] + arr [mid] == значение)
			{
				K ++;
				int j = середина + 1 ;
				while (arr [i] + arr [j] == значение && j <right)
				{
					K ++;
					j ++;
				}
				j = середина - 1 ;
				while (arr [i] + arr [j] == значение && j> слева)
				{
					K ++;
					j--;
				}
				перерыв ;
			}
			if (arr [i] + arr [mid]> значение)
				правый = средний;
			еще
				левый = средний;
		}

	}
	возврат к;
}
