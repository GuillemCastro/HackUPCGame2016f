path = "./"
while 1:
	try:
		f = open(path + "where.txt")
	except:
		print(path)
		break
	line = f.readline()
	linelen = len(line)
	path = path + line[6:linelen-1] + "/"
	
