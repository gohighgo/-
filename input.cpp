void Input(int **arr, int row, int col, int min, int max)
{
for(int i=0;i<row;i++)
 {
 for(int j=0;j<col;j++)
  {
  arr[i][j]=rand()%(max-min+1)+min;
  }
 }
}
