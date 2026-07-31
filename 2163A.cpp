#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int num;
    cin >> num;
    vector<int> array(num);
    for (int i = 0; i < num; i++)
    {
      cin >> array[i];
    }
 
    int m = 0;
 
    sort(array.begin(), array.end());
 
    for (int i = 0; i < num - 1; i++)
    {
      if (i % 2 != 0 && array[i + 1] != array[i])
      {
        m = 1;
        break;
      }
      else
      {
        continue;
      }
    }
 
    if (m != 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
 
return 0;
}