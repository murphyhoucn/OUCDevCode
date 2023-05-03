void expand(char* s1, char* s2) {
	int i, j, m;
	j = 0;
	for (i = 0; s2[i]; i++)
		if (s2[i] != '-')//以‘-’为参照，看它前后是否为同一类型
			s1[j++] = s2[i];//非‘-’的字符直接复制
		else {
			if (islower(s2[i - 1]) && islower(s2[i + 1]) || isdigit(s2[i - 1]) && isdigit(s2[i + 1])) {             //是同一类型
				int k = s2[i + 1] - s2[i - 1];//k表示要补充的字符数
				for (m = 1; m < k; m++)
					s1[j++] = s1[i - 1] + m;
			}
			else//‘-’两侧的字符不是同类的，就把‘-’赋过去
				s1[j++] = '-';
		}
	s1[j] = '\0';//别忘了\0

}