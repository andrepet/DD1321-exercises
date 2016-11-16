#-*- coding: utf-8 -*-

class Pet(object):

    def __init__(self, name, species, x):
        self.name = name
        self.species = species
        self.age = x

    def getName(self):
        return self.name

    def getSpecies(self):
        return self.species

    def __str__(self):
        return "%s is a %s" % (self.name, self.species)

def main():
    polly = Pet("Polly", "Parrot", 17)
    print "Polly is a %s" % polly.getSpecies()
    print "Polly is a %s" % Pet.getSpecies(polly)
    print "Polly is a %s" % Pet.getSpecies()
	
if __name__ == '__main__':
    main()

