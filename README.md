## C++ Programs for College Students ⌨️

- This repository contains essential C++ programs for college students. 
- I recommend compiling the C++ programs using g++ in GNU/Linux.

### Installing g++ in Linux

- Ubuntu: `sudo apt install build-essential`
- Fedora: `sudo dnf install g++`
- Most distros bundle gcc and g++ by default, so a seperate installation isn't required. 

### Compiling a CPP program in g++

- Ensure g++ is installed by running `g++ --version` command.
- Open gnome-terminal or Konsole or the terminal or your terminal of choice.
- Navigate to the relevant directory using `cd` and `ls` command.
- Now, use `touch filename.cpp` command to create a file or you can use an existing .cpp file.
- Enter `g++ filename.cpp` to compile the file. In case of any errors in the program it will be displayed here. 
- After a successful compilating, an output binary file will be created which is `a.out` by default. 
- You can also provide your own custom output name by adding `-o` flag at the end of g++ command. For example, `g++ filename.cpp -o filename`. Now the binary will be created in a custom filename.
- To run the binary files just type `./a.out` or `./binaryname`. 
- You can also choose a language standard to compile the program for (C++98/C++11/C++14/C++17).

### Writing and compiling Hello World C++ Program

- You can write this program in any IDE or text editor of choice. 

- Example code:-
```c++
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
```
Hello World
```

### About this project

- This repository contains the C++ programs I worked on in college. I created this repository with essential programs segregated topicwise with documentation on compiling the programs to help students write better programs. I will keep this repository open for contributions in the future.

### Contribute 

- You can contribute to this repository by adding your own programs by creating pull requests. 

### Suggested Resources

1. <https://www.w3schools.com> .
2. <https://www.geeksforgeeks.org> .
3. <https://www.tutorialspoint.com> .
4. <https://github.com/EbookFoundation/free-programming-books> .

Note:- This list isn't actively maintained. More resources are available online on various platforms. 
