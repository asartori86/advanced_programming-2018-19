import copy
class Sequence():
    def __init__(self, components):
        self._components = list(copy.deepcopy(components))
        
    def __len__(self):
        return len(self._components)
    
    def __iter__(self):
        return iter(self._components)
    
    def __getitem__(self,index):
        return self._components[index]
    
    def __eq__(self,other):
        return len(self) == len(other) and all(a==b for a,b in zip(self,other))
        #return self._components == other._components # would be sufficient
    
    def __delitem__(self,index):
        del self._components[index]
    
    def __setitem__(self,key,value):
        self._components[key] = value
    
    def insert(self, key, value):
        self._components.insert(key,value)
        
    def __str__(self):
        return str(self._components)
    
    def __copy__(self):
        return copy.deepcopy(self._components)

