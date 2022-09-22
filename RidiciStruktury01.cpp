
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    char volba;
    cout << "\nM=Mocnina, S=Ciferny soucet, K=Konec: ";
    cin >> volba;
    while (volba != 'K')
    {
       cout << "\nM=Mocnina, S=Ciferny soucet, K=Konec: ";
       switch (volba)
       {
         case 'M':
         {
            double a = 1 + (10 - 1) * (double)rand() / (RAND_MAX + 1);
            int n = -5 + rand() % (5 - (-5) + 1);
            double mocnina = 1;
            if (n < 0)
            {
                for (int i = n; n < 0; n++)
                {
                    mocnina *= 1 / a;
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    mocnina *= a;
                }
            }
            cout << "\n\nMocnina je " << (int)mocnina << endl << endl;

         }
         break;
         case 'S':
         {
             int n;
             cout << "Zadej nezaporne cislo: ";
             cin >> n;
             int cifSoucet = 0;
             if (n > 0)
             {
                 cifSoucet += n % 10;
                 n /= 10;
             }
             cout << "\n\nCiferny soucet je " << (int)cifSoucet << endl << endl;
         }
         break;
         default:
         {
            cout << "Nevybrana moznost";
         }
         break;
       }
       cin >> volba;
    }
}
