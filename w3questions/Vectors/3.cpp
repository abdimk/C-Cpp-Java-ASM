//Write a C++ program to create an n x n matrix by taking an integer (n) as input from the user.

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;


std::vector < std::vector < int > > test(int n) {
  std::vector < int > t(n, n);
  std::vector < std::vector < int >> arr(n, t);
  return arr;
}

int main() {
  int n;
  cout << "Input an integer value: ";
  cin >> n;
  std::vector < std::vector < int >> result = test(n);
  cout << "Create an n x n matrix by said integer:\n";
  
  // Print the unique matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printf("%d ", result[i][j]);
    printf("\n");
  }
}