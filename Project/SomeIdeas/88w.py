def judge(num):
	length = str(num)
	result = len(length)
	return result

def split(num):
	appendnum=str(num)
def reverse(num):
	strnum=str(num);
	strnum=strnum[::-1]
	return strnum




if __name__ == '__main__':
	f = open('88w_demo5.txt','a+',encoding='utf-8')
	case="    case "
	cout="	    cout<<"

	aa="\"a\""
	bb="\"b\""
	cc="\"c\""
	endl="<<endl;\n"
	tab="  "
	for i in range(1,100000):
		f.write(case)
		f.write(str(i))
		f.write(':')
		f.write('\n')

		f.write(cout)
		f.write("\"是"+str(judge(i))+"位数\"")
		f.write(endl)

		# f.write(cout)
		# f.write(split(i))
		# f.write(endl)

		f.write(cout)	
		f.write("\"倒过来是："+reverse(i)+"\"")
		f.write(endl)

		f.write("		break;\n")



	f.write("	}\n")
	f.write("}\n")
	f.close()