class pc:
    def __init__(self):
        print("hello world ")
    def feature2(self):
        print("feature 2")
    
    
class b(pc):
    def __init__(self):
        print("feature of b")
        super().__init__()
    # acces super class method also 
    def feature_of_b(self):
        print("feature of b instance method")
        super().feature2()
        
pc1 = b().feature_of_b()

        