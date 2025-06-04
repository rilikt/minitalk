# 🛰️ minitalk – Signal-Based Client/Server Messaging in C

**minitalk** is a small UNIX messaging program that demonstrates low-level inter-process communication (IPC) using **UNIX signals**. You’ll create a `client` that sends messages to a `server`, bit by bit, using `SIGUSR1` and `SIGUSR2`.

---

## 📚 Project Summary

- Build a client-server communication system using only **signals**
- Learn how to encode characters as signals
- Use process IDs (`PID`) and system calls like `kill`, `signal`, and `sigaction`
- Handle input, memory, and system delays efficiently

---

## 🧠 Goals

- Explore UNIX signals for data transfer
- Reinforce memory safety and pointer management
- Understand asynchronous, low-level I/O systems
- Implement message acknowledgment and Unicode (bonus)

---

## 🛠️ Usage Overview

### 🖥️ Server

```bash
$ ./server
Server PID: 12345
```

The server waits for messages sent via signals and displays the full string once received.

### 📤 Client

```bash
$ ./client 12345 "Hello, world!"
```

Sends the message `"Hello, world!"` to the server with PID `12345`.

---

## ⚙️ Allowed Functions

- `write`, `getpid`, `kill`, `signal`, `sigaction`, `pause`, `usleep`, `malloc`, `free`, `exit`
- `ft_printf()` (if implemented by you)

---

## 🔧 Build Instructions

```bash
make        # Builds both client and server
make clean  # Cleans object files
make fclean # Cleans everything including binaries
make re     # Rebuilds from scratch
```

---

## 🧬 Example Usage

```bash
# Terminal 1
$ ./server
Server PID: 4242

# Terminal 2
$ ./client 4242 "42 is awesome 🚀"
```

Output on the server:
```
42 is awesome 🚀
```

---
