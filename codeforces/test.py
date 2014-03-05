#!/usr/bin/python

import sys
import string

def main():
	s = raw_input()
	print s
	print s[:-1]
	print s[::-3].find('/')

main()
