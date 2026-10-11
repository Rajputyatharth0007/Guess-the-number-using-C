# Guess the Number (C)

A simple, interactive command-line game written in **C** where you pick a range, set the number of chances, and try to guess the randomly generated secret number.

---

## 📖 Game Rules

1. You choose the upper bound of the range (e.g., entering `100` means the secret number is between 1 and 100).
2. You choose how many attempts you are allowed.
3. On each turn, enter your guess.
4. The game tells you whether your guess is **too low**, **too high**, or **correct**.
5. You win if you guess the number within the allowed attempts; otherwise you lose and the secret number is revealed.

---

## ✨ Features

- Configurable range and number of chances — every game is different.
- Helpful hints after each wrong guess (too low / too high).
- Robust input validation: non-numeric input and out-of-range values are handled gracefully without crashing or consuming an attempt unfairly.
- Clean, readable C11 source code with no external dependencies.

---

## 🛠 Requirements

| Tool | Version |
|------|---------|
| C compiler | GCC (MinGW on Windows) or any C11-compliant compiler |
| Operating System | Windows, Linux, or macOS |

---

## 🔨 Compilation

### Windows (MinGW GCC)

```bat
gcc -std=c11 -Wall -Wextra -Wpedantic randomnoguess.c -o guess_number.exe
```

### Linux / macOS

```sh
gcc -std=c11 -Wall -Wextra -Wpedantic randomnoguess.c -o guess_number
```

---

## ▶ How to Run

### Windows

```bat
.\guess_number.exe
```

### Linux / macOS

```sh
./guess_number
```

---

## 🎮 Example Gameplay

```
=== HELLO PLAYER ===
Let's play a game! Guess the random number in the range 1 to your chosen range.

Enter your chosen range (must be >= 1): 50
Enter the number of chances (must be >= 1): 7

A random number between 1 and 50 has been chosen. Good luck!

Attempt 1/7 - Enter your guess (1 to 50): 25
Too high! Try a lower number.

Attempt 2/7 - Enter your guess (1 to 50): 12
Too low! Try a higher number.

Attempt 3/7 - Enter your guess (1 to 50): 18
Too low! Try a higher number.

Attempt 4/7 - Enter your guess (1 to 50): 21

----- You Win! -----
Correct! The number was 21. You used 4 attempt(s).
```

---

## 👤 Author

**[Rajputyatharth0007](https://github.com/Rajputyatharth0007)**
