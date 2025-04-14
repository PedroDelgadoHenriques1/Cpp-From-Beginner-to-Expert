// EXERCISE: Implementing a Class with unique_ptr Property
// Objective:
// This exercise is designed to reinforce your understanding of unique_ptr by incorporating it as a class property. 
//You'll see firsthand how unique_ptr simplifies memory management within a class,
// especially how it eliminates the need for manual memory deletion in the destructor.

// Scenario:
// Imagine you're building a simple graphics application. 
//In this application, you have a Canvas class that can hold a variety of shapes. 
//For simplicity, we'll focus on a single shape: a Circle. The Circle object will be dynamically allocated and managed by the Canvas class using a unique_ptr.
// This exercise will help you practice using unique_ptr for safe and automatic memory management of class properties.

// Task Instructions:
// Define the Circle Class:

// Create a simple Circle class with at least one property, such as radius, and a method to display its details (e.g., display()).

// Implement the Canvas Class:

// The Canvas class should have a unique_ptr<Circle> as a property, indicating that each Canvas can hold one Circle.

// Implement a method to add a Circle to the Canvas.
// This method should take the necessary parameters to create a Circle and assign it to the unique_ptr property.

// Implement a method to display information about the Circle contained within the Canvas, if it exists.

// Automatic Memory Management:

// Notice how you don't need to write a destructor for the Canvas class to delete the Circle object. 
//Explain why this is the case, reflecting on how unique_ptr manages the Circle's lifecycle.

// Main Function:

// In your main function, create an instance of Canvas and use the method you implemented to add a Circle to it.

// Call the display method to show information about the Circle.

// Observe and explain what happens to the Circle object when the Canvas object goes out of scope.

// Reflection:
// After completing the exercise, reflect on the following questions:

// How does unique_ptr in the Canvas class simplify memory management compared to using a raw pointer?

// What advantages do you see in using unique_ptr for managing dynamically allocated objects in classes?

// This exercise should solidify your understanding of unique_ptr as a powerful tool for automatic memory management in C++, 
//especially in the context of class properties.



// SOLUTION (scroll down):


//❌ Em C++98 NÃO é possível usar std::make_unique nem std::unique_ptr.










































// #include <iostream>
// #include <memory> // For std::unique_ptr and std::make_unique
 
// // Circle class definition
// class Circle {
// public:
//     int radius;
//     Circle(int r) : radius(r) { std::cout << "Circle created with radius " << radius << std::endl; }
//     ~Circle() { std::cout << "Circle destroyed" << std::endl; }
//     void display() const {
//         std::cout << "Circle with radius: " << radius << std::endl;
//     }
// };
 
// // Canvas class definition
// class Canvas {
// private:
//     std::unique_ptr<Circle> circle; // unique_ptr for managing the Circle
 
// public:
//     // Method to add a Circle to the Canvas
//     void addCircle(int radius) {
//         circle = std::make_unique<Circle>(radius); // Automatically creates and manages a Circle
//     }
 
//     // Method to display the Circle's details if it exists
//     void displayCircle() const {
//         if (circle) {
//             circle->display();
//         } else {
//             std::cout << "No circle on canvas." << std::endl;
//         }
//     }
 
//     // Note: The destructor for Canvas is not explicitly defined because unique_ptr automatically deletes the Circle
// };
 
// // Main function to demonstrate usage
// int main() {
//     {
//         Canvas canvas;
//         canvas.addCircle(10); // Add a circle with radius 10 to the canvas
//         canvas.displayCircle(); // Display details about the circle
//     } // The Canvas goes out of scope here, and the unique_ptr automatically deletes the Circle
 
//     std::cout << "Canvas has gone out of scope. Circle automatically destroyed." << std::endl;
 
//     return 0;
// }
// Key Takeaways from the Solution:

// Automatic Memory Management: The unique_ptr<Circle> within the Canvas class automatically takes care of allocating and deallocating the Circle object. When the Canvas instance goes out of scope, its destructor is implicitly called, which in turn calls the destructor of unique_ptr<Circle>, thus destroying the Circle object without explicit user intervention.

// Simplicity and Safety: By using unique_ptr, the code avoids common memory management pitfalls such as memory leaks, dangling pointers, or double deletions. It makes the Canvas class simpler, safer, and more robust, especially in more complex applications where manual memory management can become error-prone.

// Destructor Behavior: This example also illustrates that you don't need to write a custom destructor for classes that contain unique_ptr as members. The default destructor provided by the compiler is sufficient because it will automatically invoke the destructor of unique_ptr, which in turn safely deletes the managed object if it exists.

