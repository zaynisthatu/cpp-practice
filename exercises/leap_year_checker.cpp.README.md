# leap_year_checker.cpp

**Formerly known as:** `year.cpp`

Leap year checker, same session as compare_two_numbers.cpp. Logic bug: the else-branch condition (`year % 100 == 0`) is a no-op statement, not an if-check, so the century-year exception to the leap year rule isn't actually applied.
