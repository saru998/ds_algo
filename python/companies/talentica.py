class Excluded_product:
  def __init__(self,keyword_array):
    self.keyword_array = keyword_array
    self.tax_per = 0

class Product():
  def __init__(self, name ,type_array,price,quantity):
    self.name = name
    self.type_array = type_array
    self.tax = self.get_type_tax(type_array)
    self.unit_price = price
    self.final_price = quantity * price
    self.final_tax_price = quantity * price * (self.tax/100)
    self.total_price = self.final_price + self.final_tax_price
    self.addtional_tax_price = self.total_price * (self.get_addtional_tax()/100)

  def get_type_tax(self,type_array):
    import re
    for x in type_array.keyword_array:
        if re.search(x, self.name.lower()):
            return 0
    return 12.5

  def get_addtional_tax(self):
    import re
    if re.search('imported', self.name.lower()):
            return 2.4
    else:
         return 0
    

class Basket(Product):
  def __init__(self, excluded_item_array):
    self.excluded_array = Excluded_product(excluded_item_array)

  def get_invoice(self):

    count = 0
    sub_total = 0
    total_tax = 0
    additional_tax = 0

    while(1):
        i = input()
        count +=1

        if i == "":
            break
        string = i.split('@ ')
        string2 = string[0].split(' ')
        quantity = int(string2[0])
        invoice_product = ' '.join(string2[1:])
        cost_per_unit = float(string[1])
        
        
        Product.__init__(self,i,self.excluded_array,cost_per_unit,quantity)

        sub_total += self.final_price
        total_tax += self.final_tax_price
        additional_tax += self.addtional_tax_price
        
        if count == 1: 
            print(' ')
            print('NAME --','QUANTITY --','UNIT_COST --','COST')
            print('-------------------------------------------')
        print(invoice_product.strip() +" -- "+str(quantity)+" -- "+str(self.unit_price)+" -- "+str(self.unit_price * quantity))

    print('Sub Total:',sub_total)
    print('Value Added tax:',total_tax)
    print('Additional Tax',additional_tax)
    print('Total',sub_total+total_tax+additional_tax)

b = Basket(['crocin','potato'])
b.get_invoice()

# Simple inheritence where i have basket and product class and basket class inheritate product class (is a relationship)
# Created Excluded_product object inside Basket aggregation relationship (has a)
# Keeping one to one for product_type mapping was first option but i dint dint test cases for safe sure is used regex comparison.

# Input 1
# 2 soap @ 30.50
# 1 potato chips packet @ 22.50
# 1 music CD @ 250.59
# 1 imported bottle of perfume @ 2100.99
# 1 packet of crocin @ 19.75

# Input 2
# 1 imported handbag @ 2200.59
# 1 imported sunglasses @ 1250.00
# 1 perfume bottle @ 450.49
# 1 box of imported chocolates @ 450.25
# 1 Teddy bear @ 250.59