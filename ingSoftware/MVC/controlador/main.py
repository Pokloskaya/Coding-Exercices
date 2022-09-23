from Person import Person

def showAll():
      #gets list of all Person objects
      people_in_db = Person.getAll()
      print('In our db we have %i users. Here they are:' % len(people_in_db))
      for item in people_in_db:
        print( item.name())

 
def end():
      print( 'Goodbye!')
  

def start():
  print( 'Do you want to see everyone in my db?[y/n]')
  inputv = input()
  if inputv == 'y':
    return showAll()
  else:
    return end()

if __name__ == "__main__":
  #running controller function
  start()