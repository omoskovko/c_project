## Overview
This project is a simple C program that performs basic arithmetic operations such as addition, subtraction, and multiplication.

## Prerequisites
- GNU Autotools (autoconf, automake, aclocal)
- GCC (GNU Compiler Collection)

## Installation

1. **Clone the repository:**
   ```sh
   git clone https://github.com/yourusername/c_project.git
   cd c_project
   ```
2. **Generate the configuration script:**
   ```sh
   aclocal
   autoconf
   automake --add-missing
   ```
3. **Configure the project:**
   ```sh
   ./configure
   ```
4. **Build the project:**
   ```sh
   make
   ```
5. **Install the program:**
   ```sh
   sudo make install
   ```

## Usage
**Run the installed program:**
   ```sh
   my_program
   ```

## Cleaning Up
1. **Clean the build files and all generated files:**
   ```sh
   make clean
   ```
2. **Uninstall the program:**
   ```sh
   sudo make uninstall
   ```
3. **Clean everything including installed files:**
   ```sh
   sudo make clean-all
   ```
