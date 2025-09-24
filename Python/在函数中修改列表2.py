# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 22:46
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在函数中修改列表2.py
# @Software  : PyCharm
# Here We Go!
def print_models(unprint_designs,completed_models):
    """

    :param unprint_designs:
    :param completed_models:
    :return:
    """
    while unprint_designs:
        current_design=unprint_designs.pop()
        print(f"printing models:{current_design}")
        completed_models.append(current_design)


def show_completed_models(completed_models):
    for completed_model in completed_models:
        print(completed_model)


unprinted_designs=['dawda','dawda','gaedawd']
completed_models=[]

print_models(unprinted_designs,completed_models)
show_completed_models(completed_models)