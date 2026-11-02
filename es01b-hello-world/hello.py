#!/usr/bin/env python3
"""Hello World: dal programma Python al processo in esecuzione."""
import os

nome = 'Gino'
messaggio = "Hello World dell'esercizio b."

print('Hello, World!')
print(f'Studente: {nome}')
print(messaggio)
print(f'PID del processo: {os.getpid()}')
