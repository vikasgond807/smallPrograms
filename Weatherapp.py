# Simple GUI Weather App using python tkinter
from tkinter import *
import requests
import time
import json 
root=Tk()
my_string=StringVar()
my_string1=StringVar()

def weather(root):
    city=textfield.get()
    api_request="http://api.openweathermap.org/data/2.5/weather?q="+city+"&appid=06c921750b9a82d8f5d1294e1586276f"
    json_data=requests.get(api_request).json()
    conditon=json_data['weather'][0]['main']
    temp=int(json_data['main']['temp']-273.15)
    min_temp=int(json_data['main']['temp_min']-273.15)
    max_temp=int(json_data['main']['temp_max']-273.15)
    pressure=json_data['main']['pressure']
    humidity=json_data['main']['humidity']
    wind_speed=json_data['wind']['speed']
    sunrise=time.strftime("%I:%M:%S",time.gmtime(json_data['sys']['sunrise']-21600))
    sunset=time.strftime("%I:%M:%S",time.gmtime(json_data['sys']['sunset']-21600))

    final_info="\n"+str(temp)+"'C"
    final_data="\n"+"Max Temp : "+ str(max_temp)+" Min Temp: "+str(min_temp)+"\n"+"Pressure "+str(pressure)+"\n"+"Humidity "+str(humidity)+"\n"+"Sunrise Time "+str(sunrise)+"\n"+"Sunset time "+str(sunset)
    my_string.set(final_info)
    my_string1.set(final_data)


root.geometry("700x400")
root.title("Weather App")

Label(root,text=" GET WEATHER INFO ",font="poppins 18").grid(row=0,column=0,padx=40)
Label(root,text="Enter city name",font="helvetica 14 ").grid(row=1,column=0,padx=8)


label1=Label(root,font="helvetica 18",textvariable=my_string).grid(row=2)
label2=Label(root,font="helvetica 22",textvariable=my_string1).grid(row=3)

textfield=Entry(root,font="helvetica 14")
textfield.grid(row=1,column=1,pady=12)
textfield.focus()

textfield.bind('<Return>',weather)

root.mainloop()
