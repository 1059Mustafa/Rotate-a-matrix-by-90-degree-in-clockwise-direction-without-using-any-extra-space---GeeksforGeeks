void rotate90Clockwise(int a[N][N])
{
	for(int i=0;i<N/2;i++)
    {
      for(int j=0;j<N;j++)
      {
        swap(a[j][i],a[j][N-i-1]);
      }
    }
   for(int i=N-1;i>=0;i--)
  {
    for(int j=N-1-i;j<N;j++)
    {
      swap(a[i][j],a[N-j-1][N-i-1]);
    }
  }
 
}
