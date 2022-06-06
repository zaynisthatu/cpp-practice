# phone_bill_calculator.cpp

**Formerly known as:** `bills.cpp`

Phone-bill calculator based on call count. Has a real logic bug: the third condition uses assignment (`calls=200`) instead of comparison, and the final else has a stray semicolon that turns it into a no-op followed by an always-executed statement.
