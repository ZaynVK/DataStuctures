//  Given the 2*2 matrix find the difference of the sum of the diagonals
//  Optimize the approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int diff = 0, matrix[2][2];
  for(int i = 0; i<2; i++){
    for(int j = 0; j<2; j++){
      cin >> matrix[i][j];
    }
  }
  diff = abs((matrix[0][0] + matrix[1][1]) - (matrix[0][1] + matrix[1][0]));
  cout << diff;
 	return 0;
}
