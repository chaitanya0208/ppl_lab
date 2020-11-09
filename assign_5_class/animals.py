class animals():
    def speak(self): pass
class cat():
    def speak(self):
        print("meow")
class cat (animals):
    def speak(self) :
     print("meow")
class kitten(cat) : pass
k = kitten()
k.speak()
class dog(animals): pass
#dog.speak()
#dog.speak()

