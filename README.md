# README проекта

Этот проект представляет собой реализацию на C++, решающую следующие задачи:

## Сборка проекта с использованием CMake

Для сборки проекта используется CMake. Следуйте этим шагам, чтобы построить проект:

1. **Создайте директорию для сборки:**
   - В корневой директории проекта создайте директорию для сборки. Это можно сделать, выполнив следующие команды в терминале:
     ```bash
     mkdir build
     cd build
     ```

2. **Запустите CMake:**
   - Внутри директории для сборки выполните CMake для конфигурации проекта:
     ```bash
     cmake -G "Ninja" ../
     ```

3. **Соберите проект:**
   - После конфигурации проекта с помощью CMake соберите проект, используя сгенерированную систему сборки (например, Makefiles или решение Visual Studio):
     ```bash
     cmake --build .
     ```

4. **Запустите скомпилированную программу:**
   - После завершения процесса сборки скомпилированный исполняемый файл можно найти в директории для сборки. Запустите его для выполнения программы:
     ```bash
     ./CADEX
     ```

**Примечание:**
- Возможно, вам придется заменить `YourExecutableName` на фактическое имя исполняемого файла, сгенерированного в процессе сборки.

- Если возникнут проблемы во время процесса сборки, убедитесь, что у вас установлены CMake и компилятор C++. При необходимости настройте файлы CMakeLists.txt в соответствии с вашей структурой проекта.

Не стесняйтесь настраивать процесс сборки в соответствии с вашими предпочтениями или требованиями проекта.



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
