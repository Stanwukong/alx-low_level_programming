#!/bin/bash
gcc -c *.c | sudo ar rc liball.a ./*.o
