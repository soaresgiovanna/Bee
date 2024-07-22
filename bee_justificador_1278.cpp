#include <iostream>
#include <cstring>
using namespace std;
int main()
{setlocale(LC_ALL, "Portuguese");
   int N;
   int maior;
   int cont=0;
    while(cin >> N)
    {
        char entradas[N][50];
        char configurado[N][50];

       for (int i=0; i< N; i++)
            {
                cin.getline(entradas[N-1][50]); //errro
                for(int j=0; j<strlen(entradas); j++)
                {
                    if (entradas[i][j] != ' ')
                    {
                        configurado[N][cont] = entradas[i][j];
                        cont++;
                    }
                    else if(configurado[N][cont -1] != ' ')
                    {
                        configurado[N][cont] = entradas[i][j];
                    }
                }
                if(i==0)
                    maior=strlen(entradas);
                else if(strlen(entradas) > maior)
                    maior=strlen(entradas);
            }
    }
    return 0;
}
