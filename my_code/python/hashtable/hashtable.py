class HashTable(object):
    
    def __init__(self,size):
        self.size = size
        self.slots = [None] * self.size
        self.data = [None] * self.size  #for storing data
        
    def put(self,key,data):
        
        hashvalue = self.hashfunction(key,len(self.slots)) #get specific hash for every key

        if self.slots[hashvalue] == None:   #if hash slot is empty set data
            self.slots[hashvalue] = key
            self.data[hashvalue] = data
        
        else:
            if self.slots[hashvalue] == key:    #if hash is present with same key update data
                self.data[hashvalue] = data  
            else:
                nexthash = self.rehash(hashvalue,len(self.slots))   #if hash is present but key is different means Colision
                                                                    #rehasing again with oldhash+1
                while self.slots[nexthash] != None and self.slots[nexthash] != key:     #till slot with hash which does not include key
                    nexthash = self.rehash(nexthash,len(self.slots))
                
                if self.slots[nexthash] == None:    #empty then dump data
                    self.slots[nexthash]=key
                    self.data[nexthash]=data
                else:
                    self.data[nexthash] = data  #update data

    def hashfunction(self,key,size):
        return key%size

    def rehash(self,oldhash,size):
        return (oldhash+1)%size
    
    
    def get(self,key):
        
        startslot = self.hashfunction(key,len(self.slots))
        data = None
        stop = False
        position = startslot
        
        while self.slots[position] != None and not stop:
            
            if self.slots[position] == key:
                data = self.data[position]
                stop = True
                
            else:
                position=self.rehash(position,len(self.slots))      #iterate with next hash again
                
                if position == startslot:
                    stop = True     #met starting point again means not found
        return data

    def __getitem__(self,key):
        return self.get(key)

    def __setitem__(self,key,data):
        self.put(key,data)

h = HashTable(10)
h.put(1,'First')
h.put(2,'Second')
h.put(5,'Fift')
h.put(6,'Sixth')
h.put(15,'Fifteen')

print(h[15])