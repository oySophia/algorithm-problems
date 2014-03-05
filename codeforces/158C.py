#!/usr/bin/python

import sys
import string

def main():
	n = int(raw_input())
	path = "/"
	for i in range(n):
		s = raw_input()
		if s.find('pwd') != -1:
			print path
		else:
			start = s.find(' ') + 1
			if s[:start + 1].find('/') != -1:
				path = "/"
				start += 1
			each_path = s[start: ].split('/')
			for each in each_path:
				if each.find('..') != -1:
					if path[1:].find('/') != 0:
						path = path[:-1]
						path = path[:-path[::-1].find("/")]
				else:
					path = path + each + "/"

main()
