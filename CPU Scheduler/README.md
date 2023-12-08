# CPU Scheduler Project

Welcome to the CPU Scheduler project! This project implements various CPU scheduling algorithms in a Linux environment. The supported algorithms include First Come First Served (FCFS) and Round Robin (RR).

## Project Structure

- **Main.cpp**: The main entry point for the CPU Scheduler project. It reads test cases from input files, prompts the user for the scheduling algorithm, and generates the scheduling timeline.

- **Prompt.hpp**: Header file containing the `prompt` function, which prompts the user for the scheduling mode (FCFS or RR) and, in the case of RR, the time quanta.

- **ReadFile.hpp**: Header file containing the `readFile` function, which reads test cases from input files and returns a vector of `Process` objects.

- **Timeline.hpp**: Header file defining the `Timeline` structure, which represents the scheduling timeline.

- **Process.hpp**: Header file defining the `Process` structure, which represents a process with its properties such as process ID, CPU time, I/O time, arrival time, and state.

- **FirstServed.hpp**: Header file containing the `firstServed` function, which implements the FCFS scheduling algorithm.

- **RoundRobin.hpp**: Header file containing the `roundRobin` function, which implements the Round Robin scheduling algorithm.

- **printStats.hpp**: Header file containing the `printStats` function, which prints statistics and writes them to an output file.

- **WriteToFile.hpp**: Header file containing the `writeToFile` function, which writes content to a file.

## Features

- FCFS (First Come First Served) scheduling algorithm
- RR (Round Robin) scheduling algorithm
- Reading test cases from input files
- Printing and writing scheduling statistics
- [Add more features here]

## Getting Started

To get started with the CPU Scheduler project, follow these steps:

1. Clone the repository:

    ```bash
    git clone git@github.com:Mohamed-Badr-Saad/Operating-Systems.git
    cd Operating-Systems
    ```

2. Compile the program:

    ```bash
    g++ Main.cpp -o cpu_scheduler
    ```

3. Run the program:

    ```bash
    ./cpu_scheduler
    ```

4. Enter the number of the test case and choose the scheduling mode.

## Usage

Once the program is running, follow the prompts to select the scheduling algorithm and provide necessary inputs. The program will generate a scheduling timeline and print statistics.

Example:

```bash
$ ./cpu_scheduler
Mode of operation:
0: First Come First Served (FCFS)
1: Round Robin

Enter the number of the test case: 1
You chose FCFS.
