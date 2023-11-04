# C++ Programs for College Students ⌨️

- This repository contains essential C++ programs for college students.
- I recommend compiling the C++ programs using `g++` in GNU/Linux.

## Installing `g++` in Linux

- Ubuntu: `sudo apt install build-essential`
- Fedora: `sudo dnf install g++`
- Most distributions bundle `gcc` and `g++` with them by default, so a seperate installation isn't required.

### Compiling a CPP program in `g++`

- Ensure `g++` is installed by running `g++ --version` command.
- Open a terminal emulator of your choice.
- Navigate to the relevant directory using `cd` command.
- Optionally, use `touch <filename>.cpp` command to create a CPP file.
- Enter `g++ filename.cpp` to compile the file. Any compilation/syntactical errors in the program will be displayed here.
- After a successful compilating, an output binary file `a.out` will be created by default.
- You can also provide your own custom output name by adding `-o` flag at the end of `g++` command. For example, `g++ <filename>.cpp -o <filename>`. Now the binary will be created in a custom filename.
- To run the binary files just type `./a.out` or `./binaryname` in the terminal.

### Writing and compiling Hello World C++ Program

- You can write this program in any IDE or text editor of choice.

- Example code:-

```cpp
/*helloworld.cpp*/

#include<iostream> //header file
using namespace std; //for using cin,cout commands without std:: tags
int main()
{
cout<<"Hello World"<<endl; 
}
```

- To create for the output for file we need compile it using a compiler like GCC,etc.
- Open Terminal in Linux and `cd` into the file's directory.
- Type `g++ helloworld.cpp` or `c++ helloworld.cpp` and enter this will create an `a.out` binary file.
- For creating an output file with cutstom name use `g++ helloworld.cpp -o helloworld`.
- Now we can run the binaries using `./a.out` or `./helloworld`
- **Output in the terminal would be:-**

```text
Hello World
```
