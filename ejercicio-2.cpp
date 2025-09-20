#include <iostream>
#include <cmath>   // round()

using namespace std;

double redondear2(double x) {
    return round(x * 100.0) / 100.0;
}

int main() {
    const int N = 10;                
    double dist[N];                  
    double total = 0.0;

    for (int i = 0; i < N; ++i) {
        cout << "Distancia del conductor " << (i + 1) << " (km): ";
        cin >> dist[i];
        if (dist[i] < 0) {           
            cout << "Valor negativo no permitido. Se registra 0.\n";
            dist[i] = 0.0;
        }
        total += dist[i];
    }

    double promedio = (N > 0) ? total / N : 0.0;

    int idxMax = 0;
    for (int i = 1; i < N; ++i) {
        if (dist[i] > dist[idxMax]) idxMax = i;
    }


    total    = redondear2(total);
    promedio = redondear2(promedio);
    double maximo = redondear2(dist[idxMax]);

    cout << "\n--- Resultados ---\n";
    cout << "Distancia total (km): " << total << '\n';
    cout << "Distancia promedio (km): " << promedio << '\n';
    cout << "Conductor con mayor distancia: #" << (idxMax + 1)
         << " con " << maximo << " km\n";
// Commit de prueba número 2

    return 0;
}