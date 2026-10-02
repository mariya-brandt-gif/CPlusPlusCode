
#include <iostream>
//<iostream> ist eine Standardbibliothek bzw. genauer ein Header, der Funktionalität für Ein- und Ausgabe bereitstellt. Dadurch können wir unter anderem std::cout benutzen.

int main()
{
    //std::cout << "Hallo!\n";
    //std::cout << "Ich lerne C++.\n";
    //std::cout << "Das macht Spaß!\n";
    //std::cout << "Alter" << 'A';

   /* int alter = 45;
    double groeße = 1.82;
    int lieblingszahl = 7;
    double zusatzzahl = 3.14;*/
        
    //Eine int-Variable kann nur Ganzzahlen speichern.
    //Eine double-Variable kann Nachkommastellen speichern.
    //implizite Typumwandlung int 10 -> double -> 10.0, aber bei double 5.9 -> int -> 5 entsteht eine Informationsverlust. 

    //std::cout << "Ich bin "<< alter<<" Jahre alt.\n";
    //std::cout << "Ich bin "<< groeße<<" Meter groß.\n";
    //std::cout << "Meine Lieblingszahl ist "<< lieblingszahl<<".\n";
    //std::cout << "Eine weitere Zahl ist "<< zusatzzahl<<".\n";

    //int a = 5;
    //double b = 2;
    //std::cout << a/b << ".\n"; 
    //Da einer der beiden Werte ein double ist, wird die Rechnung in diesem Fall als Gleitkomma-Rechnung durchgeführt (5.0 / 2.0 -> 2.5).
    
    //Der %-Operator liefert den Rest einer Ganzzahldivision (Bsp. int rest = 10 % 3; denn: 10 % 3 = 3 Rest 1, also enthält rest den Wert: 1) 
    // /  → Ergebnis der Division (17 / 5 → 3)
    // % → Rest der Ganzzahldivision (17 % 5 → 2)

    //int a = 23;
    //int b = 4;

    //std::cout << a << " geteilt durch " << b << " ergibt: "<< a / b <<".\n"; //23 geteilt durch 4 ergibt: 5.
    //std::cout << "Den Rest von " << a <<" % "<< b << " ist: " << a % b << ".\n"; //Den Rest von 23 % 4 ist: 3.
    //
    //int geld = 100;

    //geld += 25;
    //geld -= 40;
    //geld *= 2;

    //std::cout << "am Ende steht in geld " << geld << ".\n";

    

    //int alter = 45;
    //if (alter >=18) //Mit if können wir sagen: Führe diesen Code nur aus, wenn eine bestimmte Bedingung wahr ist.
    //{
    //    std::cout << "Du bist volljährig.\n";
    //}
    //else //Mit else können wir zusätzlich sagen: Ansonsten mach etwas anderes.
    //{
    //    std::cout << "Du bist minderjährig.\n";
    //}


    // //Bei einem if könnte man eine einzelne Anweisung auch ohne {} schreiben:
    //if (alter >= 18)
    //    std::cout << "Volljährig";
    // //Die geschweiften Klammern machen aber einen Block daraus :
    //if (alter >= 18)
    //{
    //    std::cout << "Volljährig";
    //    std::cout << "Du darfst wählen."; 
    // // Jetzt gehören beide Zeilen zum if.
    //}

    //int alter = 45;
    //if (alter >= 18) 
    //{
    //    std::cout << "Du bist erwachsen.\n";
    //}
    //else if (alter < 13)
    //{
    //    std::cout << "Du bist ein Kind.\n";
    //}
    //else 
    //{
    //    std::cout << "Du bist ein Jugendlicher.\n";
    //}
    ////Das ist ein wichtiges Verhalten von if / else if / else: C++ prüft von oben nach unten und nimmt den ersten passenden Fall.

    //int zahl = 7;
    //if (zahl > 0)
    //{
    //    std::cout << "Die Zahl ist positiv.\n";
    //}
    //else if (zahl < 0)
    //{
    //    std::cout << "Die Zahl ist negativ.\n";
    //}
    //else
    //{
    //    std::cout << "Die Zahl ist 0.\n";
    //}


    int alter = 25;
    if (alter < 12)
    {
        std::cout << "Kinderpreis.\n";
    }
    else if (alter <=17)
    {
        std::cout << "Jugendpreis.\n";
    }
    else if (alter <=64)
    {
        std::cout << "Normalpreis.\n";
    }
    else
    {
        std::cout << "Seniorenpreis.\n";
    }

}
