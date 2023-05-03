import matplotlib.pyplot as plt
from matplotlib import rcParams
import pandas as pd
import numpy as np
from openpyxl import load_workbook

config = {
    "font.family":'serif',
    "font.size": 18,
    "mathtext.fontset":'stix',
    "font.serif": ['SimSun'],
}
rcParams.update(config)

nr_max = 1
nr_min = 0.1

def calculation(excel_data):
    print(list(excel_data))
    all_data = []
    for i in range(len(list(excel_data))):
        all_data.append(excel_data[list(excel_data)[i]].values[0])
    
    print(all_data)

    plt.bar(list(excel_data), all_data)
    plt.show()
    min_value = min(all_data) 
    max_value = max(all_data)
    for i, x in enumerate(all_data):
        all_data[i] = (x-min_value) / (max_value-min_value) * (nr_max - nr_min) + nr_min
    print(all_data)

    plt.bar(list(excel_data), all_data)
    plt.show()


    # plt.xlabel("迭代次数")#横坐标名字
    # plt.ylabel("训练精度")#纵坐标名字


if __name__ == '__main__':
    excel_data = pd.read_excel('./data1.xlsx', sheet_name='Sheet1', header=0)
    calculation(excel_data)