#!/usr/bin/python

import sys
import string

def main():
	s = raw_input()
	start = s.find('"')
	end = -1
	while start != -1:
		if start != 0:
			subs = s[: start - 1]
			substep = subs.split(' ')
			for i in substep:
				if len(i):
					print "<" +  i + ">"
			s = s[start: ]
		else:
			end = s[start + 1: ].find('"')
			print "<" + s[start + 1: end + 1] + ">"
			s = s[end + 3:]
		start = s.find('"')
	if len(s):
		step = s.split(' ')
		for i in step:
			if len(i):
				print "<" + i + ">"

main()
