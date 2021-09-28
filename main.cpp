#include <iostream>
#include <cstdio>

#include <cmath>

using namespace std;
void primero(){

int n,nro_pruebas,t,solucion;
    //t=5;
    //Entrada de cada caso de prueba
    cout<<"Ingrese el caso de prueba"<<endl;
    scanf("%d",&t);

    for(t=1; t<=nro_pruebas; t++)
    {
        cout<<"Ingrese n: ";
        scanf("%d",&n);
        solucion =((((((n*567)/9)+7492)*235)/47)-498);
        solucion = solucion/10;
        solucion = solucion%10;
        solucion=abs(solucion);
        printf("%d\n", solucion);
    }


}
void segundo(){
    int n, suma;

    suma = 0;
    scanf("%d",&n);

    while ((suma != 2) && (n != 0)){

        if(suma!=0){
            //n = suma;
            suma = 0;
        }

        while(n > 0){
            //cout<<"n: "<<n<<endl;
            suma = suma + (n%10);
            n =(n/10);
            //cout<<"n: "<<n<<endl;
        }

        n = suma;

    }
    cout<<"Suma Final: "<<suma<<endl;

}
void tercero(){
string cadena;
    char letra, letraAnt;

    int n, suma , c, nroPruebas;
    cin>>nroPruebas;

    while (nroPruebas > 0){

        cin>> cadena;

        n = cadena.size();
        c =0;
        suma = 0;

        letraAnt = cadena[0];


        if(letraAnt != 'X'){
            c = c + 1;
            suma = suma + c;
        }

        for(int i = 1; i < n; i++){
            cout<<"i: "<<i<<" - "<<cadena[i]<<endl;
            letra = cadena[i];


            if(letra != 'X'){

                if(letraAnt == letra){
                    c = c + 1;
                }
                else {
                    c = 1;
                }

                cout<< c<<endl;
                suma = suma + c;
            }
            else {
                c = 0;
            }

            letraAnt = letra;

        }


        cout<<"suma Total: "<<suma<<endl;
        nroPruebas--;
}
}

void eveninPlaning(){

int nro_per; //#Nro de personas
int pre; // MOnto de presupuesto
int hotel; //Nro de Hoteles
int nro_sem; //Nro de semanas
int cos_min;
int pre_per, nro_cam;
    while (cin >> nro_per >> pre >> hotel >> nro_sem)
    {
        int cos_min = pre + 1;

        for (int h = 0; h < hotel; ++h)
        {

            cin >> pre_per;
            for (int w = 0; w < nro_sem; ++w)
            {

                cin >> nro_cam;
                if (nro_cam >= nro_per && pre_per * nro_per <= cos_min)
                    cos_min = pre_per * nro_per;
            }
        }

        if (cos_min <= pre)
            cout << cos_min << endl;
        else
            cout <<"stay home" << endl;
    }

}

void tariff_plan(){
    int T, count = 1, mile_cost, juice_cost, N;
	cin >> T;
	while (T > 0) {
		mile_cost = 0, juice_cost = 0;
		cin >> N;
		while (N > 0) {
			int temp;
			cin >> temp;
			mile_cost = mile_cost + (1 + (int)floor(temp / 30.0)) * 10;
			juice_cost = juice_cost + (1 + (int)floor(temp / 60.0)) * 15;
			N--;
		}
		cout << "Caso: " << count++ << ": ";
		if (mile_cost < juice_cost) {
			cout << "Mile " << mile_cost << endl;
		}
		else if (juice_cost < mile_cost) {
			cout << "Juice " << juice_cost << endl;
		}
		else {
			cout << "Mile Juice " << mile_cost << endl;
		}

		T--;
	}

}

void chess(){

int T, fila, columna, posicion;
    char x;
    scanf("%d", &T);
   //x= Torre, Caballero, Reina o Rey
    while (T > 0)
    {
        scanf(" %c %d %d", &x, &fila, &columna);


        if (x == 'r')
        {
            posicion = min(fila, columna);
        }

        else if (x == 'k')
        {
            posicion = fila * columna / 2;
        }

        else if (x == 'Q')
        {
            posicion = min(fila, columna);
        }

        else
            posicion = int((fila + 1) / 2) * int((columna + 1) / 2);

        cout<<posicion<<endl;


    }
}
int main()
{
    // primero();
    //segundo();
    //eveninPlaning();
    //tariff_plan();




    return 0;
}
