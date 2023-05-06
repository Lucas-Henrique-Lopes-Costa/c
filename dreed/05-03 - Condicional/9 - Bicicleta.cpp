#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
  // D = V * T
  // T = D / V

  int x1, y1, x2, y2, x3, y3;
  string s1, s2, s3;

  cin >> x1 >> y1 >> s1;
  cin >> x2 >> y2 >> s2;
  cin >> x3 >> y3 >> s3;

  float dist1 = sqrt(pow(0 - x1, 2) + pow(0 - y1, 2));
  float dist2 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  float dist3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

  float tempo1, tempo2, tempo3;

  if (s1 == "cheio")
    tempo1 = dist1 * 24;
  else
    tempo1 = dist1 * 5;

  if (s2 == "cheio")
    tempo2 = dist2 * 24;
  else
    tempo2 = dist2 * 5;

  if (s3 == "cheio")
    tempo3 = dist3 * 24;
  else
    tempo3 = dist3 * 5;

  float tempoCarro = tempo1 + tempo2 + tempo3;

  if (s1 == "cheio")
    tempo1 = dist1 * 18;
  else
    tempo1 = dist1 * 15;

  if (s2 == "cheio")
    tempo2 = dist2 * 18;
  else
    tempo2 = dist2 * 15;

  if (s3 == "cheio")
    tempo3 = dist3 * 18;
  else
    tempo3 = dist3 * 15;

  float tempoBicicleta = tempo1 + tempo2 + tempo3;

  if (tempoCarro < tempoBicicleta)
    cout << "Carro " << ceil(tempoCarro) << endl;
  else
    cout << "Bicicleta " << ceil(tempoBicicleta) << endl;
  return 0;
}