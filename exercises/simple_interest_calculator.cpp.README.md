# simple_interest_calculator.cpp

**Formerly known as:** `intrest.cpp`

Simple interest calculator. Has a real logic bug: prompts for principle, rate and time but only reads a single value into `intrest` via cin - principle, rate and time are never actually assigned, so the calculation uses garbage values.
