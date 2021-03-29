#include <stdio.h>
#include <stdlib.h>
//Marielly Frozza
//07-03-2021
//Linguagem de Programação

int main()
{
    FILE *fp;
    char buffer[4096], *p;
    char aux[3];
    int contador, estado;
    int ac=0, al=0, ap=0, am=0, ba=0, ce=0, df=0, es=0, go=0, ma=0, mt=0, ms=0, mg=0, pa=0, pb=0, pr=0, pe=0, pi=0, rj=0, rn=0, rs=0, ro=0, rr=0, sc=0, sp=0, se=0, to=0;


    if( (fp = fopen("ibge_municipios_coluna_fixa_sem_cab.txt","rt")) == NULL ) {
        printf("Arquivo nao encontrado.\n");
        exit(-1); //para fechar direto
    }

    while (!feof(fp)) {
        contador = 0;

        memset(buffer,0, 4096);
        fgets(buffer,4096,fp);
        if( strlen(buffer) < 20 ) {
            break;
        }
        p = buffer;
        // remove a quebra de linha
        while( *p != '\0' ) {
            if( *p == '\n' || *p == '\r' ) {
                *p='\0';
                break;
            }
            p++;
        }

        // PEGAR O NUM DA UF E ARMAZENA NA VARIAVEL AUX
        for (int i = 0; i < 2; i++) {
            aux [contador] = buffer[i];
            contador++;
        }

       //transforma a uf em int

            estado = atoi(aux);

        switch (estado){
            case 12:
                ac++;
                break;
            case 27:
                al++;
                break;
            case 16:
                ap++;
                break;
            case 13:
                am++;
                break;
            case 29:
                ba++;
                break;
            case 23:
                ce++;
                break;
            case 53:
                df++; //2
                break;
            case 32:
                es++;
                break;
            case 52:
                go++;
                break;
            case 21:
                ma++;
                break;
            case 51:
                mt++;
                break;
            case 50:
                ms++;
                break;
            case 31:
                mg++;
                break;
            case 15:
                pa++;
                break;
            case 25:
                pb++;
                break;
            case 41:
                pr++;
                break;
            case 26:
                pe++; //185
                break;
            case 22:
                pi++;
                break;
            case 33:
                rj++;
                break;
            case 24:
                rn++;
                break;
            case 43:
                rs++;
                break;
            case 11:
                ro++;
                break;
            case 14:
                rr++;
                break;
            case 42:
                sc++;
                break;
            case 35:
                sp++;
                break;
            case 28:
                se++;
                break;
            case 17:
                to++;
                break;
            default:
                printf ("achei nao fofa");
                exit(-1);
            }

    }

    printf ("Acre: %d\n", ac);
    printf ("Alagoas: %d\n", al);
    printf ("Amapa: %d\n", ap);
    printf ("Amazonas: %d\n", am);
    printf ("Bahia: %d\n", ba);
    printf ("Ceara: %d\n", ce);
    printf ("Distrito Federal: %d\n", df);
    printf ("Espirito Santo: %d\n", es);
    printf ("Goias: %d\n", go);
    printf ("Maranhao: %d\n", ma);
    printf ("Mato Grosso: %d\n", mt);
    printf ("Mato Grosso do Sul: %d\n", ms);
    printf ("Minas Gerais: %d\n", mg);
    printf ("Para: %d\n", pa);
    printf ("Paraiba: %d\n", pb);
    printf ("Parana: %d\n", pr);
    printf ("Pernambuco: %d\n", pe);
    printf ("Piaui: %d\n", pi);
    printf ("Rio de Janeiro: %d\n", rj);
    printf ("Rio Grande do Norte: %d\n", rn);
    printf ("Rio Grande do Sul: %d\n", rs);
    printf ("Rondonia: %d\n", ro);
    printf ("Roraima: %d\n", rr);
    printf ("Santa Catarina: %d\n", sc);
    printf ("Sao Paulo: %d\n", sp);
    printf ("Sergipe: %d\n", se);
    printf ("Tocantins: %d\n", to);




    fclose(fp);
    return 0;
}
