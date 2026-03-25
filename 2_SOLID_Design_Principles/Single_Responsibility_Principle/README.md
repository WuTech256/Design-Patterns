# Single Responsibility Principle (SRP)

## A class should have only one reason to change
- Each class should do one thing only
- This improves maintainability, reduces bugs, and makes code easier to test.

## Example with main.cpp
- A Journal class should manage entries, but not handle saving to a file. That's Why the code separates `PersistenceManager`
