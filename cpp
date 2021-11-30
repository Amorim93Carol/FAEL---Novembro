#include <iostream>
using namespace std;

#define quantidade 50

struct jovem
{
    char genero;
    char trabalha;
};

int main()
{
    int trabalho[4] = {0,0,0,0};

    jovem j[quantidade];
    cout << "--- Formulário ---" << endl;
    for(int i = 0; i < quantidade; i++)
    {
        volta1:
        cout << "Qual o gênero da " << i+1 << "ª pessoa? (exemplo: M-Masculino ou F-feminino):";
        cin >> j[i].genero;
        if(j[i].genero == 'm' || j[i].genero == 'f' || j[i].genero == 'M' || j[i].genero == 'F')
        {
            volta2:
            cout << "Esse jovem trabalha?(exemplo: 0-não ou 1-sim):";
            cin >> j[i].trabalha;
            if(j[i].trabalha == '1' || j[i].trabalha == '0'){
                if(j[i].genero == 'm' || j[i].genero == 'M')
                {
                    if(j[i].trabalha == '0')
                        trabalho[0]++;
                    else
                        trabalho[1]++;
                }
                if(j[i].genero == 'f' || j[i].genero == 'F')
                {
                    if(j[i].trabalha == '0')
                        trabalho[2]++;
                    else
                        trabalho[3]++;
                }
            }else{
                cout << "Selecione somente 0 para NÃO ou 1 para SIM." << endl;
                goto volta2;
            }
        }else{
            cout << "Gênero inválido!" << endl;
            goto volta1;
        }
       
    }
 
    cout << "Homens que NÃO trabalham: " << (trabalho[0]*100)/quantidade << "%" <<endl;
    cout << "Homens que trabalham: " << (trabalho[1]*100)/quantidade << "%" << endl;
    cout << "Mulheres que NÃO trabalham: " << (trabalho[2]*100)/quantidade << "%" <<endl;
    cout << "Mulheres que trabalham: " << (trabalho[3]*100)/quantidade << "%" << endl;
}
