# marks_average_calculator.cpp

**Formerly known as:** `subjectx.cpp`

Subject marks total and average calculator (5 subjects). Bug: divides total by `obtainmarks`, which is set equal to `totalmarks`, so the average always computes as 100 regardless of actual marks - likely meant to divide by the number of subjects (5) instead.
