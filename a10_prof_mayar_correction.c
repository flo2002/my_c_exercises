#include <stdio.h> // Diese Library fehlte, weil man sonst die unten verwendete printf Funktion nicht verwenden könnte. 

#define SIZE 20 // "Good practice" wäre, wenn man die Array größe mit dieser Präprozessoranweisung angiebt. 

void main (int argc, char* argv[]) { // Bei der Öffnung der Funktion fehlt der Datentyp. Da diese Funktion nichts zurückliefert bietet sich void an. 
    double values[SIZE] = { 1, 2.1, 2, 5, 5, 1, 2, 3, 4, 8,   // Das ist zwar kein Fehler, allerdings ist es üblich den Variablennamen kleinzuschreiben. 
                                                            // Und wenn man diesen unten nocheinmal verwenden will, ist die Groß- und Kleinschreibung auch ausschlaggebend. 
                                                            // Außerdem sollte man die Variablennamen in einer einheitlichen Sprache wählen, da sich beim Programmieren Englisch anbietet habe ich diesen auf Englisch abgeändert. 
                          5, 2.4, 4, 7, 1, 0, -1, 4, 2, 1 };      // Bei der Definition der Werte wurden teilweise Kommastellen benutzt. Da int dies nicht kann, müsste man float/double verwenden.
 
    /* Variablendefinitionen */
    int i = 0;                             // Wenn man das erste Element nicht auslassen will, sollte man i hier auf 0 setzten. 
    double average = 0;                       // Da das Ergebnis von der Mittelwertberechnung eine Fließkommazahl ergibt, sollte hier der Datentyp double verwendet werden.
    //int mittelwert = average;           // Ist überflüssig, da die Variable average in diesem Fall ausreichen ist.
    double sum = 0;                       // Sollte vor der Verwendung initialisiert werden. Da "values" den Datentyp double hat und dieser weiter unten addiert wird, sollte hier auch double verwendet werden.
 
    for (i; i < SIZE; i++) {           // Eine For-Schleife sollte immer seine beinhalteten Statements in geschwungenen Klammern abgrenzen.
        printf("%02i. Wert: ", i);   // Um die Darstellung zu verschönern sollte \n (Absatz) eine Zeile nach unten verschoben werden. 
        printf("%2.1f\n", values[i]);     // Da ich oben values als Double definiert habe, müsste printft nun %f, %e oder %E verwenden. "werte" wird durch die obigen Veränderungen in "values" abgeändert.
        sum = sum + values[i];        // Siehe Zeile 22
    }
    
    /* Hier kommt der SUPERALGORITHMUS */
    //for (i=1; i < SIZE; i++); {          // Wenn das eine extra Schleife werden soll, müsste hier i wieder auf 0 gesetzt werden. 
        //sum == sum + values[i];      // Die Summe sollte wieder auf Englisch sein und vor der Verwendung initialisiert werden. "werte" wird durch die obigen Veränderungen in "values" abgeändert. Außerdem darf man für eine Wertzuweisung nur ein = verwenden.
        //i++;                         // i++ wird schon in der Defintion der for-Schleife angegeben. Somit muss dies hier nicht nocheinmal explizit gemacht werden.
    //}
 
    //int summe = 0;                  // Siehe Zeile 13.
    average = sum / SIZE;
 
    if (average == 2) { // Die geschwungenen Klammern wurden in dieser Zeile vergessen. "mittelwert" wird durch die obigen Veränderungen in "average" abgeändert. Außerdem sollten für einen Wertevegleich zwei = verwendet werden.
        printf("Idealer Mittelwert!\n"); // Das Semikolon wurde in dieser Zeile vergessen.
    } else if (average < 2) { // "mittelwert" wird durch die obigen Veränderungen in "average" abgeändert.
        printf("Mittelwert zu niedrig!\n"); // Das Semikolon wurde in dieser Zeile vergessen.
    } else if (average > 2) { // "mittelwert" wird durch die obigen Veränderungen in "average" abgeändert.
        printf("Mittelwert zu hoch!\n"); // Das Semikolon wurde in dieser Zeile vergessen.
    } else if (average > 100) { // "mittelwert" wird durch die obigen Veränderungen in "average" abgeändert.
        printf("Vorsicht Explosionsgefahr!!!\n");
    }

} // Diese Klammer fehlte, um die Main Funktion zu schließen.