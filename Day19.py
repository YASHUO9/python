from turtle import Turtle,Screen
import random
tim = Turtle()
screen = Screen()

colors = ["red","blue","green","yellow","orange","urple","pink"]

def move_forward():
    tim.color(random.choice(colors))
    tim.shape("turtle")
    tim.forward(100)
    
screen.listen()
screen.onkey(key = "space",fun= move_forward)
screen.exitonclick()