# -*- coding : utf-8 -*-
# @Time      : 2020/11/27 22:58
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : test_name_function2.py
# @Software  : PyCharm
# Here We Go!
# 断言测试失败的例子
import unittest
from name_function import get_formatted_name

class NameTestCase (unittest.TestCase):
    '''测试name_function.py'''

    def test_first_last_name(self):
        '''能够正确处理J J这样名字吗？'''
        formatted_name=get_formatted_name('jj','aa','ssss')
        self.assertEqual(formatted_name,'Jj Aa Ssss')


if __name__=='__main__':
    unittest.main()