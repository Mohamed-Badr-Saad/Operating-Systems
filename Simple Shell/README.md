# Simple Linux Shell Project

Welcome to the Simple Linux Shell project! This project implements a basic shell in a Linux environment.

## Project Overview

The goal of this project is to create a simple shell that can handle basic command-line operations. The shell supports common features like command execution, input/output redirection, and piping.

## Project Structure

- **main.cpp**: The main entry point for the shell. Handles command-line arguments, user input, and serves as the main loop for command processing.

- **dispatcher.hpp**: Header file containing declarations for the `dispatcher` function, which is responsible for executing commands.

- **prompt.hpp**: Header file containing declarations for the `prompt` function, used to prompt the user for input and display the command line.

## Features

- Command execution
- Input/output redirection
- Pipe support

## Getting Started

To get started with the shell, follow these steps:

1. Clone the repository:

    ```bash
    git@github.com:Mohamed-Badr-Saad/Operating-Systems.git
    cd "Simple Shell"
    ```

2. Compile the shell:

    ```bash
    g++ main.cpp dispatcher.cpp prompt.cpp -o shell
    ```

3. Run the shell:

    ```bash
    ./shell
    ```

## Usage

Once the shell is running, you can enter commands as you would in a regular Linux shell.

