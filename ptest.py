#Weather.py
#@author Adam Fulton
#@date 10/11/2020

def weather():
  weather = input("What is the current weather?\n(Sunny, Cloudy, Rainy, Snowy, Windy, or Stormy)\n")
  weather = weather.lower()
  if weather == "sunny":
    print(" :) ")
  elif weather == "cloudy":
    print(" :/ ")
  elif weather == "rainy":
    print(" :( ")
  elif weather == "snowy":
    print(" -_- \n")
  elif weather == "windy":
    print(" ',:-|	")
  elif weather == "stormy":
    print(" :D ")
  else:
    print("improper weather input")
weather()
