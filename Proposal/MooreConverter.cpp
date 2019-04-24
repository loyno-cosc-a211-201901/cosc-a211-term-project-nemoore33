#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int metric,
    standard,
    type;
char letter;
  letter='l';
  letter='v';
double measurement;

//Display opening menu
  cout <<"Welcome to the measurement converter!"endl;
  cout <<"This program converts measurements between metric bases"
  cout << "     " endl;
  cout <<"Will you be converting Length (L/l) or Volume (V/v)?"
    cin >> letter;
if (letter=='l'||letter=='v')

// length conversion options
if (letter == 'l')
{
  cout << "Are you converting from... "
  	cout << "1. Metric to Standard"endl;
  	cout << "2. Standard to Metric"endl;
    cout << "Enter either 1 or 2" endl;
      cin >> type;
//metric to standard conversions
  if (type==1)
  {
  cout<< "What base is your starting measurement"
    cout << "1. centimeters"endl;
    cout << "3. decimeters"endl;
    cout << "4. meters"endl;
    cout << "5. decameters"endl;
    cout << "6. centimeters"endl;
//standard to metric conversions
  if (type==2)
  {
    cout<< "What base is your starting measurement"
    cout << "1. centimeters"endl;
    cout << "3. decimeters"endl;
    cout << "4. meters"endl;
    cout << "5. decameters"endl;
    cout << "6. centimeters"endl;





}

return 0;
}
