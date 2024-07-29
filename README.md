# Minitalk

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)

## Introduction
Minitalk is a project developed as part of the 42 School curriculum. It consists of creating a small data exchange program between a client and a server using UNIX signals. The objective of this project is to deepen your understanding of signals in UNIX systems and learn how to handle them to transfer data.

## Features
- Client-server architecture
- Data transmission using UNIX signals (`SIGUSR1` and `SIGUSR2`)
- Handles basic error management
- Can transmit strings of characters from the client to the server

## Installation
To install Minitalk, clone the repository and compile the source code:

```bash
git clone https://github.com/yourusername/minitalk.git

cd minitalk

make
```

## Usage

### Running the Server
First, you need to start the server. The server will print its process ID (PID), which you will use to send messages from the client.
```bash
./server
```
### Running the Client
After starting the server, you can send messages to it using the client. You need to provide the server's PID and the message you want to send.
```bash
./client [server-pid] "Your message here"
```
