# Open-Closed Principle (OCP)
The Open-Closed Principle states that:
  Software entities (classes, modules, fucntions) should be open for extension but closed for modification.

# What it means
- Open for extension -> You can add new behaviour without breaking existing code.
- Closed for modification -> You don not change existing, tested code when new requirements appear.

# Why it matters
- Prevents bugs caused by modifying stable code.
- Makes the system easier to maintain.
- Encourages using abstraction (interfaces, base classes, specifications...)

# Simple example
- Instead of modifying a class every time you need a new filter or rule, you extend it by creating a new class implementing the same interface
