# Set unique but no unordered
set_itmes = {'A': set(['B', 'C']),
             'B': set(['A', 'D', 'E']),
             'C': set(['A', 'F']),
             'D': set(['B']),
             'E': set(['B', 'F']),
             'F': set(['C', 'E'])}
print(set_itmes)

# Dictionary key value pairs can use immutable keys mutabale values
dictionary = {
    'A': 12,
    'B': 122,
    'C': 45,
    'D': 76,
    'E': 23,
    'F': 2323
}
print(dictionary)

#getting index of some key
index_of_key = list(dictionary.keys()).index(key)

#add item or update to dictionary
dictionary['item3'] = 3
dictionary.update({'item3': 3})


#loop in dict
for x, y in thisdict.items():
  print(x, y)

#removing key
thisdict.pop("model")


#empty dict
thisdict.clear()


