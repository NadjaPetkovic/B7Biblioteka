# Algoritam za pronalaženje brojeva deljivih zbirom svojih cifara

## Problem
Napisati strukturni program na programskom jeziku C koji prikazuje sve prirodne brojeve iz intervala [a, b], koji su deljivi zbirom svojih cifara. Brojevi koji ne ispunjavaju zadati uslov se ne prikazuju. Vrednosti a i b zadaje korisnik.

## Strukturni dijagram toka algoritma

```
START
  |
  v
Unos vrednosti a i b
  |
  v
a > 0 i b > 0? ----NO----> Ispis greške "Brojevi moraju biti prirodni"
  |                              |
  YES                            v
  |                            END
  v
a <= b? ----NO----> Ispis greške "a mora biti <= b"
  |                        |
  YES                      v
  |                      END
  v
i = a
  |
  v
i <= b? ----NO----> Ispis ukupnog broja pronađenih
  |                        |
  YES                      v
  |                      END
  v
Izračunaj zbir_cifara(i)
  |
  v
i % zbir_cifara(i) == 0? ----YES----> Ispis i i zbira cifara
  |                                        |
  NO                                       v
  |                                  Uvećaj brojač
  v                                        |
i = i + 1 <----------------------------------
  |
  v
(nazad na proveru i <= b?)
```

## Opis algoritma

1. **Početak**: Program počinje učitavanjem vrednosti a i b od korisnika
2. **Validacija ulaza**: 
   - Proverava se da li su a i b prirodni brojevi (> 0)
   - Proverava se da li je a ≤ b
3. **Glavna petlja**: Za svaki broj i u intervalu [a, b]:
   - Izračunava se zbir cifara broja i
   - Proverava se da li je i deljiv svojim zbirom cifara
   - Ako jeste, broj se ispisuje
4. **Završetak**: Ispisuje se ukupan broj pronađenih brojeva

## Funkcije

### `int zbir_cifara(int broj)`
- **Ulaz**: Prirodan broj
- **Izlaz**: Zbir cifara broja
- **Algoritam**: 
  - Inicijalizuje zbir na 0
  - Dok je broj > 0:
    - Dodaje poslednju cifru (broj % 10) na zbir
    - Uklanja poslednju cifru (broj /= 10)
  - Vraća zbir

### `int main()`
- Učitava a i b od korisnika
- Validira unos
- Iterira kroz interval [a, b]
- Za svaki broj poziva `zbir_cifara()` i proverava deljivost
- Ispisuje rezultate

## Kompajliranje i pokretanje

```bash
# Kompajliranje
make

# Ili direktno
gcc -Wall -Wextra -std=c99 -o divisible_by_digit_sum divisible_by_digit_sum.c

# Pokretanje
./divisible_by_digit_sum
```

## Primeri izvršavanja

### Primer 1: Interval [1, 20]
```
Unesite početak intervala (a): 1
Unesite kraj intervala (b): 20

Brojevi iz intervala [1, 20] koji su deljivi zbirom svojih cifara:
1 (zbir cifara: 1)
2 (zbir cifara: 2)
3 (zbir cifara: 3)
4 (zbir cifara: 4)
5 (zbir cifara: 5)
6 (zbir cifara: 6)
7 (zbir cifara: 7)
8 (zbir cifara: 8)
9 (zbir cifara: 9)
10 (zbir cifara: 1)
12 (zbir cifara: 3)
18 (zbir cifara: 9)
20 (zbir cifara: 2)

Ukupno pronađeno: 13 brojeva
```

### Primer 2: Interval [100, 120]
```
Unesite početak intervala (a): 100
Unesite kraj intervala (b): 120

Brojevi iz intervala [100, 120] koji su deljivi zbirom svojih cifara:
100 (zbir cifara: 1)
102 (zbir cifara: 3)
108 (zbir cifara: 9)
110 (zbir cifara: 2)
111 (zbir cifara: 3)
112 (zbir cifara: 4)
114 (zbir cifara: 6)
117 (zbir cifara: 9)
120 (zbir cifara: 3)

Ukupno pronađeno: 9 brojeva
```

## Analiza složenosti

- **Vremenska složenost**: O((b-a) * log₁₀(max(b))) - za svaki broj u intervalu se računa zbir cifara
- **Prostorna složenost**: O(1) - koristi se konstantan dodatni prostor