
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
       switch (volba)
       {
         case 'M':
         {
            double a = 1 + (10 - 1) * (double)rand() / (RAND_MAX + 1);
            cout << a << endl;
            int n = -5 + rand() % (5 - (-5) + 1);
            cout << n << endl;
            double mocnina = 1;
            int N = abs(n);   //potrebuju kladny exponent
            for (int i = 0; i < N; i++)  // pocitame mocninu na kladny exponent
            {
                mocnina *= a;
            }
            if (n < 0)  //pokud byl puvodni exponent zaporny mocninu prevratim
            {
                mocnina = 1 / mocnina;
            }
            cout << "\n\nMocnina je: " << mocnina << endl << endl;

         }
         break;
         case 'S':
         {
             int n;
             cout << "Zadej nezaporne cislo: ";
             cin >> n;
             int cifSoucet = 0;
             while (n > 0)
             {
                 cifSoucet += n % 10;
                 n /= 10;
             }
             cout << "\n\nCiferny soucet je: " << cifSoucet << endl << endl;
         }
         break;
         default:
         {
            cout << "Nevybrana moznost";
         }
         break;
       }
       cout << "\nM=Mocnina, S=Ciferny soucet, K=Konec: ";
       cin >> volba;
    }
}
