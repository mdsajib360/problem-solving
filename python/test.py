class pc:
    def __init__(self, hdd, ram, pro):
        self.hdd = hdd;
        self.ram = ram;
        self.pro = "ryzen 7"
        print("hello world ")

    def printItems(self):
        return "your hardwares are " + self.hdd + " hdd " + self.ram + "ram & " + " " + self.pro


class feature(pc):
    print("feature orf b")
    super().__init__()


pc1 = pc("1tb", "8gb", pro="ryzen 5")
pc1.pro = "ryzen 5"
print(pc.printItems(pc1))

x = feature()
