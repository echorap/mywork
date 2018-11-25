#!/usr/bin/python
 
import sys,time
 
start = sys.argv[1]
end = sys.argv[2]
size = sys.argv[3]
 
 
def add(start,end,size):
	def add1(number,size):
		number[-1] += 1
		if number[-1] == size:
			del number[-1]
			if number == []:
				number.append(1)
			else:
				if number[-1] == size - 1:	
					number = add1(number,size)
				else:
					 number[-1] += 1
			number.append(0)
			return number
		else:
			return number
	start = map(int,start.split("_"))
	end = map(int,end.split("_"))
	size = int(size)
	result_list = []
	result_list.append(list(start))
	number = start
	while number != end:
		number = add1(number,size)		
		result_list.append(list(number))
	return result_list
if __name__ == "__main__":
	print(add(start,end,size))
