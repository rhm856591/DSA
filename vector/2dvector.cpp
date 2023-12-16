#include <iostream>
#include <vector> 
using namespace std;
int main()
{
    int n = 4;
    int m = 5;
  
    vector<vector<int> > vec( n , vector<int> (m)); 
  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>vec[i][j];
        }
    }
  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
      
   return 0;
}