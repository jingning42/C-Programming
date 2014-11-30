int SelectSort(int a[], int N)
{
  int i, j, n, temp;
  for (i = 0; i < N; i++)
    {
      n = i;
      for (j = i; j < N; j++)
        if (a[j] < a[n])
          n = j;
      temp = a[i];
      a[i] = a[n];
      a[n] = temp;
    } 
  return 0;
}
