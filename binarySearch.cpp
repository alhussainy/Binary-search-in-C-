#include <iostream>
#include <cassert>
#include <vector>

using std::vector;
#define NOT_FOUND -1
int binary_search(const vector<int> &Arr, int low, int high, int target)
{

  if (high < low)
  {
    return NOT_FOUND;
  }
  int mid = (low + (high - low) / 2);
  if (target == Arr[mid])
  {
    return mid;
  }
  else if (target < Arr[mid])
  {
    binary_search(Arr, low, mid - 1, target);
  }
  else
  {
    binary_search(Arr, mid + 1, high, target);
  }
}

int main()
{
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i)
  {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i)
  {
    //replace with the call to binary_search when implemented
    std::cout << binary_search(a, 0, a.size() - 1, b[i]) << ' ';
  }
}
