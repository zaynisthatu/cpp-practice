# counter_inheritance_exercise.cpp

**Formerly known as:** `casher.cpp`

First inheritance exercise: `counter1` inherits from `counter`. Bug: count2() is declared private by default (no access specifier under the colon), and main() only ever calls the inherited count(), so count2() is unreachable/unused. (Original name 'casher.cpp' was misleading - this is about counters/inheritance, not a cashier.)
