#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int metric,
    standard,
    type,
    startBase,
    endBase;
char letter;
  letter='l';
  letter='v';
double intMeasurement,
       finMeasurement;


//Display opening menu
  cout <<"Welcome to the measurement converter!" << endl;
  cout <<"This program converts measurements between metric bases" << endl;
  cout << "     " << endl;
  cout <<"Will you be converting Length (L/l) or Volume (V/v)?" << endl;
    cin >> letter;
if (letter=='l'||letter=='v')

// length conversion options
if (letter == 'l')
{
  cout << "Are you converting from... " << endl;
  	cout << "1. Metric to Standard" << endl;
  	cout << "2. Standard to Metric" << endl;
    cout << "Enter either 1 or 2" << endl;
      cin >> type;
//metric to standard conversions
  if (type==1)
    {
    cout<< "What base is your starting measurement" << endl;
      cout << "1. centimeters" << endl;
      cout << "2. meters" << endl;
      cout << "Enter either 1 or 2" << endl;
        cin >> startBase;
// centimeters
      if (startBase == 1)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. inches" << endl;
        cout << "2. feet" << endl;
        cout << "3. yards" << endl;
        cout << "Enter either 1, 2 or 3" << endl;
          cin >> endBase;
// centimeters to inches
            if (endBase == 1)
            {
              cout << "What is your starting measurement in centimeters?" << endl;
              cout << "Please enter whole numbers only." << endl;
              cin >> intMeasurement;
              finMeasurement = intMeasurement/2.54;
              cout << intMeasurement << " centimeters is " << finMeasurement << " inches." << endl;
            }
// centimeters to feet
            if (endBase == 2)
            {
              cout << "What is your starting measurement in centimeters?" << endl;
              cout << "Please enter whole numbers only." << endl;
              cin >> intMeasurement;
              finMeasurement = intMeasurement/30.48;
              cout << intMeasurement << " centimeters is " << finMeasurement << " feet." << endl;
            }
// centimeters to yards
            if (endBase == 3)
            {
              cout << "What is your starting measurement in centimeters?" << endl;
              cout << "Please enter whole numbers only." << endl;
              cin >> intMeasurement;
              finMeasurement = intMeasurement/91.44;
              cout << intMeasurement << " centimeters is " << finMeasurement << " yards." << endl;
            }
      }
// meters
      if (startBase == 2)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. inches" << endl;
        cout << "2. feet" << endl;
        cout << "3. yards" << endl;
        cout << "Enter either 1, 2 or 3" << endl;
          cin >> endBase;
// meters to inches
          if (endBase == 1)
          {
            cout << "What is your starting measurement in meters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*39.37;
            cout << intMeasurement << " meters is " << finMeasurement << " inches." << endl;
          }
// meters to feet
          if (endBase == 2)
          {
            cout << "What is your starting measurement in meters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*3.281;
            cout << intMeasurement << " meters is " << finMeasurement << " feet." << endl;
          }
// meters to yards
          if (endBase == 3)
          {
            cout << "What is your starting measurement in meters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*1.094;
            cout << intMeasurement << " meters is " << finMeasurement << " yards." << endl;
          }
      }
    }
//standard to metric
  if (type==2)
    {
      cout<< "What base is your starting measurement" << endl;
      cout << "1. inches" << endl;
      cout << "2. feet" << endl;
      cout << "3. yards" << endl;
      cout << "Enter either 1, 2 or 3" << endl;
        cin >> startBase;
//inches
      if (startBase==1)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. centimeters" << endl;
        cout << "2. meters" << endl;
        cout << "Enter either 1 or 2" << endl;
          cin >> endBase;
//inches to centimeters
          if (endBase==1)
          {
            cout << "What is your starting measurement in inches?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*2.54;
            cout << intMeasurement << " inches is " << finMeasurement << " centimeters." << endl;
          }
//inches to meters
          if (endBase==2)
          {
            cout << "What is your starting measurement in inches?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*39.37;
            cout << intMeasurement << " inches is " << finMeasurement << " meters." << endl;
          }
      }
//feet
      if (startBase==2)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. centimeters" << endl;
        cout << "2. meters" << endl;
        cout << "Enter either 1 or 2" << endl;
          cin >> endBase;
//inches to centimeters
          if (endBase==1)
          {
            cout << "What is your starting measurement in inches?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*2.54;
            cout << intMeasurement << " inches is " << finMeasurement << " centimeters." << endl;
          }
//inches to meters
          if (endBase==2)
          {
            cout << "What is your starting measurement in inches?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*39.37;
            cout << intMeasurement << " inches is " << finMeasurement << " meters." << endl;
          }
      }
//yards
      if (startBase==3)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. centimeters" << endl;
        cout << "2. meters" << endl;
        cout << "Enter either 1 or 2" << endl;
          cin >> endBase;
//yards to centimeters
          if (endBase==2)
          {
            cout << "What is your starting measurement in yards?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*91.44;
            cout << intMeasurement << " yards is " << finMeasurement << " centimeters." << endl;
          }
// yards to meters
          if (endBase==2)
          {
            cout << "What is your starting measurement in yards?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*1.094;
            cout << intMeasurement << " yards is " << finMeasurement << " meters." << endl;
          }
      }

  }
}
//Volume conversion options
{
  if (letter == 'v')
  {
    cout << "Are you converting from... " << endl;
    cout << "1. Metric to Standard" << endl;
  	cout << "2. Standard to Metric" << endl;
    cout << "Enter either 1 or 2" << endl;
      cin >> type;
//metric to standard conversions
    if (type==1)
    {
      cout<< "What base is your starting measurement" << endl;
      cout << "1. millilters" << endl;
      cout << "2. liters" << endl;
      cout << "Enter either 1 or 2" << endl;
        cin >> startBase;
// milliliters
      if (startBase == 1)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. cups" << endl;
        cout << "2. pint" << endl;
        cout << "3. quart" << endl;
        cout << "4. gallon" << endl;
        cout << "Enter either 1, 2, 3 or  4" << endl;
          cin >> endBase;
// milliliters to cups
        if (endBase == 1)
        {
          cout << "What is your starting measurement in milliliters?" << endl;
          cout << "Please enter whole numbers only." << endl;
          cin >> intMeasurement;
          finMeasurement = intMeasurement/236.588;
          cout << intMeasurement << " milliliters is " << finMeasurement << " cups." << endl;
        }
// milliliters to pints
        if (endBase == 2)
        {
          cout << "What is your starting measurement in milliliters?" << endl;
          cout << "Please enter whole numbers only." << endl;
          cin >> intMeasurement;
          finMeasurement = intMeasurement/473.176;
          cout << intMeasurement << " milliliters is " << finMeasurement << " pints." << endl;
        }
// milliliters to quarts
        if (endBase == 3)
        {
          cout << "What is your starting measurement in milliliters?" << endl;
          cout << "Please enter whole numbers only." << endl;
          cin >> intMeasurement;
          finMeasurement = intMeasurement/946.353;
          cout << intMeasurement << " milliliters is " << finMeasurement << " quarts." << endl;
        }
// milliliters to gallons
        if (endBase == 4)
        {
          cout << "What is your starting measurement in milliliters?" << endl;
          cout << "Please enter whole numbers only." << endl;
          cin >> intMeasurement;
          finMeasurement = intMeasurement/3785.412;
          cout << intMeasurement << " milliliters is " << finMeasurement << " gallons." << endl;
        }
      }
// liters
      if (startBase == 1)
      {
        cout << "What base is your ending measurement" << endl;
        cout << "1. cups" << endl;
        cout << "2. pint" << endl;
        cout << "3. quart" << endl;
        cout << "4. gallon" << endl;
        cout << "Enter either 1, 2, 3 or  4" << endl;
          cin >> endBase;
// liters to cups
          if (endBase == 1)
          {
            cout << "What is your starting measurement in liters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*4.227;
            cout << intMeasurement << " liters is " << finMeasurement << " cups." << endl;
          }
// liters to pints
          if (endBase == 2)
          {
            cout << "What is your starting measurement in liters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*2.113;
            cout << intMeasurement << " liters is " << finMeasurement << " pints." << endl;
          }
//liters to quarts
          if (endBase == 3)
          {
            cout << "What is your starting measurement in liters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement*1.057;
            cout << intMeasurement << " liters is " << finMeasurement << " quarts." << endl;
          }
//liters to gallons
          if (endBase == 4)
          {
            cout << "What is your starting measurement in liters?" << endl;
            cout << "Please enter whole numbers only." << endl;
            cin >> intMeasurement;
            finMeasurement = intMeasurement/3.785;
            cout << intMeasurement << " liters is " << finMeasurement << " cups." << endl;
          }
      }
      }
    }
  }
}
return 0;
}
