#include <stdio.h>
#include <iostream>

using namespace std;

    class Complejo
    {
    public:

        Complejo( float x= 0, float y= 0);
        void Recibe();
        float ParReal();
        float ParImaginario();
        void Suma(float a, float b, float c, float d);
        void Resta(float a, float b, float c, float d);

    void Impresion()
    {
    cout << "( " << R << " , " << I <<" )" << endl;
    }

    private:
        float R;
        float I;
    };

   Complejo::Complejo( float a, float b)
   {
   R = a;
   I = a;
   }

   void Complejo::Recibe()
   {
   cout << "Introduzca la parte real: " << endl;
   cin >> R;
   cout << "Introduzca la parte compleja: " << endl;
   cin >> I;
   }

  float Complejo::ParReal()
  {
   return R;
  }

  float Complejo::ParImaginario()

  {
   return I;
  }

  void Complejo::Suma( float a, float b, float c, float d)

   {
  cout <<"La suma es: ("  << a + c<< " , " << b + d<<")" << endl;
   }

  void Complejo::Resta( float a, float b, float c, float d)

  {
  cout <<"La resta es: (" << a - c << " , "<< b - d<<")" << endl;
  }

  int main()

  {
  Complejo s;
  Complejo x;
  Complejo y;

  x.Recibe();
  y.Recibe();
  s.Suma(x.ParReal(), x.ParImaginario(), y.ParReal(), y.ParImaginario());
  s.Resta(x.ParReal(), x.ParImaginario(), y.ParReal(), y.ParImaginario());

  return 0;
  }
