# -*- coding : utf-8 -*-
# @Time      : 2020/11/13 22:36
# @Author    : MurphyHou
# @Proj_Name : Python projects
# @File_Name : 在函数中修改裂变.py
# @Software  : PyCharm
# Here We Go!
unprint_designs=['phdaw','dada','dawdawda']
completed_models=[]

while unprint_designs:
    current_design=unprint_designs.pop()
    print(f"printing models:{current_design}")
    completed_models.append(current_design)

print("\nthe following models have been printed")
for completed_model in completed_models:
    print(completed_model)