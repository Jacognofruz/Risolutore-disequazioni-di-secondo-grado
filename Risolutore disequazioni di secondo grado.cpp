// Risolutore disequazioni di secondo grado.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c=0, delta, x1, x2, input;
    cout << "Risolutore disequazioni di secondo grado" << endl;
    cout << "Inserisci i coefficienti della disequazione del tipo ax^2+bx+c>=<0 (con a>0): " << endl; 
    do
        cin >> a;
    while (a < 0);
    cin >> b, c;
    //Risoluzione equazione associata
    // 
    // Caso particolare: se a è nullo, non è un'equazione di secondo grado
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "L'equazione è indeterminata." << endl;
            }
            else {
                cout << "L'equazione è impossibile." << endl;
            }
        }
        else {
            cout << "L'equazione è di primo grado: x = " << -c / b << endl;
        }
    }
    else {
        // Calcolo del delta
        delta = b * b - 4 * a * c;

        // Analisi del delta
        if (delta > 0) {
            // Due soluzioni reali e distinte
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Le soluzioni dell'equazione associata sono: x1 = " << x1 << " e x2 = " << x2 << endl;
            cout << "Digitare 1 se la disequazione presenta il confronto >,2 con >=, 3 con <, 4 con <=" << endl;
            cin >> input;
            if (input==1) {
                if (x1>x2) {
                    cout << "La soluzione della disequazione è: x<" << x2 << "e x>" << x1 << endl;
                }
                else {
                    cout << "La soluzione della disequazione è: x<" << x1 << "e x>" << x2 << endl;
                }
            }
            else if (input == 2) {
                if (x1 > x2) {
                    cout << "La soluzione della disequazione è: x<=" << x2 << "e x>=" << x1 << endl;
                }
                else {
                    cout << "La soluzione della disequazione è: x<=" << x1 << "e x>=" << x2 << endl;
                }
            }
            else if (input == 3) {
                if (x1 > x2) {
                    cout << "La soluzione della disequazione è: "<< x2 << "<x<" << x1 << endl;
                }
                else {
                    cout << "La soluzione della disequazione è: " << x1 << "<x<" << x2 << endl;
                }
            }
            else if (input == 4) {
                if (x1 > x2) {
                    cout << "La soluzione della disequazione è: " << x2 << "<=x<=" << x1 << endl;
                }
                else {
                    cout << "La soluzione della disequazione è: " << x1 << "<=x<=" << x2 << endl;
                }
            }
        }
        else if (delta == 0) {
            // Una soluzione reale doppia
            x1 = -b / (2 * a);
            cout << "L'equazione associata ha una soluzione doppia: x = " << x1 << endl;
        }
        else {
            // Nessuna soluzione reale
            cout << "L'equazione associata non ha soluzioni reali." << endl;
        }
    }

}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
