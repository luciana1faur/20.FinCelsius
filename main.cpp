#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double gradeF;
  double gradeC;

  cout << "Introduceti temperatura in F: ";
  cin >> gradeF;

  gradeC = (gradeF - 32)/1.8;

  cout << "Temperatura Celsius este: " << gradeC << endl;

  return 0;
}