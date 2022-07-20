from PIL import Image, ImageDraw, ImageFont

import pandas as pd

form = pd.read_excel(r"/home/duhan/Downloads/DESU-2July.xlsx")

name_list = form['Name'].to_list()

def getXCord(name):
    OFFSET_FACTOR = 50
    BASE_X_VAL = 2800
    name = str(name)
    retVal = BASE_X_VAL - (OFFSET_FACTOR * len(name)-1)
    print(retVal)
    return retVal

current_index = 0
for i in name_list:
    im = Image.open(r"/home/duhan/Downloads/SorceImage.jpg")
    d = ImageDraw.Draw(im)
    location = (getXCord(i), 1900)
    text_color = (8, 56, 96)
    font = ImageFont.truetype(r"/home/duhan/Desktop/TIMES.ttf", 270)
    d.text(location, i, fill=text_color,font=font)
    current_index += 1
    im.save("certificate_"+str(current_index)+".pdf")