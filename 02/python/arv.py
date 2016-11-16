#-*- coding: utf-8 -*-

class Pet(object):

    def __init__(self, name, species):
        self.name = name
        self.species = species

    def getName(self):
        return self.name

    def getSpecies(self):
        return self.species

    def __str__(self):
        return "%s is a %s" % (self.name, self.species)

class Dog(Pet):

    def __init__(self, name, chases_cats):
        Pet.__init__(self, name, "Dog")
        self.__chases_cats = chases_cats #private attribute!

    def chasesCats(self):
        '''get private attribute'''
        return self.__chases_cats

    def set_chasesCats(self,value):
        '''set private attribute'''
        self.__chases_cats = value

class Cat(Pet):

    def __init__(self, name, hates_dogs):
        Pet.__init__(self, name, "Cat")
        self.hates_dogs = hates_dogs

    def hatesDogs(self):
        return self.hates_dogs


def main():
    mister_pet = Pet("Mister_pet", "Dog")
    mister_dog = Dog("Mister_dog", True)

    print isinstance(mister_pet, Pet) 
    print isinstance(mister_pet, Dog) 
    print isinstance(mister_dog, Pet) 
    print isinstance(mister_dog, Dog) 
    
    print mister_dog.chasesCats()
    print mister_pet.getName() 
    print mister_dog.getName()
    
if __name__ == '__main__':
    main()

