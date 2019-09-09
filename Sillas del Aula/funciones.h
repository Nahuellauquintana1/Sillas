#define LIBRE 0
#define OCUPADO 1

void cargarArray(int[],int[], int);
int buscarMaximo(int[],int);
int buscarMinimo(int[],int);
void mostrar(char[], int);
void inicializarArray(int[], int);
void ordenarArrayPorSilla(int sillasAula[],int edades[], int );
void mostrarArray(int sillasAula[],int edades[],int );
int verificaLibre(int sillasAula[], int , int laSilla, int valorInicial);
int ocuparSilla(int sillasAula[], int , int laSilla,int legajo);
int mostrarSillaEdadMax (int sillas[], int tam, int maxEdad );
void ordenarArrayPorEdad(int sillasAula[],int edades[], int );
