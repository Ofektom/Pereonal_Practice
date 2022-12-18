#!/usr/bin/python3
import ctypes
spam = ctypes.CDLL('./libcalc.so')

spam.add(4, 5)
