#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <cctype>
using namespace std;

int number_of_words = 0;
unordered_map<string, int> strMap;
void getCount(stringstream &ss);
int main()
{
	//��ȡ�ļ�������string
	string tmp, strFile;
	ifstream file("1.txt");
	while (getline(file, tmp))
	{
		strFile.append(tmp);
		tmp.clear();
	}
	//ȥ������ĸ�ַ�
	for (size_t i = 0; i < strFile.length(); i++)
	{
		if (ispunct(strFile[i]))
			strFile[i] = ' ';
	}
	//���ζ�ȡ���ʲ�ͳ�ƴ���
	stringstream ss(strFile);
	getCount(ss);

	freopen("out.txt", "w", stdout);
	printf("---------------------------------------------------\n");
	printf("%d words be counted! \nDetails are as follow:\n", number_of_words);
	printf("word		times		frequency\n");
	printf("---------------------------------------------------\n");
	//��ӡͳ�ƽ��
	unordered_map<string, int>::const_iterator it;

	for (it = strMap.begin(); it != strMap.end(); it++)
	{
		printf("%-20s %-5d %17.2lf%%\n", (it->first).c_str(), it->second, it->second*100.0 / number_of_words);
	}


	return 0;
}
void getCount(stringstream &ss)
{
	string word;
	while (ss >> word)
	{
		number_of_words++;
		unordered_map<string, int>::iterator it = strMap.find(word);
		if (it == strMap.end())
			strMap.insert(unordered_map<string, int>::value_type(word, 1));
		else
			strMap[word]++;
	}
}
