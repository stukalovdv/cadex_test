# Project README

This project is a C++ implementation that addresses the following tasks:

## Building the Project with CMake

This project utilizes CMake for building. Follow these steps to build the project:

1. **Create a Build Directory:**
   - In the root directory of the project, create a build directory. You can do this by running the following commands in the terminal:
     ```bash
     mkdir build
     cd build
     ```

2. **Run CMake:**
   - Inside the build directory, run CMake to configure the project:
     ```bash
     cmake ..
     ```

3. **Build the Project:**
   - After configuring the project with CMake, build the project using the generated build system (e.g., Makefiles or Visual Studio solution):
     ```bash
     cmake --build .
     ```

4. **Execute the Compiled Program:**
   - Once the build process is complete, you can find the compiled executable in the build directory. Execute it to run the program:
     ```bash
     ./YourExecutableName
     ```

**Note:**
- You may need to replace `YourExecutableName` with the actual name of the executable generated during the build process.

- If you encounter any issues during the build process, make sure you have CMake and a C++ compiler installed on your system. Adjust the CMakeLists.txt files as needed for your project structure.

Feel free to customize the build process according to your preferences or project requirements.


## Features

1. **Support for Multiple Types of 3D Geometric Curves:**
   - The program supports three types of 3D geometric curves: circles, ellipses, and 3D spirals.
   - Each curve type is capable of returning a 3D point and the first derivative (3D vector) with respect to the parameter `t`.

2. **Creation of a Container with Randomly Generated Curves:**
   - The application creates a container (e.g., vector or list) with objects of these curve types.
   - The curves are randomly generated based on random parameters.

3. **Calculation of Coordinates and Derivatives at t=1:**
   - The program computes the coordinates of points and derivatives of all curves in the container at the parameter value `t=1`.

4. **Population of a Second Container with Circles:**
   - A second container is populated, containing only circles from the first container.
   - Ensures uniqueness in the second container by checking for duplicates.

5. **Sorting of the Second Container by Increasing Radius:**
   - The program sorts the second container in ascending order based on the radii of the circles.
   - The first element has the smallest radius, and the last has the largest radius.

6. **Calculation of the Total Sum of Radii in the Second Container:**
   - The application computes the total sum of radii for all curves in the second container.

## Additional Optional Requirements

7. **Separation of Implementation into Curve Library and Application:**
   - The project is structured to separate the implementation into a curve library (or classes) and an application using the library's API.

8. **Parallel Computation of the Total Sum of Radii:**
   - The program optionally utilizes parallel computing, such as OpenMP or the Intel TBB library, to calculate the total sum of radii.

## Implementation Requirements

- The implementation uses virtual methods to achieve polymorphism.
- Care is taken to avoid explicit manual memory allocation and memory leaks.
- Geometric curves are physically correct; for example, radii are constrained to be positive.
- Containers and sorting are implemented using the C++ Standard Template Library (STL).
- The code may use C++11 or higher language features.
- Compatibility with various compilers conforming to the C++11 standard (e.g., gcc, Visual C++, XCode) is ensured.
