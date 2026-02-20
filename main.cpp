#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: N_ELEMENTS helyett NELEMENTS lett írva.
    int b = new int[NELEMENTS];

    // HIBA: Sztringekhez dupla idézőjel (""), és hiányzik a pontosvessző a sor végéről.
    std::cout << '1-100 ertekek duplazasa'

    // HIBA: A for ciklus hiányos, hiányzik a léptetéts és a leállási feltétel.
    for (int i = 0;)
    {
        b[i] = i 2;
    }

    // HIBA: A leállási feltétel hibás (i), így a ciklus egyszer sem fut le.
    for (int i = 0; i; i++)
    {
        // HIBA: Nem ír ki értéket, és hiányzik a pontosvessző a végéről.
        std::cout << "Ertek:"
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    // HIBA: Az atlag változónak nincs megadva kezdőérték.
    int atlag;

    // HIBA: A feltétel és a léptetés között pontosvesszőnek kellene lennie (N_ELEMNTS után csak sima vessző van).
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: Pontosvessző hiányzik a sor végéről.
        atlag += b[i]
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    
    //HIBA: dinamikus memóriafoglalás felszabadítása elmaradt (delete [] b;)
    return 0;
}