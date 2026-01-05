
# Setup-Anleitung - DHBW Kurs INF1004

*(Windows Setup mit Cygwin & Visual Studio Code - entspricht dem Setup während der Prüfung)*

---

## Übersicht

Dieses Dokument erklärt Schritt für Schritt, wie Sie Ihre Entwicklungsumgebung für die Vorlesung einrichten.

Nach Abschluss der Installation können Sie:

* C-Programme kompilieren
* Programme debuggen
* Git & GitHub verwenden
* komfortabel in VS Code entwickeln

---

## Installation der Entwicklungswerkzeuge

### **Cygwin64 installieren (GCC, GDB)**

#### **Download**

[https://cygwin.com/install.html](https://cygwin.com/install.html)

#### **Installationshinweise**

* Installation **direkt auf Laufwerk C:\**
* Während der Installation:

  1. Ansicht auf **View → Full** stellen
  2. Folgende Pakete auswählen:

| Paket              | Zweck                        |
| ------------------ | ---------------------------- |
| **gcc-g++**        | C / C++ -Compiler            |
| **gdb**            | Debugger                     |

---

### **Pfad setzen (Environment Variable PATH)**

Damit `gcc` und `gdb` überall funktionieren:

1. **Systemsteuerung → System → Erweiterte Systemeinstellungen → Umgebungsvariablen**
2. In *Benutzervariablen* → `PATH` auswählen → **Bearbeiten**
3. Hinzufügen:

```bash
C:\cygwin64\bin
```

### Testen im Terminal

```bash
gcc --version
gdb --version
```

---

## Installation & Setup von Visual Studio Code

---

### **VS Code herunterladen**

[https://code.visualstudio.com/](https://code.visualstudio.com/)

---

### Funktionstest der Installation

Erstellen Sie `hello.c`:

```c
#include <stdio.h>

int main() {
    printf("Hello DHBW!\n");
    return 0;
}
```

Manuelle Kompilierung & Ausführung im Terminal:

```bash
gcc hello.c -o hello
./hello.exe
```

Erwartete Ausgabe:

```bash
Hello DHBW!
```

---

## Git & GitHub einrichten

Für Versionskontrolle und Zusammenarbeit arbeiten wir mit Git und GitHub.
Entsprechende Grundlagen werden in der Vorlesung vermittelt.

Nachdem Sie einen Github Account erstellt haben, richten Sie Git lokal ein.
Offizielle Unterlagen zur Einrichten finden Sie unter Anderem hier:

* [Git - Offizielle Seite](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)
* [Git Commands](https://github.com/PandaLehre/git_commands)

---

## Make

Make ist ein Build-Automatisierungstool.
Um make unter Windows zu installieren, verwenden Sie am besten einen Paketmanager wie Scoop (scoop install make) oder installieren es manuell über die GnuWin32-Pakete oder als Teil einer MinGW/MSYS2-Umgebung, wobei Sie anschließend den Pfad zur make.exe zu den Systemvariablen hinzufügen müssen, damit das Programm in der Eingabeaufforderung oder PowerShell erkannt wird.

### Installieren Sie Scoop

1. Öffnen Sie PowerShell als Administrator.
2. Führen Sie den folgenden Befehl aus, um die Ausführungsrichtlinie zu ändern:

```powershell
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
```

3. Installieren Sie Scoop mit dem folgenden Befehl:

```powershelliwr
irm get.scoop.sh | iex
```

### Installieren Sie Make

Da Sie nun den Paketenmanager Scoop installiert haben, können Sie Make mit dem folgenden Befehl installieren:

```powershell
scoop install make
```

Fügen Sie den Pfad zu Make zu den Umgebungsvariablen hinzu, falls Scoop dies nicht automatisch erledigt hat. Der Pfad sollte in etwa so aussehen:

```plaintext
C:\Users\<IhrBenutzername>\scoop\shims
```

### Testen Sie die Installation

Öffnen Sie eine neue PowerShell-Sitzung und führen Sie den folgenden Befehl aus, um zu überprüfen, ob Make korrekt installiert wurde:

```powershell
make --version
```

---

## DIE FOLGEDNEN ABCHNITTE WERDEN IM LAUFE DER VORLESUNG EINGERICHTET / EINGEFÜHRT

### Debugging in VS Code

Debuggen ermöglicht:

* Breakpoints setzen
* Variablen inspizieren
* Call Stack beobachten
* Schrittweises Ausführen

Start:

1. „Run & Debug“ in der linken Leiste
2. Breakpoints setzen
3. Debug starten

---

### Empfohlene Erweiterungen

| Extension                       | Zweck                             |
| ------------------------------- | --------------------------------- |
| **Coding Tools Extension Pack** | Produktivität                     |
| **C/C++ Extension Pack**        | IntelliSense, Debugger            |
| **C/C++ Runner**                | Einfaches Kompilieren & Ausführen |
| **Code Spell Checker**          | Rechtschreibprüfung               |
| **Trailing Spaces**             | Saubere Formatierung              |
| **vscode-icons**                | Icons für Dateien                 |
| **Git Graph**                   | Grafische Git-History             |

---
---

## ----------------- Viel Erfolg ------------------
