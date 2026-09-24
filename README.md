# courseForStudents

A learning repository for programming students, focused on C++ fundamentals and a supporting Python course track. The project contains lecture notes, example programs, textbook references, exercise sets, and practice problems used for teaching and self-study.

## Overview

This repository is organized as a course archive rather than a production software project. It includes:

- C++ beginner-to-advanced learning material
- Python course notes and syllabus references
- Example source files and compiled exercises
- Problem sets and external study resources
- Simple scripts to compile and run C++ examples locally

## Repository Structure

```text
.
├── README.md
├── LICENSE
├── .gitignore
├── .gitattributes
├── cpp/
│   ├── README.md                 # C++ course outline and topic map
│   ├── buildAndRun.sh            # helper script to compile and run C++ files
│   ├── HK_Syllabus.jpeg          # syllabus image
│   ├── cpp_Syllabus.pdf          # C++ syllabus PDF
│   ├── books/                    # reference books and study material
│   ├── lectures/                 # numbered C++ lessons with source code and exercises
│   └── problems/                 # practice sets and problem references
├── py/
│   ├── README.md                 # Python class-by-class notes
│   ├── syllabus and course docs # PDFs and official curriculum materials
│   └── ...
└── ...
```

## C++ Course Focus

The C++ section is the main content of the repository. The course outline in `cpp/README.md` covers topics from:

- basic syntax and variables
- functions and classes
- operators and control flow
- strings, arrays, and pointers
- file I/O
- inheritance, polymorphism, and exception handling
- templates and standard containers

The lessons are grouped by numbered folders like `cpp/lectures/01`, `cpp/lectures/02`, etc., and each folder contains example code and practice resources.

## Python Course Focus

The `py/` directory contains a smaller Python learning path with class-by-class learning notes and reference materials. This section complements the C++ track and documents a structured beginner programming curriculum.

## How to Run the Examples

The C++ examples are intended to be compiled with a local C++ compiler such as `g++`.

### Option 1: Use the helper script

```bash
cd cpp
PROG_NAME=lectures/01/test1.cpp ./buildAndRun.sh
```

### Option 2: Compile manually

```bash
cd cpp
g++ lectures/01/test1.cpp -o a.out
./a.out
```

## Notes

- This repository is educational and reference-oriented.
- It is not a production application or library.
- The content is best used as course material, practice examples, and study notes.

## License

This project is licensed under the MIT License. See `LICENSE` for details.
