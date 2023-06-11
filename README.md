# Inheritance-Kingdom<br>
**Assignment: Exploring Inheritance and Composition in C++**<br>
<br>
**Objective**: This assignment is designed to give you practical experience with two key concepts in Object-Oriented Programming (OOP): inheritance and<br> composition. You will build classes that model real-world entities and understand how these two techniques allow for flexible, modular, and reusable code.<br>
<br>
**Part 1: Inheritance (50 points)**<br>
<br>
1. Implement an `Animal` base class with the following attributes and behaviors (10 points):<br>
   - Protected member variables `sound` and `name`, both of type string (5 points).<br>
   - A pure virtual function `makeSound()` that prints the sound the animal makes (5 points).<br>
   <br>
2. Develop a `Dog` class and a `Cat` class that inherit from the `Animal` base class (40 points):<br>
   - Override the `makeSound()` function in both classes. The `Dog` class should print "Woof!" and the `Cat` class should print "Meow!" (10 points).<br>
   - The `Dog` class should include an additional integer member variable `fetchCount`, which is initially set to 0, and a function `fetchItem()` that takes<br> a string argument representing an item. Each time `fetchItem()` is called, increment `fetchCount` by 1. Once `fetchCount` is equal to or exceeds 10, print a<br> message that the dog is tired, reset `fetchCount` to 0, and append the fetched item to the dog's original name (30 points).<br>
