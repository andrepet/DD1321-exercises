#-*- coding: utf-8 -*-
from arv import Dog, Cat

def main():
        fido = Dog("Fido", True)
        rover = Dog("Rover", False)
        mittens = Cat("Mittens", True)
        fluffy = Cat("Fluffy", False)

        print fido
        print rover
        print mittens
        print fluffy

        print "%s chases cats: %s" % (fido.getName(), fido.chasesCats())
        print "%s chases cats: %s" % (rover.getName(), rover.chasesCats())
        print "%s hates dogs: %s" % (mittens.getName(), mittens.hatesDogs())
        print "%s hates dogs: %s" % (fluffy.getName(), fluffy.hatesDogs())
        
if __name__ == '__main__':
        main()
