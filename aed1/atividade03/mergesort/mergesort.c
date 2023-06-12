void merge( int v[], int inicio, int meio, int fim )
{
	int i = inicio;
	int j = meio + 1;
	int k = 0;
	int aux[fim - inicio + 1];

	while ((i <= meio) && (j <= fim))
	{
		if (v[i] <= v[j])
		{
			aux[k] = v[i];
			i++;
		}
		else
		{
			aux[k] = v[j];
			j++;
		}
		k++;
	}

	if (i <= meio)
	{
		j = meio;
		
		while (j >= i)
		{
			v[fim - meio + j] = v[j];
			j--;
		}
	}

	for (i = 0;i < k;i++) 
		v[inicio + i] = aux[i];
}


void mergesort( int inicio, int fim, int v[] )
{
	if (fim <= inicio) return;

	int m = (fim+inicio)/2;
	
	mergesort( inicio, m, v );
	
	mergesort( m+1, fim, v );
	
	merge( v, inicio, m, fim );
}

