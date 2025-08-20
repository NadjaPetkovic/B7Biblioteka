# B7Biblioteka

Biblioteka algoritama - Strukturni program za pronalaženje prirodnih brojeva deljivih zbirom svojih cifara.

## Opis

Ovaj projekt sadrži implementaciju algoritma koji pronalazi sve prirodne brojeve iz zadatog intervala [a, b] koji su deljivi zbirom svojih cifara.

## Fajlovi

- `divisible_by_digit_sum.c` - Glavni program implementiran u C programskom jeziku
- `Makefile` - Fajl za kompajliranje programa
- `ALGORITHM.md` - Detaljno objašnjenje algoritma sa strukturnim dijagramom toka

## Kompajliranje i pokretanje

```bash
# Kompajliranje
make

# Pokretanje
./divisible_by_digit_sum

# Čišćenje
make clean
```

## Primer korišćenja

Program od korisnika traži da unese početak (a) i kraj (b) intervala, zatim prikazuje sve brojeve iz tog intervala koji su deljivi zbirom svojih cifara.

Za detaljne informacije o algoritmu i strukturnom dijagramu toka, pogledajte `ALGORITHM.md`.