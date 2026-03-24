##  Table of Contents

-  [Overview](#overview)
-  [Features](#features)
-  [Hardware Requirements](#hardware-requirements)
-  [Wiring Diagram](#wiring-diagram)
-  [How It Works](#how-it-works)
-  [Usage](#usage)
- [Code Structure](#code-structure)
- [Troubleshooting](#troubleshooting)
- [Summary](#summary)
- [Project Author](#project-author)


## Overview
This project implements bit-banged TWI (Two-Wire Interface) communication for AVR microcontrollers to read from and write to external I2C EEPROM memory chips. It provides simple, reusable functions for:
- Writing a single byte to any EEPROM address
- Reading a single byte from any EEPROM address
- Handling I2C start/stop conditions and ACK/NACK responses
- Configuring I2C clock speed for reliable communication
Ideal for data logging, configuration storage, or retaining settings across power cycles.
