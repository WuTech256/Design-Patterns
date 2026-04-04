# Liskov Substitution Principle (LSP)

Objects of a derived class should be replaceable with objects of the base class without altering the correctness of the program

# In this example
- Rectangle allows width and height to change independently
- Square forces width and height to always be equal
- This breaks the expected behavior in process()
