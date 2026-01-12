# Task: Introduction to Structs in C

## Objective

Ziel dieser Übung ist, die Grundkonzepte von C‑structs zu lernen: Definition, Initialisierung, Zugriff auf Felder, Arrays von Structs und Übergabe per Wert und per Pointer an Funktionen.

---

## Aufgaben

### Aufgabe 1 — Einfaches Struct

- Ziel: Syntax, Definition und Zugriff auf Felder.
- Aufgabe: Definiere `struct Person { char name[32]; int age; };`. Erzeuge eine Instanz, setze `name` und `age`, und gib die Werte formatiert aus.

Beispielausgabe:

```bash
Name: Anna
Alter: 29
```

---

### Aufgabe 2 — Array von Structs

- Ziel: Umgang mit mehreren Instanzen und Schleifen.
- Aufgabe: Erstelle ein Array von 5 `Person`-Structs (hartkodiert oder per Eingabe). Berechne und gib das Durchschnittsalter sowie alle Einträge aus.

Beispielausgabe:

```bash
Personen:
1) Anna, 29
2) Ben, 21
3) Carla, 34
4) David, 18
5) Eva, 26

Durchschnittsalter: 25.6
```

---

### Aufgabe 3 — Funktionen mit Structs und Pointer

- Ziel: Übergabe von Structs an Funktionen per Wert vs. per Pointer und Modifikation über Pointer.
- Aufgabe: Schreibe eine Funktion `void birthday(struct Person *p)` die `age` um 1 erhöht. Schreibe zusätzlich `void make_older(struct Person p)` die den Parameter um 1 erhöht (per Wert). Im `main` rufe beide auf und zeige, welcher Aufruf das Original ändert.

Beispielausgabe:

```bash
Vorher: Anna, 29
Nach make_older (per Wert): Anna, 29
Nach birthday (per Pointer): Anna, 30
```

---

## Hinweise / Anforderungen

- Nutze `#include <stdio.h>` und ggf. `<string.h>`.
- Verwende `strncpy` oder `snprintf` für String‑Kopien in `name`.
- Achte auf sauberes Formatieren der Ausgaben.

---

## Let's code
