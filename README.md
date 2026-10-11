# Amicable Numbers — Testing Assignment

## Problem
Count distinct amicable pairs `(x, y)` where both numbers are in the inclusive range `[a, b]`.
A pair is amicable when `x != y`, the sum of proper divisors of `x` is `y`, and the sum of proper divisors of `y` is `x`.

## Files
- `amicable.cpp` — C++17 solution.
- `input.txt` — test inputs.
- `expected-output.txt` — mathematically expected output for `input.txt`.
- `test-cases.txt` — inputs and expected outputs together.
- `screenshots/` — add a genuine screenshot of your program run here.
- `note/amicable-numbers-note-guide.pdf` — printable note guide.
- `note/handwritten-note-guide.txt` — text to copy by hand.

## Compile and run
Linux/macOS:
```bash
g++ -std=c++17 -O2 -Wall -Wextra amicable.cpp -o amicable
./amicable < input.txt
```
Windows (MinGW):
```bash
g++ -std=c++17 -O2 -Wall -Wextra amicable.cpp -o amicable.exe
amicable.exe < input.txt
```

## Algorithm
1. Precompute the sum of proper divisors for each integer up to `MAXN` using a sieve-like loop.
2. For each range `[a, b]`, inspect every `i` in the range and set `j = sumDiv[i]`.
3. Count the pair only if `j > i`, `j` is also in `[a, b]`, and `sumDiv[j] == i`.
4. Stop when the input is `0 0`.

## Complexity
- Precomputation: `O(N log N)`, where `N = MAXN`.
- Each test case: `O(b - a + 1)`.
- Extra space: `O(N)`.

## Important sample inconsistency
The sample supplied in the assignment lists output `2` for range `1 1000`, but this conflicts with the definition and with the known amicable pairs. The only amicable pair whose members are both in `[1, 1000]` is `(220, 284)`, so the mathematically correct answer is `1`. For `[1, 10000]`, there are five pairs. If your online judge insists on the published sample output, ask your instructor to clarify this discrepancy.

## Before submission
- Run the program on your own computer.
- Capture a real screenshot showing the code running and its output.
- Add the screenshot to `screenshots/`.
- Write the note by hand, take a photo/scan, and optionally add that image to `note/`.
- Push the repository to GitHub and submit its URL.
